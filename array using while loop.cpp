#include<iostream>
using namespace std;
int main(){
	int marks[]={22,48,55,20};
	cout<<"these are marks"<<endl;
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	cout<<"array by while loop"<<endl;
	 int i=0;
    while(i<4)
    {
    cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
    i++;
    }
    return 0;
}
	

