//Map contain unique key
#include<bits/stdc++.h>
using namespace std;
void map1(){
    map<int, string> m; //hera int is for key and string is for value
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    for(auto it=m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

}
int main(){
    map1();
}