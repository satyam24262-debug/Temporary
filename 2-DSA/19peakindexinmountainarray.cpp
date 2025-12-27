// #include<iostream>
// #include<vector>
// using namespace std;
// int f(vector<int>ans){
//     int n = ans.size();
//     int st = 0,end = n-1;
//     while(end>=st){
//         int mid = (st+end)/2;
//         if(ans[mid]>ans[mid+1]&&ans[mid]>ans[mid-1]) return mid;
//        if(ans[mid]<ans[mid-1]) end = mid-1;
//        else {
//         st = mid+1;
//        }
//     }
//     return -1;
// }
// int  main(){
//     vector<int>vec = {0,3,8,9,10,2,1,0};
//     int ans = f(vec);
//     cout<<ans<<"\n";
//     return 0;
// }
