#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,50,80,100};

	
	int*point=arr;
	for(int i=0;i<6;i++){
		cout<<*point<<endl;
		point++;
	}
	return 0;
}

