#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Enter values for 2*2 matrix"<<endl;
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	
	
		cout<<"]2*2 matrix is "<<endl;
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

