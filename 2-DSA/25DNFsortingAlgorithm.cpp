// #include<iostream>
// using namespace std;
// void Sorted(int arr[],int n){
//     for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//         }
//     }
//     }
//     void printSort(int arr[], int n){
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// int main(){
//     int arr[] = {2,0,2,1,1,0,1,2,0,0};
//     int n = 10;
//     Sorted(arr,n);
//     printSort(arr,n);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void Sort(vector<int>vec , int n){ // O(n) is the time complexity .
//     int c0 = 0 , c1 = 0 , c2 = 0;
//     for(int i=0;i<n;i++){
//     if(vec[i]==0) c0++;
//     else if(vec[i]==1) c1++;
//     else c2++;
//     }
//     int indx = 0;
//     for(int i=0;i<c0;i++){
//      vec[indx] = 0;
//      indx++;
//     }
//      for(int i=0;i<c1;i++){
//      vec[indx] = 1;
//      indx++;
//     }
//      for(int i=0;i<c2;i++){
//      vec[indx] = 2;
//      indx++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
// }
// int main(){
//     vector<int>vec = {1,0,2,0,1,0};
//     int n = vec.size();
//     Sort(vec,n);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void Sort(int arr[] , int n){
    int low = 0,mid = 0, high = n-1;
    while(high>=mid){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
  int  arr[] = {1,2,0,2,1,0};
    int n = 6;
    Sort(arr,n);
    return 0;
}