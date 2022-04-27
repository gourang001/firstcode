#include<iostream>
using namespace std;

int sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int n1;
	int n2;
	sum(n1,n2);
	cout<<"Enter the first no. "<<endl;
	cin>>n1;
	cout<<"Enter the second no. "<<endl;
	cin>>n2;
	cout<<"The sum of two no. is "<<sum(n1,n2);
	return 0;
}
