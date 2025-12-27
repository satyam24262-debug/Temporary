// // brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int target = 35;
//     int flag = -1;
//     int arr[3][4] = {1,3,5,7,10,11,16,20,23,30,34,60};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j]==target) {
//                 flag = 1;
//                 break;
//             }
//             }
//         }
//         if(flag == -1){ 
//             cout<<"not find the target element ";}
//             else cout<<"Target is found";
//     return 0;
// }

#include<iostream>
using namespace std;
bool result(int arr[][4],int target , int c , int r){
    int st = 0 , end = c-1;
    while(end>=st){
        int mid = (st+end)/2;
        if(arr[r][mid]==target){
            return true;
        }
        else if(arr[r][mid]<target) st = mid+1;
        else end = mid-1;
    }
    return false;
}
bool Search(int arr[][4],int r,int c){
        int st = 0,end = r-1 , target = 60;
    while(end>=st){
       int  mid = (st+end)/2;
        if(arr[mid][0]<=target && arr[mid][c-1]>=target){
           return result(arr , target , c , mid );
        }
        else if(arr[mid][c-1]<target) st = mid+1;
        else end = mid-1; 
    }
    return false;
}
int  main(){
    int arr[3][4] = {1,3,5,7,10,11,16,20,23,30,34,60};
    int r = 3 , c = 4;
    cout<<Search(arr,r,c);
    return 0;
}

  
