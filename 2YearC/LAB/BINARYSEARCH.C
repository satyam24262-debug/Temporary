#include<stdio.h>
int Bin(int arr[],int target,int len){
int st = 0;
int end = len-1;
    while(end>=st){
        int mid = (st+end)/2;
        if(arr[mid]==target){
return 1;
        }
        if(arr[mid]>target){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return -1;
}
int main(){
    int target = 33;
    int arr[3] = {1,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x = Bin(arr,target,len);
    (x==1)?printf("Target Found!"):printf("Target is not Found!");
    return 0;
}