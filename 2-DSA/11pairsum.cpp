// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>pairsum(vector<int>ans,int target){
//     vector<int>nums;
//     int n = ans.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
// if(ans[i]+ans[j]==target){
//     nums.push_back(i);
//     nums.push_back(j);
//     return nums;
// }
//         }
//     }
//     return nums;
// }
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     int target = 8;
//     vector<int>ans= pairsum(vec,target);
//     cout<<"first inx="<<ans[0]<<"\n"<<"second inx="<<ans[1];
//     return 0;
// }

// two pointer approach
// #include<iostream>
// #include<vector>
// using namespace std;
//  vector<int>pairsum(vector<int>vec,int target){
//     vector<int>ans;
//     int n = vec.size();
//     int st = 0;
//     int end = n-1;
//     while(st<end){
// if((vec[st]+vec[end])<target) {st++;}
// else if((vec[st]+vec[end])>target){end--;}
// else {ans.push_back(st);
// ans.push_back(end);
// return ans;}
//     } 
//     return ans;
//     }
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     int target = 8;
//     vector<int>ans = pairsum(vec,target);
//     cout<<"First indx="<<ans[0]<<"\n"<<"second indx="<<ans[1];
//     return 0;
// }

// shorting of a array using function
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[5] = { 1,3,1,4,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<"\n";
//     sort(arr,arr+5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\n";
//     }
//     return 0;
// }

// // Moore's Voting Algorithm 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>nums = {3,3,3,3,4,4,4,4,4};
//     int freq=0;
//     int ans=0;
//     for(int i=0;i<nums.size();i++){
//         if(freq==0){
//             ans = nums[i];
//             // cout<<ans<<endl;
//         }
//         if(ans==nums[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//         }
//         cout<<ans;
//     return 0;
// }
