#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,int> t;
    // cin>>t.first;
    // cin>>t.second;
    // // t.first=1;
    // // t.second=2;
    // cout<<t.first<<" "<<t.second;

    pair<int,pair<int,int>> x;
    cout<<"Enter first element ";
    cin>>x.first;
    cout<<"Enter second element ";
    cin>>x.second.first;
    cin>>x.second.second;
    cout<<x.second.first<<x.second.second;
    return 0;
}