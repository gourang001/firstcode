#include<iostream>
using namespace std;
int main(){
    int a=3,b=4;
    int*p=&a;   //('&' represent the address) and 'p' is a pointer
    cout<<p<<endl;
    
    cout<<"value at p ="<<*p<<endl;
    
    int*x=&b;
    cout<<"Address of b is "<<&b;  
    return 0;
}

