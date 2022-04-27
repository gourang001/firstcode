#include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int num1,num2;
	sum(num1,num2);
	{
		cout<<"enter the first no. "<<endl;
		cin>>num1;
		cout<<"enter the second no. "<<endl;
		cin>>num2;
		cout<<"the sum of two no. is "<<sum(num1,num2);
	}
	return 0;
}
