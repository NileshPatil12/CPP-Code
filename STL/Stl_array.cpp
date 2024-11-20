#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nElement at 2nd position "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"front element -<"<<a.front()<<endl;
    cout<<"Last element -<"<<a.back()<<endl;
    cout<<"Go to the begining of the array "<<*a.begin()<<endl;
    cout<<"To end of the array "<<*a.end()<<endl;
    cout<<"Used to get the maximun size of the array "<<a.max_size()<<endl;
    cout<<"Used to get reverse iterator to reverse begining "<<*a.rbegin()<<endl;
    cout<<"Used to get reverse iterator to reverse end "<<*a.rend()<<endl;
    cout<<"Used to get pointer to data "<<*a.data()<<endl;
    return 0;
}