 public int lengthOfLongestSubstring(String s) {
        Set<Character> mxString = new HashSet<>();
        int n = s.length();
        int cnt = 0;
        int mx = 0;
        for(int i=0; i<n; i++){ 
            if(!mxString.contains(s.charAt(i))){
                mxString.add(s.charAt(i));
                mx = Math.max(mx,i-cnt+1);
            }
            else {
                while(mxString.contains(s.charAt(i))){
                    mxString.remove(s.charAt(cnt));
                    cnt++;
                }
                mxString.add(s.charAt(i));
            }
        }

        return mx;
    }