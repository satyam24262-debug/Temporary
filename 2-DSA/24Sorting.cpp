// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[] , int n){
//     for(int i=0;i<n-1;i++){
//         bool isSort = false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSort = true;
//             }
//         }         
//         if(isSort=false) return; // another way to do if(!isSort);
//     }
// }
// void printbubbleSo(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\n";
//     }
// }
// int main(){
//     int arr[] = {1,7,3,6,5};
//     int n = 5;
//     bubbleSort(arr,n);
//     printbubbleSo(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
// for(int  i=0;i<n-1;i++){
//     int min = INT_MAX;
//     int count = -1;
//     for(int j=i;j<n;j++){
//     if(min>arr[j]) 
//   {  min = arr[j];
//     count = j;}
//     }
//     if(arr[i]>arr[count]) swap(arr[i],arr[count]);
// }
// }
// void printSelection(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\n";
//     }
// }
// int main(){
//     int arr[] = {6,3,5,2,1,0};
//     int n = 6;
//     selectionSort(arr,n);
//     printSelection(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int Sidx = i;
//         for(int j=i+1;j<n;j++){
//          if(arr[Sidx]>arr[j]){
//             Sidx = j;
//          }
//         }
//         swap(arr[Sidx],arr[i]);
//     }
// }
//  void printSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//       int arr[] = {5,4,3,6,7};
//       int n = 5;
//       selectionSort(arr,n);
//       printSort(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void InsertionSort(int arr[], int n){
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//     }
//    }
// }
//  void printSort(int arr[], int n){
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//  }
// }
// int main(){
//     int arr[] = {5,4,3,1,0};
//     int n = 5;
//     InsertionSort(arr,n);
//     printSort(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
//  void InsertionSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){ 
//         int pre = i;
//         int curr = arr[i+1];
//         while(pre>=0&&(arr[pre]>curr)){
//             arr[pre+1] = arr[pre];
//             // arr[pre] = curr;
//             pre--;
//         }
//             arr[pre+1] = curr;
//     }
// }
// void printSort(int arr[],int n){
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
// }
// int main(){
//     int arr[] = {10,93,5,7,1};
//     int n = 5;
//     InsertionSort(arr,n);
//     printSort(arr,n);
//     return 0;
// }




