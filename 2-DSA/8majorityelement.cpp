// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>moretime(vector<int>nums){
//     vector<int>ans;
//     int n = nums.size();
//     int freq;
//     for(int i=0;i<n;i++){
//          freq = 0;
//         for(int j=1+i;j<n;j++){
// if(nums[i]==nums[j]) freq++;
//         }
//         if(freq==(n/2)) {
//         ans.push_back(nums[i]);
//         return ans;}
//     }
//     return  ans;
// }
// int main(){
//     vector<int>vec = {1,2,2,2,1};
//     vector<int>ans = moretime(vec);
//     cout<<ans[0];
//     return 0;
// }

// shorting approch  using array
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[5] = {3,2,3,1,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     int freq = 1;
//     for(int i=1;i<n;i++){
//         if(arr[i] == arr[i-1]) freq++;
//         else {
//             freq = 1;
//         }
//         if(freq>(n/2)) cout<<arr[i]<<"\n";
//     }
//     return 0;
// }

// shorting approach using vector
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int majority(vector<int>vec){
//     int freq = 1;
//     int n = vec.size();
//     int ans  = vec[0];
//     for(int i=1;i<n;i++){
//         if(vec[i]==vec[i-1]) freq++;
//         else {
//             freq = 1;
//             ans = vec[i];
//         }
//         if(freq>(n/2)) return ans;
//     }
//     return ans;
// }
// int main(){
// vector<int>vec = {1,2,2,1,2};
// int n  = vec.size();
// sort(vec.begin(),vec.end());
// // for(int value:vec){
// //     cout<<value<<"\n";
// // }
// int x = majority(vec);
// cout<<"maximum time occure = "<<x;
//     return 0 ;
// }

// moore's algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,1,1,3};
//     int n =  vec.size();
//     int freq = 0;
//     int  ans = 0;
//     for(int i=0;i<n;i++){
//         if(freq==0) ans = vec[i];
//         if(ans==vec[i]) freq++;
//         else freq--;
//     }
//     cout<<ans;
//     return 0;
// }

                                                                                                                                                                                                                                                      