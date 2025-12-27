#include<iostream>
using namespace std;
int main(){
int a = 5;
int b = a++;
int c = ++a;
int d = --a;
cout << c<< endl;
cout << b << endl;
cout << a << endl;
cout << d << endl;
    return 0;
}