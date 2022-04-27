#include<iostream>
using namespace std;
int main()
{
	int marks[5];
	cout<<"enter the marks"<<endl;
	
	for(int i=0;i<6;i++){
		cin>>marks[i];
	}
	cout<<"you enter the following no."<<endl;
	for(int i=0;i<6;i++){
		cout<<marks[i]<<endl;
	}
	return 0;
}
