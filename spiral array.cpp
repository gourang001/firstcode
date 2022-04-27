#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
		
		// for spiral order
		int row_st=0,row_end=n-1,column_st=0,column_end=m-1;
		while(row_st<+row_end && column_st<=column_end){
			// for row start
			for(int col=column_st; col<=column_end; col++){
				cout<<a[row_st][col]<<" ";
			}
			row_st++;
			// for column end
			for(int row=row_st; row<=row_end; row++){
				cout<<a[row][column_end]<<" ";
			}
			column_end--;
			
			// for row end
			for(int col=column_end; col>=column_st;col--){
				cout<<a[row_end][col]<<" ";
			}
			row_end--;
			// for column start
			for (int row=row_end; row>=row_st;row--){
				cout<<a[row][column_st]<<" ";
			}
			column_st++;
			
		}
	}
}
