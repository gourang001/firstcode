#include <iostream>
using namespace std;
class employee
{
    public:
    int id;
    int salary;
    string name;
    void function(){
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the salary: ";
        cin>>salary;
        cout<<endl;
    }
    void function2(){
    	salary=salary*12;
        cout<<"id is: "<<id<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"yearly salary: "<<salary<<endl;
    }
};

int main(){
   employee xyz;
   xyz.function();
   xyz.function2();
   
    return 0;
}
