// Array is used to automatically in pass by refrence
// #include<iostream>
// using namespace std;
// void  f(int arr[] , int size){
//         for(int i=0;i<size;i++){
//             arr[i] = 2*arr[i];
//         }
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
// cout<<sizeof(arr)/sizeof(int);
//     f(arr,5);// pass by reference
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\n";
//     }
//     return 0;
// }

// Linear search Algorithm
// #include<iostream>
// using namespace std;
// int target(int arr[],int size){
//     bool Bool = false;
//     int target;
//     cout<<"Enter your target:-";
//     cin>>target;
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             Bool = true;
//         }
//     }
//     return Bool;
// }
// int main(){
//     int arr[5] = {1,2,4,5};
//     int size = sizeof(arr)/sizeof(int);
//     cout<<target(arr,size);
//     return 0;
// }


// //  using two pointer way
// #include<iostream>
// using namespace std;
// // void f(int arr[] , int n){
// //  int start = 0, end = n-1;
// //     while(end>start){
// //         swap(arr[start],arr[end]);
// //      start++;
// //      end--;
// //     }
// // }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start = 0, end = n-1;
//     while(end>start){
//         swap(arr[start],arr[end]);
//      start++;
//      end--;
//     }
//     // f(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\n";
//     }
//     return 0;
// }


// // // unique value of the array
// #include<iostream>
// using namespace std;
// void f(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int count = 0;
//         for(int j=0;j<n;j++){
//         if(arr[i]==arr[j]){
//             count++;
//         }
//     } 
//     if(count==1){
//         cout<<arr[i]<<" ";
//     }
// }
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<"\n";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : "<<"\n";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     f(arr,n);
//     return 0;
// }

// // Intersection of two arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of first array is: ";
//     cin>>n;
//     int arr1[n];
//     int r;
//     cout<<"Enter the size of the second array is: ";
//     cin>>r;
//     int arr2[r];
//     cout<<"Enter the elements of the first array are : "<<"\n";
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"Enter the elements  of the second array are : "<<"\n";
//     for(int i=0;i<r;i++){
//         cin>>arr2[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<r;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i];
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



