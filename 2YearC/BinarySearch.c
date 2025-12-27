// #include<stdio.h>
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
//     int s =(sizeof(arr)/ sizeof(arr[0])); // it is used to calculate the total number of elements present in the given array;
//     printf("%d",s);
//     return 0;
// }

// // genral formate for binary search
#include<stdio.h>
int main(){
    int arr[] ={1,2,3,4,5,6};
    int size = (sizeof(arr)/sizeof(arr[0]));
    int st = 0,end = size-1,target = 7;
    while(end>=st){
        int mid = (end+st)/2;
        if(arr[mid]==target) {printf("Target is found");
        break;}
        else if(arr[mid]>target){
            if(arr[mid]>arr[mid-1]){
                end = mid-1;
            }
            else {
                st = mid+1;
            }
        }
        else {
            if(arr[mid+1]>arr[mid]){
                st = mid+1;  
            }
            else end = mid-1;
            }
        if(!(end>=st)) printf("Target is not found");
    }
    return 0;
}

