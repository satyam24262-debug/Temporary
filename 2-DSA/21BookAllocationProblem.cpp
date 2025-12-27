// #include<iostream>
// #include<vector>
// using namespace std;
//  bool isvalid(vector<int>ans2,int stu,int book,int maxAllowedPages){
//     int student = 1,pages = 0;
//     for(int i=0;i<book;i++){
//         if(ans2[i]>maxAllowedPages){
//             return false;
//         }
//         if((pages+ans2[i])<=maxAllowedPages){
//   pages += ans2[i];
//         }
//         else{
//             student++;
//             pages = ans2[i];
//         }
//     }
//     return student>stu ? false : true;
//  }
// int f(vector<int>ans,int stu,int book){
//     if(stu>book){
//         return -1;
//     }
//     int sum = 0;
//     for(int i=0;i<book;i++){
//         sum+=ans[i];
//     }
//     int st = 0 , end = sum;
//     int ans1 = -1;
//     while(st<=end){
//         int mid = st+(end - st)/2;
//         if(isvalid(ans,stu,book,mid)){
//             ans1 = mid;
//             end = mid - 1;
//         }
//         else {
//             st = mid+1;
//         }
//     }
//     return ans1;
// }
// int main(){
//     vector<int>vec = {2,1,3,4};
//     int n = vec.size();
//     int stu = 2, books = n;
//     int ans = f(vec,stu,books);
//     cout<<ans<<endl;
//     return 0;
// }

