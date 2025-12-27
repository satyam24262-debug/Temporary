// #include<iostream>
// #include<vector>
// using namespace std;
// int f(vector<int>ans){
//     int n  = ans.size();
//     int st = 0,end = n-1;
//     while(end>=st){
//         int mid = st+(end-st)/2;
//         if(mid==0&&ans[mid]!=ans[mid+1]) return mid;
//         if(mid==(n-1)&&ans[mid]!=ans[mid-1]) return mid;
//         if(ans[mid]!=ans[mid-1]&&ans[mid]!=ans[mid+1]) return mid;
//         if(mid%2==0){
//             if(ans[mid]==ans[mid-1]) end = mid-1;
//             else st = mid+1;
//         }
//         else{
//             if(ans[mid]==ans[mid-1]) st = mid+1;
//             else end = mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     // vector<int>vec = {1,1,2,3,3,4,4,8,8};
//     vector<int>vec = {3,3,7,7,10,11,11};
//     int ans = f(vec);
//     cout<<ans<<endl;
//     return 0;
// }

