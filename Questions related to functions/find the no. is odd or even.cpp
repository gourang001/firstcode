#include<iostream>
using namespace std;
int no(int x){
	if(x%2==0)
		cout<<"given no. is even";
	else
		cout<<"given no. is odd";
}
int main(){
	int a;

		cout<<"enter the no. "<<endl;
		cin>>a;
	cout<<no(a);
	return 0;
}
