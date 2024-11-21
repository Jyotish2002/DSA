//Set stores in sorted manner and unique
#include<bits/stdc++.h>
using namespace std;
void set1(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(25);
    vector<int> temp;
   for(auto it =s.begin();it!=s.end();++it){ // See this i have make mistake by using for loop see this it is important
    temp.push_back(*it);
   }
    for(auto a:temp){
        cout<<a<<" ";
    }
}
int main(){
    set1();
}