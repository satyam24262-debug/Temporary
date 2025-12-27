// #include<iostream>
// // #include<vector>
// // using namespace std;
// // int FindElement(vector<int>vec,int n,int target){
// //     bool b = false;
// //     int indx;
// //     for(int i=0;i<n;i++){
// //         if(vec[i]==target){
// //             b = true;
// //             indx = i;
// //             break;
// //         }
// //     }
// //     if(b==true) return indx;
// //     else return -1;
// // }
// // int main(){
// //     vector<int>vec = {1,2,3,4};
// //     // cout<<vec.size()<<"\n";
// //     // cout<<vec.capacity()<<"\n";
// //     vec.push_back(6);
// //     // vec.pop_back();
// //     int n = vec.size();
// //     cout<<n<<"\n";
// //     cout<<vec.capacity()<<"\n";
// //     int target;
// //     cout<<"Enter the target element = ";
// //     cin>>target;
// //    int indx =  FindElement(vec,n,target);
// // cout<<"indx of the target element = " << indx ;
// //     return 0;
// // }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>findMinMax(vector<int>vec,int n){
//          vector<int>Em;
//           int max =   INT_MIN;
//           int min = INT_MAX;
//           for(int val:vec){
//             if(val>max) max = val;
//             if(val<min) min = val;
//           }
//           Em.push_back(min);
//           Em.push_back(max);
//         //   cout<<"Max Value = "<<max<<"\n";
//         //   cout<<"Min Value = "<<min<<"\n";
//         return Em;
// }
// int main(){
//     vector<int>vec = {1,2,3,4};
//     int n = vec.size();
//    vector<int>f = findMinMax(vec,n);
//    cout<<"Min value is = "<<f[0]<<"\n";
//    cout<<"Max value is = "<<f[1]<<"\n";
//     return 0;
// }

// // Missing number
// #include<iostream>
// #include<vector>
// using namespace std;
// void MissingNumber(vector<int>vec,int n){
//     int sum1 = (n*(n+1))/2;
//     int missing;
//     int sum = 0;
//     for(int val:vec){
//         sum = sum+val;
//     }
//     missing = sum1-sum;
//     //  int count = 0;
//     //  int missing;
//     //  for(int val:vec){
//     //     if(count!=val){
//     //         missing = count;
//     //         break;
//     //     }
//     //     count++;
//     //  }
//      cout<<"missing element is =" <<missing;
// }
// int main(){
//     vector<int>vec = {0,1,2,4,5};
//     int n = vec.size();
//     MissingNumber(vec,n);
//     return 0;
// }

// // // how to take element from user in a vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of vector = "<<"\n";
//     cin>>n;
//     vector<int>vec;
//     int x;
//     // cout<<"Enter the value  of  the array = "<<"\n";
//     // for(int i=0;i<n;i++){
//     //     cin>>vec[i];
//     // }
//     // cout<<"Your element in the vector = "<<"\n";
//     // for(int val:vec){
//     //     cout<<val<<" ";
//     // }
//     for(int i=0;i<n;i++){
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"The elements of your vector are = "<<"\n";
//     for(int i=0;i<n;i++){
//         cout<<vec[i]<<"\n";
//     }
//     return 0;
// }

// // Remove dublicates elements
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,1};
//     int size = sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 for(int i1 = j;i1<size-1;i1++){
//                     arr[i1] = arr[i1+1];
//                 }
//         size--;
//             }
//         }
//     }
//     cout<<"Size of the array is = "<< size <<"\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int main(){
//     vector<int>vec = {1,1,2,1,3,1,1,1,1,2,2,2};
//     int size = vec.size();
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(vec[i]==vec[j]){
//                 vec.erase(vec.begin()+j);
//                 size--;
//                 j--;
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<< vec[i]<<" ";
//     }
//     return 0;
//  }
