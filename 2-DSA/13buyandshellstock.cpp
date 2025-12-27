// // power calculation using binary number
// #include<iostream>
// using namespace std;
// int f(double base,int power){
//     if(power==0) return 1;
//     if(base==0) return 0;
//     int ans = 1;
//     long binform = power;
//     if(power<0){
//         binform = -1*binform;
//         base = 1/base;
//     }
//     while(binform>0){
//         if(binform%2==1){
//             ans *= base; 
//         }
//         base *=base; 
//         binform /=2;
//     }
//     return ans;
// }
// int main(){
//     int x;
//     cout<<"Enter the value  of base = ";
//     cin>>x;
//     int n;
//     cout<<"Enter the value of power = ";
//     cin>>n;
//     int ans = f(x,n);
//     cout<<"The answer is = "<<ans;
//     return 0;
// }

// selling and buying
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[6] = {7,1,5,3,6,4};
// int maxprof = 0;
// int bestbuy = arr[0];
// for(int i=1;i<7;i++){
//     if( arr[i]>bestbuy){
//         maxprof = max(maxprof,(arr[i]-bestbuy));
//     }
//     bestbuy = min(bestbuy,arr[i]);
// }
// cout<<"Best Buy = "<<bestbuy<<"\n";
// cout<<"selling = "<<maxprof+bestbuy<<"\n";
// cout<<"Best Profit = "<<maxprof;
// return 0;
// }






