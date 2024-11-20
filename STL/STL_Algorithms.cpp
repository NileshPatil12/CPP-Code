#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(15);
    v.push_back(21);
    cout<<"Finding element ";
    cout<<binary_search(v.begin(),v.end(),12)<<endl;
}