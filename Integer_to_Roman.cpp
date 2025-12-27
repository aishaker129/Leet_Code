// Problem Link: https://leetcode.com/problems/integer-to-roman/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string intToRoman(int num) {
        string s = "";

        if(num>=1000){
            int m = num/1000;
            num -=(m*1000);
            while(m--){
                s+='M';
            }
        }
        if(num>=900){
            int cm = num/900;
            num -= 900;
            s +="CM";
        }
        if(num>=500){
            num -= 500;
            s +="D";
        }
        if(num >= 400){
            int cd = num/400;
            num -=400;
            s += "CD";
        }
        if(num>=100){
            int c = num/ 100;
            num -=(c*100);
            while(c--){
                s +='C';
            }
        }
        if(num >= 90){
            num -= 90;
            s +="XC";
        }
        if(num >= 50){
            num -= 50;
            s +='L';
        }
        if(num >= 40){
            num -= 40;
            s +="XL";
        }
        if(num >= 10){
            int x = num / 10;
            num -= (x*10);
            while(x--){
                s +="X";
            }
        }
        if(num >= 9){
            num -= 9;
            s +="IX";
        }
        if(num >= 5){
            num -= 5;
            s += "V";
        }
        if(num >= 4){
            num -= 4;
            s += "IV";
        }
        if(num>=1){
            while(num--){
                s +="I";
            }
        }

        return s;
    }
};
