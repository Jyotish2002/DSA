#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int>ls;
    ls.push_back(8);
    ls.emplace_back(9);
    ls.push_front(5);
    ls.emplace_front(1);
    for(auto &p : ls){
        cout<<p<<",";
    }
    cout<<"\n";

}
void ps(){
    vector<int>number;
    cout<<"Enter how many number you want to push\n";
    int n;
    cin>>n;
    for(int i =0; i<n;i++){
        int num;
        cin>>num;
        number.push_back(num);
    }

    for(int a:number){
        cout<<a<<" ";
    }
}

int main(){
    explainList();
    cout<<"----------\n";
    ps();
}

