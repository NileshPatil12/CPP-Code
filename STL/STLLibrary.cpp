#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3]={1,2,3};

    array<int,5> a = {1,2,32,45,66};
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"element at 2nd Index "<<a.at(2)<<endl;
    cout<<"EMpty or not "<<a.empty()<<endl;
    cout<<"we can access the first element "<<a.front()<<endl;
    cout<<"we can access the last element also "<<a.back();
    return 0;
}