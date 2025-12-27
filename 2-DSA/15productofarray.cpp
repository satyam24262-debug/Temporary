// brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;
// int  main(){
//     vector<int>vec = {1,2,3,4,5};
//     vector<int>pro;
//     int n = vec.size();
//     for(int i=0;i<n;i++){
//            int prod = 1;
//         for(int j=0;j<n;j++){
//             if(vec[j]==vec[i])// if(i!=j)
//             continue;
//             prod = prod*vec[j];
//         }
//             pro.push_back(prod);
//     }
//     for(int i=0;i<n;i++){
//         cout<<pro[i]<<"\n";
//     }
//     return 0;
// }


// optimal approach for solving of product of array except self
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//      int n = vec.size();
//     // int pref[5];
//     // int suff[5];
//     // int pro[5];
//     vector<int>pro(1);
//     vector<int>pref(1);
//     vector<int>suff(1);
//     pref[0] = 1;
//     suff[4] = 1;
//     for(int i=1;i<n;i++){
//         pref[i] = pref[i-1]*vec[i-1];
//     }
//     for(int i=n-2;i>=0;i--){
//         suff[i] = suff[i+1]*vec[i+1];
//     }
//     for(int i=0;i<n;i++){
//         pro[i] = pref[i]*suff[i];
//         cout<<pro[i]<<endl;
//     }
//     return 0;
// }


// very optimal approach to solve array multiplication and with time complexity is O(n) and space complexity is O(1)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     int n = vec.size();
//     int ans[5];
//     ans[0]=1;
//     int pref = 1;
//     int suff = 1;
//     for(int i=1;i<n;i++){
//         pref = pref*vec[i-1];
//         ans[i]=pref;
//     }
//     for(int i =n-2;i >=0;i--){
//         suff = suff*vec[i+1];
//         ans[i] = ans[i]*suff;
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int pro(vector<int>vec1,int indx){
//      int prod = 1;
//      for(int val:vec1){
//         if(val==vec1[indx])continue;
//       prod *=val;
//      }
//      return prod;
// }
// int main(){
//     vector<int>vec = {1,2,3,4};
//     vector<int>vec1;
//     for(int i=0;i<vec.size();i++){
// int x = pro(vec,i);
// vec1.push_back(x);
//     }
// for(int val:vec1){
//     cout<<val<<" ";
// }

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};
    int n = vec.size();
    vector<int> ans(vec.size(), 1);

    // Prefix product
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= vec[i];
    }

    // for(int val:ans){
    //     cout<<val<<" ";
    // }

    // Suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= vec[i];
    }

    for (int val : ans) {
        cout << val << " ";
    }
    return 0;
}