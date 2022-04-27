#include<iostream>
using namespace std;
int main(){
	int marks[5]={22,15,85,66,96}
	int p;
	int*p=marks;
	cout<<"marks at 0index"<<*p;
	cout<<"marks at 1index"<<*(p+1);
	cout<<"marks at 2index"<<*(p+2);
	cout<<"marks at 3index"<<*(p+3);
	cout<<"marks at 4index"<<*(p+4);
	return 0;
}
