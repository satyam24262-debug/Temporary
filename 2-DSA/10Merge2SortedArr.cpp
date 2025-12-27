#include<iostream>
#include<vector>
using namespace std;
void Sorted(vector<int>vec1,vector<int>vec2,int n,int m){
    int indx=n-1,f=n-(m+1),s=m-1;
      while(s>=0&&f>=0){  if(vec1[f]<=vec2[s]){
            vec1[indx] = vec2[s];
            s--;
            indx--;
        }
        else{
            vec1[indx] = vec1[f];
            f--;
            indx--;
        }}
        while(s>=0){
            if(f<0){
            vec1[indx] = vec2[s];
            indx--;
            s--;
            }
        }
    for(int i=0;i<n;i++){
        cout<<vec1[i]<<" ";
    }
}
int main(){
vector<int>vec1 = {7,8,9,10,0,0,0};
vector<int>vec2 = {1,2,3};
int n = vec1.size();
int m = vec2.size();
Sorted(vec1,vec2,n,m);
    return 0;
}