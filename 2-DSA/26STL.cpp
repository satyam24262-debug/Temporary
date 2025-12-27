// // STL ~ Standard Template Library
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>vec;
// int n;
// n = vec.size();
// int m = vec.capacity();
// cout<<n<<"\n";
// cout<<m<<"\n";
// vec.push_back(1);
// cout<<vec.capacity()<<"\n";
// // cout<<n<<"\n"; not applicable for current size    
// cout<<vec[0]<<"\n";
// cout<<vec.size()<<"\n";
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec(3,10);
    vector<int>vec;
    int n = vec.size();
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vector<int>vec1(vec);
    // vec1.erase(vec1.begin()+1);
    // vec.erase(vec.begin(),vec.end()-1);
    vec.insert(vec.begin()+1,100);
    vec.clear();
    cout<<vec.empty()<<"\n";
    // cout<<vec.capacity()<<endl;
    // cout<<vec.size()<<endl;
    // vec.pop_back();
    // vec.pop_back();
    for(int value: vec){
        cout<<value<<" ";
    }
    // cout<<vec.at(1);
    // cout<<vec.front()<<"\n";
    // cout<<vec.back();
}


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.push_back(6);
//     vec.push_back(7);
//     vec.pop_back();
//     for(int val:vec){
//        cout<<val<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec  =  {1,2,3,4,5};
//     // cout<<vec.at(0)<<"\n";
//     // cout<<"front="<<vec.front()<<"\n";// first value
//     // cout<<"back="<<vec.back()<<"\n";// Last value
//     // vector<int>vec1(10,-3);// dynamic programming - tabulation DP[[]]
//     // for(int val:vec1){
//     //     cout<<val<<" ";
//     // }
//     vector<int>vec2(vec);
//     vec2.push_back(6);
//     for(int val:vec2){
//         cout<<val<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5,6};
//     vec.push_back(8);
//     // vec.erase(vec.begin());
//     // vec.erase(vec.begin()+1);
//     // vec.erase(vec.begin()+1,vec.begin()+3);// [start,end)
//     // vec.insert(vec.begin()+1,100);
//     vec.clear();
//     cout<<vec.size()<<"\n";
//     cout<<vec.capacity()<<"\n";
//     cout<<vec.empty();// which are given the information about the vector is empty or not
//     // for(int value: vec){
//     //     cout<<value<<" ";
//     // }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     cout<<*(vec.begin())<<"\n";// it is used as an pointer using defernce *
//     cout<<*(vec.begin()+3)<<"\n";
//     cout<<*(vec.end())<<"\n";// it is not point at n-1 index , it is given garbage value
//     cout<<*(vec.end()-1)<<"\n";// as do it , it is pointed at the position of n-1 index
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     vector<int>::iterator itr;
//     for(itr = vec.begin(); itr!=vec.end(); itr++){
//    cout<<*(itr)<<" ";
//     }
//    return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     vector<int>::reverse_iterator itr; // instead of it , we can use only auto at the begining of itr
//     // for(itr = vec.rbegin(); itr!=vec.rend();itr++){
//     //     cout<<*(itr)<<" ";
//     // }
//     for( auto itr = vec.rbegin(); itr!=vec.rend();itr++){
//         cout<<*(itr)<<" ";
//     }
//     return 0;
// }

// // // List - doubly linked list (elements insert or remove from both size front and back)
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
// // list<int>l;
// // l.push_back(1);
// // l.push_back(2);
// // l.push_front(4);
// // l.push_front(5);
// // l.pop_back();
// // l.pop_front();
// // for(int val:l){
// //     cout<<val<<" ";
// // }   
// list<int>l = {1,2,3,4,5,6,7};
// for(int value : l){
//     cout<<value<<"\n";
// }  
// // cout<<"\n"<<l[2]<<"\n";// not as but used in Deque as it                                                                          
//     return 0;
// }
 
// // Deque : Double Ended Queue
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// using namespace std;
// int main(){
// deque<int>d =  {1,2,3,4};
// for(int val:d){
//     cout<<val<<" ";
// }
// cout<<d[3]<<"\n";// it is valid but not used in list as it
//     return 0;
// }

// // Pair
// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;
// int main(){
//     // pair<int,int>p = {1,2};
//     // cout<<p.first<<"\n";
//     // cout<<p.second<<"\n";
//     // pair<string,int>p = {"Satyam pandey",100};
//     // cout<<p.first<<"\n";
//     // cout<<p.second<<"\n";
//     pair<int,pair<char,int>>p = {100,{'A',100}};
//     cout<<p.first<<"\n";
//     cout<<p.second.first<<"\n";
//     cout<<p.second.second<<"\n";
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;
// int main(){
//     vector<pair<int,int>>vec = {{1,2},{3,4}};
//     // vec.push_back({5,6});// insert
//     vec.emplace_back(5,6);// in-place object create
//     // for(pair<int,int>p: vec){
//     //     cout<<p.first<<" ";
//     //     cout<<p.second<<"\n";
//     // } 
//     for(auto p: vec){
//         cout<<p.first<<" "<<p.second<<"\n";
//     }
//     return 0;
// }

