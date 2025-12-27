// lenear search
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5,6};
//     int n = vec.size();
//     int target;
//     cout<<"Enter the value of target = ";
//     cin>>target;
//     int flag = 1;
//     for(int i=0;i<n;i++){
//         if(vec[i]==target)
//        { flag = 0;
//         break;}
//     }
//     if(flag==0) cout<<"target is found";
//     else cout<<"target is not found";
//     return 0;
// }

// // Binary search
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5,6,7};
//     int n = vec.size();
//     int target;
//     cout<<"Enter the value of target = ";
//     cin>>target;
//     int st = 0;
//     int end = n-1;
//     int flag = 1;
//     while(end>=st){
//           int mid = (st+end)/2;
//         if(vec[mid]==target){
//             cout<<"Target is found"<<endl;
//             flag=0;
//             break;
//         }
//         else if(vec[mid]<target){
//            st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     }
//     if(flag ==1) cout<<"Target is not found";
//     return 0;
// }

// // using fuction 
// #include<iostream>
// #include<vector>
// using namespace std;
// int f(vector<int>ans ,int target){
//                int n = ans.size();
//                int st = 0,end = n-1;
//                while(end>=st){
// int mid = ((end+st)/2);// instead of before formula ,we have to use this formula (mid=st+(end-st)/2)
//                 if(ans[mid]==target) {
//                     return mid;
//                 }
//                 else if(target>ans[mid]) {
//                     st = mid+1;
//                 }
//                 else {
//                     end = mid-1;
//                 }
//                }
//                return -1;
// }
// int  main(){
//     vector<int>vec = {1,2,3,4,5};
//     int target;
//     cout<<"Enter the value of Target = ";
//     cin>>target;
//     int ans = f(vec,target);
//     if(ans<0) cout<<"Target is not found at any index"<<endl;
//     cout<<"Target is found at the index = "<<ans;
//     return 0;
// }

// // using calling function or recursive function
// #include<iostream>
// #include<vector>
// using namespace std;
// int f(vector<int>ans,int target , int st, int end){
//     int mid = st + (end-st)/2;
//     if(end>=st){
//     if(ans[mid]==target) return mid;
//         if(target>ans[mid]) {
//            return f(ans,target,(st=mid+1),end);
//         }
//         else 
//           return  f(ans,target,st,(end = mid-1));
//         // else {
//         //     return mid;
//         // }
//         return mid;}
//         return -1;
// }
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     int n = vec.size();
//     int st = 0;
//     int end = n-1;
//     int target ;
//     cout<<"Enter the value of target =  ";
//     cin>>target;
//     int ans = f(vec,target,st,end);
//     if(ans<0) cout<<"Target is not found at any index so ";
//     cout<<"Target  is found at the index of "<<ans;
//     return 0;
// }


