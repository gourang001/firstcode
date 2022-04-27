#include <iostream>
using namespace std;
class Rectangle 
{
    private:
    int length,breadth;
    public:
    Rectangle(int a, int b)
    {
        length=a,breadth=b;
    }
    
    int area(){
        int a=(length*breadth);
        cout<<"area is "<<a;
        return a;
    }
};
int main(){
    Rectangle rl(3,5);
    rl.area();
    return 0;
}
   
