#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> a;
    a[1]="nilesh";
    a[12]="Ravindra";
    a[13]="Patil";

    a.insert({5,"bheem"});
    cout<<"Before erase";
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding ->"<<a.count(13)<<endl;
    a.erase(13);
    cout<<"after erase ";
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it = a.find(5);
    for(auto i=it;i!=a.end();i++){
        cout<<(*i).first<<endl;
    }
}