#include<iostream>
using namespace std;
int main(){
	
	int a=10;
	int*apot;
	apot=&a;
	
	cout<<&a<<endl;
	cout<<apot<<endl;
	cout<<*apot<<endl;  // derefferance of pointer
	return 0;
}
