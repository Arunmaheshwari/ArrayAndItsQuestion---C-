#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector <int> v;

    // cout<<"size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;

    // v.push_back(4);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;

    // v.resize(6);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"Capacity:"<<v.capacity()<<endl;


    // v.pop_back();
    // v.pop_back();




    // Traversing element

    // for(int i =0;i<4;i++){
    //     cout<<v[i]<<" ";
    // }cout<<endl;

    // for(int ele: v){
    //     cout<<ele<<" ";
    // }cout<<endl;

    // int i=0;
    // while(i<4){
    //     cout<<v[i];
    //     i++;
    // }

    //Taking element from the user

    vector <int> v;

    for(int i =0; i<5; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    v.insert(v.begin()+2,9);

    for(int ele: v){
        cout<<ele<<" ";
    }cout<<endl;

    v.erase(v.end()-3);
    int idx = 0;
    while(idx<v.size()){
        cout<<v[idx++]<<" ";

    }

    return 0;
}