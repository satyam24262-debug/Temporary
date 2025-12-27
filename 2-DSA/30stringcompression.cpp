// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "satayamaseasnant";
//     int n = str.length();
//     int count;
//     for(int i=0;i<n;i++){
//         count = 1;
//         for(int j = i+1;j<n;j++){
//             if(str[i]==str[j]){
//                 str.erase(j,1);
//                 n--;
//                 j--;
//                 count++;
//             }
//         }
//         if(count>1){
//             string numstr = to_string(count);// convert number in a string
//             str.insert(i+1,numstr);
//             i++;
//             n++;
//         }
//     }
//     cout<<str;
//     return 0;
// }
                                                             
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "aabbccc";
//     int n = str.length();
//     int count;
//     for(int i=0;i<n;i++){
//         count = 1;
//         int j=i+1;
//         while(j<n){
//             if(str[i]==str[j]){
//                 count++;
//                 str.erase(j,1);
//                 j--;
//                 n--;
//             }
//          j++;
//         }
//         if(count>1){
//             string strnum = to_string(count);
//             n++;
//             str.insert(i+1,strnum);
//             i++;
//         }
//     }
//     // cout<<str;
//     return 0;
// }
