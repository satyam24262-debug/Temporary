// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool posible(vector<int>vec,int n,int p, int mid){
//     int boards = 0;
//     int painter = 1;
//     for(int i=0;i<n;i++){
//         if(boards+vec[i]<=mid)
//        {  boards +=vec[i];
//         }
//         else{ boards = vec[i];
//         painter++;}
//     }
//    return  (painter>p)? false : true;
// }
// int f(vector<int>vec,int n,int p){
//     if(p>n) return -1;
//     int maxi = INT_MIN;// important points
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum +=vec[i];
//          maxi = max(maxi,vec[i]);
//     }
//     int st = maxi,end = sum;
//     int ans = -1;
//     while(st<=end){
//         int mid = st+(end-st)/2;
//         if(posible(vec,n,p,mid)){
//             ans = mid;
//             end = mid-1;
//         }
//         else{
//             st = mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>vec = {40,30,10,20};
//     int n = vec.size();
//     int p = 2;
//     int ans = f(vec,n,p);
//     cout<<"Minimum time is =  "<<ans<<"min"<<endl;
//     return 0;
// }
