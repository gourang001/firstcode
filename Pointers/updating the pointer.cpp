#include<iostream>
using namespace std;
int main(){
	
	int a=10;
	int*apot;
	apot=&a;
	
	cout<<*apot<<endl;
	*apot=20;
	cout<<a;
	return 0;
}
