#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> q;
    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    q.push(1);
    q.push(3);
    q.push(4);
    q.push(5);
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.top()<<" ";
        q.pop();
    }cout<<endl;
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(5); 
    int p=mini.size();
    for(int j=0;j<p;j++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
}