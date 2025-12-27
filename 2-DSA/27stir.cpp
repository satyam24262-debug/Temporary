// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     // char str[] = {'a','b','c','\0'}; // null is must be required at end of the character array
//     char str[] = "satyam"; // it  is also stored in character array manner , also already null character is added
//     cout<<strlen(str)<<"\n";
//     cout<<str; 
//     cout<<"\n"<<str[0]<<"\n";
//     cout<<str[6]<<"\n"; // it is possible because of at the end of a sting a null character is exit
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     char str[100];
//     cout<<"Enter the string = ";
//     // cin>>str;
//     // cin.getline(str,100);
//     cin.getline(str,100,'@'); // @ is the  delimiter which is avoid the printing after its use
//     cout<<"output = "<<str;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[13];// you have to give 1+string size because +1 size space is occupied by null character
//     cout<<"Enter the string = "<<"\n";
//     cin.getline(str,13);
//     cout<<"output string  = "<<"\n";
//     // for(int i=0;i<=12;i++){
//     //     cout<<str[i]<<" ";
//     // }
//     for(char ch : str){
//         cout<<ch<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[] = "satyam pandey";
//     int len =  0;
//     int i = 0;
//     while(str[i]!='\0'){
//        len++;
//        i++;
//     }
//     cout<<"length of the string = "<<len;
//     return 0;
// }

// #include<iostream>
// // #include<cstring> // use only on character array not use at the time of string use
// using namespace std;
// int main(){
//     string str = "Satyam Pandey"; // string are dynamic in nature because of it is resized at the run time
//     cout<<str<<" ";
//     str = "WOW";
//     cout<<str;
//     // char ch[] = "Hello World";
//     // ch = "Rhade"; // we can not modify at the run time
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str1 = "Rad";
//     string str2 = " Syam";
//     string str3 = str1+str2;
//     cout<<str1.length()<<"\n";
//     cout<<str3<<"\n";
//     cout<<(str1==str2);// false return 0.
//     cout<<"\n"<<(str1>str2)<<"\n"; // return 1. do not matter the size of the string because of it is messured on the basis of lacikographic manner
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string = ";
//     // cin>>str;// also it dose not print after the  space
//     getline(cin,str);
//     cout<<str;
//     cout<<"\n";
//     for(char ch:str){
//         cout<<ch<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using  namespace std;
// int main(){
//     int arr[4] = {1,2,3,4};
//     // for(int i=3;i>=0;i--){
//     //    cout<<arr[i]<<" ";
//     // }
//     int st = 0;
//     int end = 3;
//     // while(end>=st){
//     //     cout<<arr[end]<<" ";
//     //     end--;
//     // }
//     while(end>=st){
//         swap(arr[end],arr[st]);
//         end--;
//         st++;
//     }
//     for(int val:arr){
//         cout<<val<<" ";
//     }
//     return 0;
// }
 
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char ch[] =  "satyam";
//     int st = 0;
//     int end =  5;
//     while(st<end){
//         swap(ch[st],ch[end]);
//         end--;
//         st++;
//     }
//     for(char val:ch){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str  = "Hello World";
//     reverse(str.begin(),str.end());
//     cout<<str;
//     return 0;
// }

// // for pailindrom
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str = "madam";
//     string str1;
//     int st =0 , end = str.length()-1;
//     cout<<str.length()<<"\n";
//     while(end>=st){
//         str1 = str1+str[end];
//         end--;
//     }
//     cout<<(str1==str);
//     return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "racecar";
    int length = str.length();
    int st = 0,end =length-1;
    int l = str.length()/2;
    // cout<<length;
    int count = 0;
    while(end>st){
        if(str[end]==str[st]){
            count++;
        }
         st++;
        end--;
    }
    // cout<<count;
    if(count==l) cout<<"it is pailindrom";
    else cout<<"it is not a pailindrom";
    // cout<<"output string = "<<str;
    return 0;
}
