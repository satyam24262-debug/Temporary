// #include<iostream>
// using namespace std;
// int f(int deciNo){
//     int power = 1, sum = 0;
//     while(deciNo!=0){
//         int rem = deciNo%10;
//         deciNo /= 10;
//         sum  += power*rem;
//         power *=2; 
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter a binary number = ";
//     cin>>n;
//     int dc = f(n);
//     cout<<"The decimal number of the given binary number is : "<<dc;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int f(int deci){
//     int power = 1, sum =  0;
//     while(deci!=0){
//         int rem = deci%2;
//         deci /= 2;
//         sum += power*rem; 
//         power *= 10; 
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter a decimal number = ";
//     cin>>n;
//     int bn = f(n);
//     cout<<"The Binary Number of the given Decimal Number is : "<<bn;
//     return 0;
// }