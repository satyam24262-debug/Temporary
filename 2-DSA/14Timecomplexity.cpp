// prime number complexity = n^1/2
// #include<iostream>
// using namespace std;
// int  main(){
//     int n;
//     cout<<"Enter the number = ";
//     cin>>n;
//     int flag = 1;
//     for(int i=2;i*i<=n;i++){
// if(n%i==0){
//     flag = 0;
//     break;
// }
//     }
//     if(flag == 0) cout<<"It is not a prime number";
//     else cout<<"It is a prime number";
//     return 0;
// }

// selection sort time complexity = n^2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]= {8,4,3,9,2};
//     int n=5;
//     for(int i=0;i<n-1;i++){
//         int mindx = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[mindx]) mindx = j;
//         }
//         swap(arr[i],arr[mindx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\n";
//     }
//     return 0;
// }

// Time complexity and space complexity of factorial using recursion = O(n)
// #include<iostream>
// using namespace std;
// int f(int x){
//     if(x==0) return 1;
//     int fact;
//      fact = x*f(x-1);
//     return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int fact = f(n);
//     cout<<"factorial is = "<<fact;
//     return 0;
// }

// fibonacci series time complexity = O(2^n) and space complexity = O(n)
// #include<iostream>
// using namespace std;
// int f(int x){
//     if(x==0||x==1) return x;
//     return f(x-1)+f(x-2);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int n = f(i);
//         cout<<n<<" ";
//     }
//     return 0;
// }

