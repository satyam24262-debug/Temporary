// #include<iostream>
// using namespace std;
// void f(int n){
//     if(n==1){
//         cout<<"1"<<" "<<"voh bete moj kardi"<<"\n";
//         return ;
//     }
//     cout<<n<<" ";
//     f(n-1);
//     cout<<"Radhe Radhe"<<"\n";
//     return ;
// }
// int main(){
//     int n = 10;
//     f(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int f(int x){
//     int factorial;
//       if(x==1||x==0) return 1;
//       factorial = x*f(x-1);
//       cout<<"Radhe Radhe"<<"\n";
//       cout<<factorial<<"\n";
//       return factorial;
//       cout<<"Krishana"<<"\n";
// }
// int main(){
//     int n;
//     cout<<"Enter the value n = ";
//     cin>>n;
//     cout<<"The factorial of "<<n<<" is : "<<f(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int f(int x){
//     if(x==1) return 1;
//     return f(x-1) + x;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int sum = f(n);
//     cout<<"sum is : "<<sum;
//     return 0;
// }

// Fibbonaci Serise

#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
           if(n==0||n==1) return n;
          return (fibo(n-1) + fibo(n-2));
}
int main(){
    int n ;
    cout<<"Enter the nth term of  the fibonacci serise : ";
    cin>>n;
    cout<<"The nth term of the fibonacci serise is : "<< fibo(n);
    return 0;
}



