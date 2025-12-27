// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< " Enter the value of n: ";
//     cin >> n;
//     for(int i=0;i<n;i++){
//         cout<<"Radhe And krishana"<< endl;
//         cout<< "satyam pandey"<< endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int count;
//     cout<<"Enter the value count : ";
//     cin>> count;
//     while(count<=5){
//         cout<<"HI Radhe"<<endl;
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//               sum = sum+i;
//         if(i==0){
//             continue;
//         }
//         // sum = sum+i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>> n;
//     int sum =0;
//     for(int i=0;i<=n;i++){
//         if(i==0){
//             continue;
//         }
//         if(i%2!=0){
//             cout<<i<<endl;
//             sum = sum+i;
//         }
//     }
//     cout<<"sum = "<<sum<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n : ";
//     cin>> n;
//     int flag = 0;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             flag = 1;
// break;
//         }
//     }
//     if(flag==1) cout<<"It is not a prime number";
//     else cout<<"it is a prime number";
//     return 0;
// }

// // efficient method for prime number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>> n;
//     bool primeno = true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             primeno = false;
//             break;
//         }
//     }
//     if(primeno ==false) cout<<"It is not a prime number";
//     else cout<<"It is a prime number";
//     return 0;
// }


