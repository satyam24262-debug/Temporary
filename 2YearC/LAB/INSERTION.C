#include<stdio.h>
int main(){
    int arr[3] = {3,2,1};
    for(int i=0;i<3;i++){
int tem = arr[i];
int j = i-1;
while(tem<arr[j]&&j>=0){
    arr[j+1] = arr[j];
    j--;
}
arr[j+1] = tem;
    }
    printf("Shorted Array is:-\n");
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}