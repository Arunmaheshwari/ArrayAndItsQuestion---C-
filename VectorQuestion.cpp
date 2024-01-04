#include<iostream>
#include<vector>
using namespace std;

int main(){

    //1
    // Find the last occurrence of an element x in a given array
    // vector <int> v(6);

    // for(int i=0;i<6;i++){
    //     cin>>v[i];
    // }

    // cout<<"Enter x:"<<endl;

    // int x;
    // cin>>x;

    // int occ=-1;

    // for(int i =0; i<v.size(); i++){
    //     if(v[i]==x){
    //         occ=i;
    //     }
    // }
    // Second Way
    // for(int i=v.size()-1;i>=0;i--){
    //     if(v[i]==x){
    //         occ=i;
    //         break;
    //     }
    // }
    // cout<<occ<<endl;

    //2
    // Count the number of occurrences of a particular element x

    // vector <int> v;

    // v.push_back(2);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(2);
    // v.push_back(9);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(2);

    // int x;
    // cin>>x;

    // int occ=0;

    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         occ+=1;
    //     }
    // }
    // cout<<occ<<endl;

    //3
    // Count the number of elements strictly greater than value x

     
    // vector <int> v;

    // v.push_back(2);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(2);
    // v.push_back(9);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(2);

    // cout<<"Enter value of x:"<<endl;

    // int x;
    // cin>>x;

    // int count = 0;

    // for(int i=0;i<v.size();i++){
    //     if(v[i]>x){
    //        count++;          // Both are similar
    //         // count+=1;
    //     }
    // }

    // cout<<count<<endl;

    //4
    // Check if the given array is sorted or not

    // vector <int> v;

    // v.push_back(2);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(25);
    // v.push_back(95);
    // v.push_back(100);
    // v.push_back(200);
    // v.push_back(256);

    // bool sortedflag = true;

    // for(int i=1; i<v.size();i++){
    //     if(v[i]<v[i-1]){
    //         sortedflag = false;
    //     }
    // }
    // cout<<sortedflag<<endl;

    //5
    // Find th difference between the sum of elements at even indices to the sum of elements at odd indices

    vector <int> v;

    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);



    // int even=0;
    // int odd=0;

    // for(int i=0;i<v.size();i++){
    //     if(i%2==0){                                   //It is my solution
    //         even+=v[i];
    //     }else{
    //         odd+=v[i];
    //     }
    // }
    // cout<<even-odd<<endl;

    // int sum=0;

    // for(int i=0;i<v.size();i++){
    //     if(i%2==0){
    //         sum+=v[i];                                //It is guieded solution by collage wallah
    //     }else{
    //         sum-=v[i];
    //     }
    // }
    // cout<<sum<<endl;



    return 0;
}