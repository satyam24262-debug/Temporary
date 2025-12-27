// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a real number = "<<"\n";
//     cin>>n;
//     bool bol = true;
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0) 
//             { bol = false;
//                 break;
//             }
//         }
//         if(bol==false) cout<<" not a prime ";
//         else cout<< "prime";
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// string f(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0)
//         { return "not a prime number"; 
//                       }
//     }
//     return "prime number";
// }
// int main(){
//     int n;
//     cout<<"Enter a Natural number = ";
//     cin>>n;
//     cout<<f(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// string f(int n){
//     for(int i=2;i*i<=n;i++){ 
//         if(n%i==0){ return "not a prime number ";}
// }
// return "prime number";
// }
// int main(){
//     int n;
//     cout<<"Enter Range of the number = ";
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         cout<<i<<" = " <<f(i)<<endl;
//     }
//     return  0;
// }

// // Sieve of Eratosthnes = important concept and use for prime number for min timecomplexity 
// #include<iostream>
// #include<vector>
// using namespace std;
// int f(int n) 
// {vector<bool> isprime( n,true);
// int count = 0;
// for(int i=2;i<n;i++){
// if(isprime[i]){
//     count++;
//     for(int j=i*2;j<n;j=i+j){
//         isprime[j] = false;
//     }
// }
// }
// return count;
// }
// int main(){
//     int n;
//     cout<<"Enter the range of the number = ";
//     cin>>n;
//    cout<<"Total number of prime number between the range are = "<< f(n);
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// // int f(int n){
// //     int rev = 0;
// //     int count = 0;
// //     int  sum = 0; 
// //     while(n!=0){
// //          int last = n%10;
            // if(rev>INT_MAX/10&&rev<INT_MIN/10) return 0;
// //          rev = rev*10+last;
// //          n = n/10;
// //          count++;
// //          sum +=last;
// //     }
// //     cout<<sum<<endl;
// //     cout<<rev<<"\n";
// //     return count;
// // }
// int main(){
//     int n;
//     cout<<"Enter a number = ";
//     cin>>n;
//     // cout<<" total number of digits are = "<< (int)(log10(n)+1); // shortcut for finding the total number digits of a given number
//     // cout<<f(n);
//     return 0;
// }

// // Armstrong number
// #include<iostream>
// #include<cmath>
// using namespace std;
// string f(int n){
//     int n1 = n;
//     int n2 = n;
//     int count = 0;
//     int sum = 0;
//     while(n!=0){
//         n = n/10;
//         count++;
//     }
//     while(n1!=0){
//         int rev = n1%10;
//         n1  = n1/10;
//         int power = pow(rev,count);
//         sum += power;
//     }
//     return (sum==n2 ? "Armstrong number" : "not a Armstrong number");
// }
// int main(){
//     int n;
//     cout<<"Enter the number n = ";
//     cin>>n;
//     cout<<f(n);
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int f(int n){
//     int count = 0;
//     while(n!=0){
//         count++;
//         n =  n/10;
//     }
//     return count;
// }
// string f1(int n , int count){
//     int n1 = n;
//     int sum = 0;
//     while(n!=0){
//         int rev = n%10;
//         n = n/10;
//         int power = pow(rev,count);
//         sum += power;
//     }
//     return (sum==n1 )? "it is a Armstrong number": "not a Armstrong number"; 
// }
// int main(){
//     int n;
//     cout<<"Enter a number = ";
//     cin>>n;
//     int numdig = f(n);
//     cout<<f1(n, numdig);
//     return 0;
// }

// // GCD - Greatest Common Divisor (HCF)
// #include<iostream>
// using namespace std;
// int f(int a,int b){
//     int max = INT_MIN;
//     for(int i=1;i<min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             if(i>max) max = i;
//         }
//     }
//     return max;
// }
// int main(){
//     int a , b;
//     cout<<"Enter the value of a and b = ";
//     cin>>a>>b;
//     cout<<"GCD value is = "<<f(a,b);
//     return 0;
// }

// Euclid's Algorithm
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a=20,b=28;
//     int G;
//   while(a!=0 && b!=0){
//     if(a>b) {
//         a = (a - b) ;
//         G = max((a-b),b);
//     }
//     else{
//         b = (b-a); 
//         G = max(a,(b-a));
//     }
//   }
//   cout<<G;
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int gcd(int a , int b){
//     while(a!=0 && b!=0){
//         if(a>b) {
//             a = a %b;// a = a-b ; also used it
//         }
//         else { 
//             b = b %a; // b = b-a; also used it
//         }
//     }
//     return (a>b) ? a:b;
// }
// int f(int a, int b){
//     return (a*b)/ gcd(a,b);
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b: - ";
//     cin>>a>>b;
//     cout<<"GCD is = "<< gcd(a,b)<<endl;
//     cout<<"LCM is = "<<f(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int rev(int n){
//     int rev = 0;
//     while(n!=0){
//         int ld = n%10;
//         if(rev>INT_MAX&&rev<INT_MIN) return 0;
//         rev = rev*10+ld;
//         n = n/10;
//     }
//     return rev;
// }
// string palin(int n){
//     if(n<0) return "oh! it is not valid number";
//     return (rev(n)==n) ? "Hello , it is a palindrom": "Oh! it is not a palindrom";
// }
// int main(){
//     int n;
//     cout<<"Enter a number = ";
//     cin>>n;
//     cout<<palin(n);
//     return 0;
// }




