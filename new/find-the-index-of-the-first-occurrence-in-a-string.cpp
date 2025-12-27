// Problem Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
