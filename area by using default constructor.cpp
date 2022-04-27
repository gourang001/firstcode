#include<iostream>
using namespace std;
class area{
	int l,b;
	public:
		area(){
			l=10;
			b=6;
		}
		void putdata(){
			cout<<"Area is "<<l*b;
		}
};
int main(){
	area obj;
	obj.putdata();
	return 0;
}
