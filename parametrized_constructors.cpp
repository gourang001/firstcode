#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
		demo(int x)
		{
			a=x;
		}
		void putdata(){
			cout<<"value of a is "<<a;
		}
};
int main(){
	demo obj(20);
	obj.putdata();
	return 0;
}
