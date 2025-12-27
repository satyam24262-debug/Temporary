// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool possi(vector<int>vec , int n,int c,int mid){
//     sort(vec.begin(),vec.end());
//     int cow = 1;
//     int stall = 0;
//     for(int i=1;i<n;i++){
//         if(vec[i]-vec[stall]>=mid){
//             cow++;
//             stall = i;
//         }
//         else {
//             continue;
//         }
//     }
//      return (cow==c)? true: false;
// }
// int f(vector<int>vec,int n,int c){
//     if(c>n) return -1;
//     int mini = INT_MAX;
//     int maxi = INT_MIN;
//     for(int i=0;i<n;i++){
//         mini = min(vec[i],mini);
//         maxi = max(vec[i],maxi);
//     }
//     int st = 1,end = maxi-mini;
//     int ans = -1;
//     while(st<=end){
//         int mid = (st+end)/2;
//         if(possi(vec,n,c,mid)){
//             ans = mid;
//             st = mid+1;
//         }
//         else {
//             end = mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>vec = {1,2,8,4,9};
//     int n = vec.size();
//     int c = 3;
//     int ans = f(vec,n,c);
//     cout<<"Largest minimum distance between the cows is = "<<ans;
//     return 0;
// }


