#include <iostream>
using namespace std;

void pbv(int x,int y){
    int z=x;
    x=y;
    y=z;
    // cout<<x<<endl;
    // cout<<y<<endl;
}

int main()
{
    int a=100,b=200;
    cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;
    pbv(a,b);
    cout<<"after swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;

    return 0;
}
