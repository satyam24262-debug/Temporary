// #include<iostream>
// #include<vector>
// using namespace std;
// int f(vector<int>vec,int target){
//     int  n = vec.size();
//     int st = 0,end = n-1;
//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(vec[mid]==target) return mid;
//         if(vec[st]<vec[mid]) {
//             if(vec[st]<target&&target<vec[mid]) end = mid-1;
//             else st = mid+1;
//         }
//         else {
//             if(vec[mid]<target&&target<vec[end]) st = mid+1;
//             else end = mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int>vec = {3,4,5,6,7,0,1,2};
//     int target;
//     cout<<"Enter the value of target = "<<endl;
//     cin>>target;
//     int ans = f(vec,target);
//     if(ans<0) cout<<"Target is not found at any index so ";
//     cout<<"Target is found at the index of "<<ans;
//     return 0;
// }



