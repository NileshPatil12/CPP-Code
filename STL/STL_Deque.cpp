#include<iostream>
#include<deque>
using namespace std;
 int main()
 {
     deque<int> d;
     d.push_back(1);
     d.push_front(2);

     for(int i:d){
         cout<<i<<" ";
     }cout<<endl;
     /*d.pop_back();
     for(int i:d){
         cout<<i<<" ";
     }
     d.pop_front();
     for(int i:d){
         cout<<i<<" ";
     }*/
    cout<<"Index at first element ->"<<d.at(1)<<endl;
    cout<<"front->"<<d.front()<<endl;
    cout<<"Back->"<<d.back()<<endl;
    cout<<"EMpty or not->"<<d.empty()<<endl;
    /*cout<<"Clear->"<<d.clear();
    for(int i:d){
         cout<<i<<" ";
     }*/
     cout<<"Before erase "<<d.size()<<endl;
     d.erase(d.begin(),d.begin()+1);
     cout<<"after Erase "<<d.size()<<endl;
     for(int i:d){
         cout<<i<<" ";
     }cout<<endl;
     return 0;
 }