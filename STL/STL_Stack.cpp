#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Nilesh");
    s.push("Ravindra");
    s.push("Patil");

    cout<<"Top Element->"<<s.top()<<endl;
    s.pop();
    cout<<"size of stack->"<<s.size()<<endl;
    cout<<"Empty or not->"<<s.empty()<<endl;
    

}