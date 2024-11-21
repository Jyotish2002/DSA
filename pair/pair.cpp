#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int>p={5,8};
    cout<<"This is first=\n";
    cout<<p.first<<" "<<p.second; // output:5 8

    pair<int,pair<int,int>>a={5,{9,8}};
    cout<<"This the second pair\n";
    cout<<a.first<<" "<<a.second.first<<" "<<a.second.second; // output:5 9 8

    pair<int,int>arr[]={{4,6},{8,9},{10,4}};
    cout<<"This is the third pair\n";
    cout<<arr[0].second<<endl; //output is 6
    
    
}
int main(){
    explainPair();//calling the function
}