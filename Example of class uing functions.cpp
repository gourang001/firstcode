#include <iostream>
using namespace std;
class student
{
    public:
    int id;
    int marks;
    string name;
    void function(){
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the marks: ";
        cin>>marks;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<endl;
    }
    void function2(){
        cout<<"id is: "<<id<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Name is: "<<name<<endl;
    }
};

int main(){
   student mayank;
   mayank.function();
   mayank.function2();
   
    return 0;
}
