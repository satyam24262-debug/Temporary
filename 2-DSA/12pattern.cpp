// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row number: ";
//     cin>>r;
//     int c;
//     cout<<"Enter the column number: ";
//     cin>>c;
//     for(int i=0;i<r;i++){
//         for(int j=1;j<=c;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//         }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row"<<endl;
//     cin>>r;
//     int c;
//     cout<<"Enter the column"<<endl;
//     cin>>c;
//     int count = 1;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<count;
//             count++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout <<"Enter the row"<<endl;
//     cin>>r;
//     int c;
//     cout<<"Enter the column"<<endl;
//     cin>>c;
//     int count = 1;
//     for(int i=0;i<r;i++){
//         for (int j=0;j<=i;j++){
//             cout<<count;
//         }
//         cout<<"\n";
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row :"<<endl;
//     cin >>r;
//     int c;
//     cout<<"Enter the column:"<<endl;
//     cin>>c;
//     int count1 = 1;
//     for(int i=0;i<r;i++){
//         int count = count1;
//         for(int j=0;j<=i;j++){
//             cout<<count;
//             count++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row: ";
//     cin>> r;
//     int c;
//     cout <<"Enter the column: ";
//     cin>>c;
//     int count1 = 1;
//     for(int i=0;i<r;i++){
//         int count = count1;
//         count1++;
//         for(int j=0;j<=i;j++){
//     cout<<count;
//         count--;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// // floyd's triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row: ";
//     cin>>r;
//     int c;
//     cout<<"Enter the column: ";
//     cin>>c;
//     int count = 1;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<=i;j++){
//             cout<<count;
//             count++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// // inverted tringle
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the value of r: ";
//     cin>> r;
//     int c;
//     cout <<"Enter the column: ";
//     cin>> c;
//     int count = 1;
//     for(int i=0;i<r;i++){
//         for(int j=r;j>i;j--){
//             cout<<count;
//         }
//         cout<<"\n";
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout <<"Enter the value of row : ";
//     cin>>r;
//     int c;
//     cout<<"Enter the value of column: ";
//     cin>>c;
//     int count = 1;
//     for(int i=0;i<r;i++){
//         for(int k=0;k<i;k++){
//             cout<<" ";
//         }
//         for(int j=r;j>i;j--){
// cout<<count;
//         }
//         cout<<"\n";
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter a number: ";
//     cin>>r;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<r-i-1;j++){
//         cout<<" ";
//         }
//         for(int k=0;k<=i;k++){
// cout<<1+k;
//         }
//         for(int m=0;m<i;m++){
//             cout<<i-m;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the row : ";
//     cin >>r;
//     for(int i=0;i<r;i++){
//         for(int j=i;j<r-1;j++){
//     cout<<" ";
//         }
//         for(int k=i;k<=i;k++){
// cout<<"*";
//         }
//          for(int k=0;k<i;k++){
//        cout<<" ";
//     }
//     for(int l=1;l<i;l++){
// cout<<" ";
//     }
//     for(int m = i;m<=i;m++){
//     if(i==0) continue;
// cout<<"*";
//     }
//         cout<<"\n";
//     }
//     for(int i=0;i<r-1;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         for(int k=i;k<=i;k++){
//             cout<<"*";
//         }
//           for(int k=i;k<r-2;k++){
//        cout<<" ";
//     }
//     for(int l=i;l<r-3;l++){
// cout<<" ";
//     }
//     for(int m = i;m<=i;m++){
//         if(i==r-2) continue;
// cout<<"*";
//     }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>> n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//         cout<<"*";
//         }
//         for(int j=0;j<(((2*n)-(2*i))-2);j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
