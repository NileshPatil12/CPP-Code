#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int ,int> a={1,2};
    cout<<a.first<<" "<<a.second<<endl;
    pair<int ,pair<int,int>> c={ 3,{4 ,5 }};
    cout<<c.second.first<<" "<<c.second.second<<endl;
    pair<int ,int> b[]={{1,2},{2,3}};
    cout<<b[1].first<<" "<<b[0].second;

}