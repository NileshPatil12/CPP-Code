#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"How much dow we have to enter ";
    cin>>n;

    //push_back functions and capacity functions of vector
    for(int i=0;i<n;i++){
        cout<<"\nCapacity of vector "<<v.capacity()<<endl;
        cout<<i+1;
        v.push_back(i+1);
    }
    cout<<endl;

    //different function for implementation of stack
    vector<int> a(v);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    vector<int> b(5,1);
    cout<<"\nDiffent implementations of vector ";
    for(int i :b){
        cout<<i<<" ";
    }
    cout<<"\nCapacity of vector "<<v.capacity()<<endl;
    
    //size function of vector
    cout<<"Size of vector "<<v.size()<<endl;
    
    //at function of vector
    for(int i=0;i<n;i++){
        cout<<"v[i]="<<v.at(i)<<endl;
    }

    //clear function of vector
    cout<<"Size of vector before clearing "<<b.size()<<endl;
    b.clear();
    cout<<"Size of vector after clearing "<<b.size();

    //front and back in vector after clearing it 
    cout<<"\nfront  of vector is "<<v.front();
    cout<<"\nBack of vector is "<<v.back();

    //pop_back in vector 
    v.pop_back();
    cout<<"Back after doing back "<<v.back();

    //vector
     cout<<"\nSize = "<<v.size();
    cout<<"\nCapacity = "<<v.capacity();
    
    v.shrink_to_fit();

    cout<<"\nSize = "<<v.size();
    cout<<"\nCapacity = "<<v.capacity();

    //how to swap two vector 
    vector<int> v1{1,2,3,4};
    vector<int> v2{5,6,7,8};
    v1.swap(v2);

    vector<int>::iterator itr;
    cout<<"\n1 . Array  ";
    for(auto itr=v1.begin();itr<v1.end();itr++){
        cout<<*itr<<" ";
    }

    cout<<"\n2 . Array ";
    for(auto itr=v2.begin();itr<v2.end();itr++){
        cout<<*itr<<" ";
    }

    //function to insert at a specified locations

    v1.insert(v1.begin(),12);
    cout<<"\n1 . Array  ";
    for(auto itr=v1.begin();itr<v1.end();itr++){
        cout<<*itr<<" ";
    }

    //function to assign some values
    vector<int> v3;
    v3.assign(v.begin(),v.end());
    cout<<"\n3 . Array  ";
    for(auto itr=v3.begin();itr<=v3.end();itr++){
        cout<<*itr<<" ";
    }



    return 0;
    
}
