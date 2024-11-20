#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    //s.push(1);
    int c;
    cin>>c;
    //push for pushing inside of the stack
    for(int i=0;i<c;i++){
        s.push(i+1);
    }

    //if the stack is empty or not check for it 
    cout<<"If stack is empty or not "<<s.empty()<<endl;
    cout<<"\nSize of the stack "<<s.size()<<endl;
    //checking if the stack is empty or not 
    for(int i=0;i<c;i++){
        cout<<s.top()<<" ";
        s.pop();
    }

    //checking the size of the stack 
    cout<<"\nSize of the stack "<<s.size();
    
}

