#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("Ravindra");
    q.push("Patil");
    q.push("NILesh");

    cout<<"Size after being popped "<<q.size()<<endl;
    cout<<"first elements "<<q.front()<<endl;
    q.pop();
    cout<<"First elements "<<q.front()<<endl;
    cout<<"Size after being popped "<<q.size()<<endl;
}