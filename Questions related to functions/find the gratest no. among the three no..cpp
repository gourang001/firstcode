#include<iostream>
using namespace std;
int main(){
	int n1;
	int n2;
	int n3;
	
	cout<<"enter the 1st no. "<<endl;
	cin>>n1;
	cout<<"enter the 2nd no. "<<endl;
	cin>>n2;
	cout<<"enter the 3rd no. "<<endl;
	cin>>n3;
	
	if(n1>n2 && n1>n3)
	cout<<"the largest no. is "<<n1<<endl;
	if(n2>n1 && n2>n3)
	cout<<"the largest no. is "<<n2<<endl;
	if(n3>n1 && n3>n2)
	cout<<"the largest no. is "<<n3;
	return 0;
}
