#include<iostream>
using namespace std;
class classA
{
    friend class friend_class;
    private:
        int a;
    public:
        classA(){
            a=100;
        }
        void print(){
            cout<<"\n This is normal class";
            cout<<"\n Value of a is "<<a;
        }

};
class friend_class{
    public:
    void alter(classA &obj, int x){
        obj.a=x;
    }
};
int main()
{
    classA object1;
    friend_class object2;
    object1.print();
    int n;
    cout<<"\nEnter altering value = ";
    cin>>n;
    object2.alter(object1,n);
    cout<<"altered value";
    object1.print();
    return 0;

}