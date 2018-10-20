#include<iostream>
using namespace std;
int main(){
int*a;
int*b;
*a=2;
b=a;
*b=3;
cout<<*a<<*b<<endl;    
}