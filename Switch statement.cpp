#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age" <<endl;
    cin>>age;
    switch(age)
    {
        case 10:
        cout<< "you are not eligibel" <<endl;
        break;
        
        case 20:
        cout<< "you are  eligibel" <<endl;
        break;
        
        case 30:
        cout<< "you are fully eligibel" <<endl;
        break;
        
        default:
        cout<<"no special cases"<<endl;
        break;
    }
    
    return 0;
}

