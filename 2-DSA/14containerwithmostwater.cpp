// Broote force approach with time complexity = O(n^2);
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={1,8,6,2,5,4,8,3,7};
//     int ma = INT_MIN;
//     for(int i=0;i<8;i++){
//         int count = 1;
//         for(int j=i+1;j<9;j++){
//         int min1 = min(arr[i],arr[j]);
//         ma = max(ma,(count*min1));
//         count++; 
//         }
//     }
//     cout<<"Maximum volume = "<<ma;
//     return 0;
// }

// optimum approach for calculating maximum volume in  the container
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,8,6,2,5,4,8,3,7};
//     int st = 0;
//     int end = 8;
//     int wd,mh,area;
//     int max1 = 0;
//     for(int i=0;i<9;i++){
//         if(arr[st]<arr[end]){
//             wd = end-st;
//             mh = arr[st];
//             area = wd*mh;
//             st++;
//         }
//         else{
//             wd = end-st;
//             mh = arr[end];
//             area = wd*mh;
//             end--;
//         }
//          max1 = max(max1,area);
//     }
//     cout<<max1;
//     return 0;
// }

// optimal approach using while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,8,6,2,5,4,8,3,7};
//     int st = 0;
//     int end = 8;
//     int maxarea = 0;
//     while(st<end){
//         int wd = end-st;
//         int mh = min(arr[st],arr[end]);
//         int area = wd*mh;
//      maxarea = max(maxarea,area);
//  arr[st]<arr[end]?st++ :end--;
//     }
//     cout<<"Maximum valume in the container = "<<maxarea;
//     return 0;
// }



