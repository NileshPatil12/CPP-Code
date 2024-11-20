#include<iostream>
using namespace std;

class human{
    public:
    human(){
        cout<<"This is in constructor"<<endl;
    }
    ~human(){
        cout<<"WE deleted this objects"<<endl;
    }
};

int main()
{
    human* a=new human();
    delete a;
}