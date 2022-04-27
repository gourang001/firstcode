#include<iostream>
using namespace std;
int main(){
	int marks[]={22,48,55,20};
	cout<<"these are marks"<<endl;
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	cout<<"array by for loop"<<endl;
	for(int i=0;i<5;i++){
		cout<<marks[i]<<endl;
	}
	
	return 0;
}
