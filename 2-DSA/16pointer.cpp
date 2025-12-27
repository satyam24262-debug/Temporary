// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int *ptr = &a;
//     int **ptr1 = &ptr;
//     // cout<<ptr<<endl;
//     // cout<<ptr1<<endl;
//     // cout<<*ptr<<endl;
//     // cout<<**ptr1<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // int f( int *ptr){
// //     *ptr = 5; // pass by reference using pointer concept
// //     return *ptr;
// // }
// void f(int &b){
//     b = 20;// pass by reference using alias concept
// }
// int main(){
//     int a = 10;
//     // int n = f(&a);
//     // cout<<n<<endl;
//     f(a);
//     cout<<a<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     cout<<arr<<endl;
//     cout<<*arr<<endl;
//     cout<<*arr+3<<endl;
//     int a = 5;
//    arr = &a;// contant pointer 
//     return 0;
// }

// Pointer Arithmetic
// #include<iostream>
// using namespace std;
// int main(){
//     // int a = 10;
//     // int *ptr = &a;
//     // cout<<ptr<<endl;
//     // ptr++;
//     // cout<<ptr<<endl;// Increase  the size of the integer
//     // ptr--;
//     // cout<<ptr<<endl;
//     // ptr = ptr+2;
//     // cout<<ptr<<endl;
//     int arr[] = {1,2,3,4,5};
//     // cout<<*arr<<endl;
//     // cout<<*arr+1<<endl;
//     // cout<<*arr+2<<endl;
//     // cout<<*arr+3<<endl;
//     // cout<<*arr+4<<endl;
//     int *ptr1;
//     int *ptr2 = ptr1+2;
//     cout<<ptr2-ptr1<<endl;
//     return 0;
// }

// // predict the output
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {10,20,30,40};
//     int *ptr = arr;
//     cout<<*(ptr+1)<<endl;
//     cout<<*(ptr+3)<<endl;
//     ptr++;
//     cout<<*ptr<<endl;
//     return 0;
// }
