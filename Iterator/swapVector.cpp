#include<bits/stdc++.h>
using namespace std;
void swaping(){
    vector<pair<int,int>> v1={{4,5},{6,7}};
    vector<pair<int,int>> v2={{11,12},{14,15}};
    //Now i shall swap both the vectors
    cout<<"Before swaping=\n";
    cout<<"The value of v1=\n";
    for(auto i:v1){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    cout<<"The value of v2\n";
    for(auto i:v2){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"-------------------------------------------------\n";
    cout<<"After swapping\n";
    v1.swap(v2);
    cout<<"The value of v1=\n";
    for(auto i:v1){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"The value of v2=\n";
    for(auto i:v2){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    swaping();
}