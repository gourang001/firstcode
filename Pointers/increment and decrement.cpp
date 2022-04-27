#include<iostream>
using namespace std;
int main(){
	int a=10;
	int*p;
	p=&a;
	
	cout<<a<<endl;
	p++;
	cout<<"After increment "<<p;
}
