#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
		demo()
		{
			a=50;
		}
		void putdata(){
			cout<<"value of a is "<<a;
		}
};
int main(){
	demo obj;
	obj.putdata();
	return 0;
}
