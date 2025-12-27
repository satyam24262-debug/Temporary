// #include<iostream>
// using namespace std;
// int main(){
//     //   int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int matrix[4][3];
//     cout<<"Enter the elements of the given matrix = ";
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     //   cout<<matrix[2][1]<<endl;
//       for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cout<<"  "<< matrix[i][j];
//         }
//         cout<<"\n";
//       }
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool linearsearch(int mat[][3],int r, int c , int key){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(mat[i][j]==key) return true;
//         }
//     }
//     return false;
// }
// int main(){
//     // int r=4,c=3;
//     // cout<<"Enter the size of the  matrix = "; // not used in the cpp compilers
//     // cin>>r>>c;
//     // int matrix[r][c];
//     int matrix[4][3];
//     int r = 4,c = 3;
//     int key ;
//     cout<<"Enter the target element in the give matrix = ";
//     cin>>key;
//     cout<<"Enter the elements of the given matrix = ";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     cout<<linearsearch(matrix,r,c,key);
//     // bool bol = false;
//     // for(int i=0;i<r;i++){
//     //     for(int j=0;j<c;j++){
//     //         if(matrix[i][j]==key) 
//     //         bol = true;
//     //     }
//     // }
//     // if(bol==true) cout<<"key element is exit in the given matrix ";
//     // else cout<<"key element does not exit in  the matrix ";
//     return 0;
// }

// linear searching
// #include<iostream>
// // #include<utility>
// using namespace std;
// pair<int,int> linearsearch(int matrix[][3],int r,int c,int key){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(matrix[i][j]==key){
//                  return  make_pair(i,j);
//             }
//         }
//     }
//     return make_pair(-1,-1);
// }
// int main(){
//     int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int r = 4,c = 3;
//    pair<int,int> p = linearsearch(matrix,r,c,81);
//    cout<<"The  row index is = "<< p.first<<endl;
//    cout<<"The column index is = "<<p.second<<endl;
//     return 0;
// }

// // maximum row sum
// #include<iostream>
// using namespace std;
// int Msum(int matrix[][3], int r,int c){
//     int Ms = INT_MIN ;
//     for(int i=0;i<r;i++){
//         int sum = 0;
//         for(int j=0;j<c;j++){
//             // sum += matrix[j][i]; // for column 
//             sum += matrix[i][j];
//         }
//         Ms = max(Ms,sum);
//     }
//     return Ms;
// }
// int main(){
//          int matrix[4][3] = {111,2,3,4,5,6,7,8,9,10,11,12};
//          int r = 4,c = 3;
//          cout<<Msum(matrix,r,c);
//     return 0;
// }

// //diagonal sum
// #include<iostream>
// using namespace std;
// int Md(int mat[][4],int r, int c){
//     int sum1 = 0;
//     int sum2 = 0,sum;
//     for(int i=0;i<r;i++){
//         if(i!=(r-1-i))
//         sum1 += mat[i][r-1-i]; 
//         sum2 += mat[i][i];
//     }
// //     if(r%2==0) return (sum1+sum2);
// //    else return ((sum1+sum2)-mat[r/2][r/2]);
// return (sum1+sum2);
// }
// int main(){
//     // int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
//     // int r = 3, c = 3;
//     int matrix[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int r = 4,c=4;
//     cout<<Md(matrix,r,c);
//     return 0;
// }

// 2D vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>mat = {{1,2,3},{4,5,6,10,11},{7,8,9}};
    // cout<<mat.size()<<endl;
    // cout<<mat[2][2]; 
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}