#include<bits/stdc++.h>
using namespace std;
void queue1(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    vector<int> temp;
    while(!q.empty()){
        temp.push_back(q.front());//In queue we use front() to get the first element
        q.pop();
    }
    for(auto a:temp){
        cout<<a<<" ";
    }
}
int main(){
    queue1();
}