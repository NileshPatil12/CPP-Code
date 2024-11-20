#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5,100);
    n.push_back(1);
    n.push_front(2);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    n.erase(n.begin());
    cout<<"After erase "<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of list "<<n.size()<<endl;
    return 0 ;
}