// // stack - like a bundle of book
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// using namespace std;
// int main(){
//  stack<int>s;
//  s.push(1);
//  s.push(2);
//  s.push(3);
//  s.push(4);
//  s.push(5);
//  s.push(6);
//  s.push(7);
// // cout<<"top = "<<s.top()<<"\n";
// // cout<<"Size of the stack = "<<s.size();
// // while(!s.empty()){
// //     cout<<s.top()<<" ";
// //     s.pop();
// // }
// stack<int>s1;
// s1.swap(s);
// cout<<"size of s stack = "<<s.size()<<"\n";
// cout<<"Size of s1 stack = "<<s1.size()<<"\n";
//     return 0;
// }

// // queue
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     // cout<<q.front()<<" ";
//     // q.pop();
//     // cout<<q.front()<<" ";
//     // q.pop();
//     // cout<<q.front()<<" ";
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     return 0;
// }

// // priority queue
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<queue>
// using namespace std;
// int  main(){
//     // priority_queue<int>q;// use for decrease order
//     priority_queue<int,vector<int>,greater<int>>q;// use for increase order
//     q.push(1);
//     q.push(10);
//     q.push(2);
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
//     return 0;
// }

// //map - it is printed accordingly lacikographyicaly (keys,value) - keys are unique but value is changeble
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<queue>
// #include<map>
// using namespace std;
// int main(){
//     map<string,int>m;
//     m["tv"] = 100;
//     m["laptop"] = 50;
//     // m.insert({"camera",10});
//     m.emplace("camera",1000);
//     // for(auto p:m){
//     //     cout<<p.first<<" "<<p.second<<"\n";
//     // }
//     // cout<<"count = "<<m.count("camera");
// // m.erase("tv");
// // for(auto p:m){
// //     cout<<p.first<<" "<<p.second<<"\n";
// // }
// if(m.find("camera")!=m.end()){
//     cout<<"found"<<"\n";
// }
// else{
//     cout<<"not found"<<"\n";
// }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<deque>
// #include<queue>
// #include<map>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string ,int>m;
//     m.emplace("tv",100);
//     m.emplace("laptop",99);
//     m.emplace("watch",89);
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<"\n";
//     }
//     return 0;
// }

// // set
// #include<iostream>
// #include<vector>
// #include<map>
// #include<deque>
// #include<queue>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(1);
//     cout<<"size of the set is = "<<s.size()<<"\n";
//     for(int val:s){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<map>
// #include<deque>
// #include<set>
// #include<string>
// using namespace std;
// int main(){
//     set<int>s ={1,2,3,4,5};
//     cout<<"lower bound = " <<*(s.lower_bound(4))<<"\n";// should not be less than by 
//     cout<<"upper bound = "<<*(s.upper_bound(4))<<"\n";// should not be greater than by
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     else return false;
// }
// int main(){
// //     int arr[5] = {5,2,3,4,1};
// //     sort(arr,arr+5);
// //     for(int val: arr){
// //         cout<<val<<" ";
// //     }
// // vector<int>v = {1,2,3,0};
// // sort(v.begin(),v.end());
// // for(int val:v){
// //     cout<<val<<" ";
// // }
// // int arr[4] = {1,2,4,0};
// // sort(arr,arr+4,greater<int>());// using for decending order
// // for(int val:arr){
// //     cout<<val<<" ";
// // }
// vector<pair<int,int>>vec = {{1,4},{0,2}};
// // for(auto p:vec){
// //     cout<<p.first<<" "<<p.second<<"\n";
// // }
// // cout<<"\n";
// sort(vec.begin(),vec.end(),comparator);// sorted vector according to first element of the set
// for(auto p1:vec){
//     cout<<p1.first<<" "<<p1.second<<"\n";
// }
//     return 0;
// }

//reverse Algorithm
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>vec = {1,2,3,4,5};
//     // reverse(vec.begin(),vec.end());
//     // reverse(vec.begin()+1,vec.end()-1);
//     reverse(vec.begin(),vec.begin()+2);
//     for(int val:vec){
//         cout<<val<<" ";
//     }
//     return 0;
// }

// // Next Permutation
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// //   string s  = "satyam";
// //   next_permutation(s.begin(),s.end());
// //   cout<<s<<" ";
// // cout<<max(4,5)<<" "<<min(2,4);
// int a=2,b = 1;
// swap(a,b);
// cout<<"a="<<a<<"\n"<<"b="<<b;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     // vector<int>vec = {1,2,3,4};
//     // // cout<<*(max_element(vec.begin(),vec.end()));
//     // // cout<<"\n";
//     // // cout<<*(min_element(vec.begin(),vec.end()));
//     // cout<< binary_search(vec.begin(),vec.end(),4);// when value is exit then 1 otherwise 0;
//     int n1=5;
//     long int n2 =5;
//     long long n3 = 5;
//     cout<<__builtin_popcount(n1)<<"\n"; 
//     cout<<__builtin_popcountl(n2)<<"\n";
//     cout<<__builtin_popcountll(n3)<<"\n";
//     return 0;
// }






