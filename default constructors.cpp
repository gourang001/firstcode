#include <iostream>
using namespace std;
class Rectangle 
{
    private:
    int length,breadth;
    public:
    Rectangle()
    {
        length=5,breadth=6;
    }
    
    int area(){
        int a=(length*breadth);
        cout<<"area is "<<a;
        return a;
    }
};
int main(){
    Rectangle rl;
    rl.area();
    return 0;
}
   
