// problem link: https://leetcode.com/problems/validate-ip-address/description/
// 
// string validIPAddress(string queryIP) {
//         if(queryIP.contains('.')){

//             for(int j=0; j<queryIP.length(); j+=3){
//                 string word="";
//                 int i=j;
//                 while(i<queryIP.length()){
//                     if(queryIP[i]=='.') break;
//                     word +=queryIP[i];
//                     i++;
//                 }
//                 stringstream ss(word);
//                 int num=0;
//                 ss>>num;
//                 string valid = to_string(num);

//                 if((num < 0 || num > 255) && word == valid){
//                    return "Neither";
//                 }

//             }

//             return "IPv4";
//         }
//         else if(queryIP.contains(':')){
//             int idx = 0;
//             for(int i=0; i<queryIP.length(); i=idx+1){
//                 string word = "";
//                 int n = queryIP.length();
//                 while(idx<n){
//                     if(queryIP[idx]==':') break;
//                     if((queryIP[idx]>='0' && queryIP[idx]<='9') || (queryIP[idx]>='A' && queryIP[idx]<='F') || (queryIP[idx]>='a' && queryIP[idx]<='f')){
//                         word +=queryIP[idx];
//                         idx++;
//                     }
//                     else{
//                         return "Neither";
//                     }
                    
//                 }

//                 if(word.length()>4) return "Neither";


//             }

//             return "IPv6";
//         }
//         else return "Neither";
// }
