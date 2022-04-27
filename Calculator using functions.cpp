#include<iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int multiply(int a,int b){
	return a*b;
}
int divide(int a,int b){
	return a/b;
}

int main(){
	int x,y;
	cout<<"please enter the first no."<<endl;
	cin>>x;
	cout<<"please enter the second no."<<endl;
	cin>>y;
	 int f=add(x,y);
	 int g=sub(x,y);
	 int h=multiply(x,y);
	 float k=divide(x,y);
	 
	 cout<<"addition "<<f<<endl;
	 cout<<"subtration "<<g<<endl;
	 cout<<"multiplication "<<h<<endl;
	 cout<<"division "<<k<<endl;
	return 0;
}
