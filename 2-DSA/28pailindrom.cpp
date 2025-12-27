// #include<iostream>// timecomplexity is O(n)
// // #include<string>
// // #include<algorithm>
// // #include<cctype>// using for  isalnum and tolower
// using namespace std;
// bool isAlphaNumeric(char ch){
//     if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z'))
//     return true;
//     else return false;
// }
// bool palindrome(string str,int n){
//     int st = 0, end = n-1;
//     while(end>st){
//         if(isAlphaNumeric(!str[st]))
//         {    st++;
//             continue; 
//         }
//        if (isAlphaNumeric(!str[end]))
//         {   
//              end--;
//             continue;
//         }
//         if(tolower(str[st])!=tolower(str[end])){
//         return false;
//         }
//         else {
//             end--;
//             st++;
//         }
//     }
//     return true ;
// }
// int main(){
//     string str = "aba";
//     int n = str.length();
//     bool ch = palindrome(str,n);
//     // cout<<ch;
//     // cout<<"\n"<<boolalpha<<ch;
//     cout<<(ch ? "palindrom" : "not a palindrom");
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'A';
//     cout<<toupper(ch);
//     cout<<"\n"<<tolower(ch);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool iscorr(int vec ){
//     if(vec>=0&&vec<=9){
//         return true;
//     }
//     else{
//        return false;
//     }
// }
// bool palin(vector<int>vec,int n){
//     int st = 0;
//     int end = n-1;
//     while(end>st){
//         if(!iscorr(vec[st])){
//             st++;
//             continue;
//         }
//         if(!iscorr(vec[end])){
//             end--;
//             continue;
//         }
//         if(vec[st]!=vec[end]){
//             return false;
//         }
//         else{
//             st++;
//             end--;
//         }
//     }
//     return true;
// }
// int main(){
//      vector<int>vec = {1,2,'&'};
//      int n = vec.size();
//      bool ch = palin(vec,n);
//     //  cout<<ch;
//      cout<<(ch ? "palindrom":"not palindrom");
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string = ";
//     getline(cin,str);
//     string part ;
//     cout<<"Enter the removeble part = ";
//     getline(cin,part);
//     int n = part.length();
//     while(str.find(part)<str.length()&&str.length()>0){
//         int st = str.find(part);
//         int end = n;
//         str.erase(st,end);
//     }
//     cout<<str;
//     return 0;
// } 
