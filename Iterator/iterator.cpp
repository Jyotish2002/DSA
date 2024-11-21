#include<bits/stdc++.h>
using namespace std;
void iterator1(){
    vector<int> v={4,5,7,8,9,10};
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // vector<int> :: iterator it=v.begin();//This iterator indicates the first element of vector
    // cout<<(*(1+it))<<endl;//This indicates to second element in vector
    // for(it=v.begin();it!=v.end();++it){
    //     cout<<(*it)<<" ";//Here we print the value of vector like the array do in a loop

    // }

    vector<pair<int,int>> ve={{1,2},{4,5},{6,7}};
    // vector<pair<int,int>>:: iterator it; //Instead of this we can write directly the auto it
    for(auto &it:ve){
        // cout<<it->first<<" "<<it->second<<endl;
         cout<<it.first<<" "<<it.second<<endl;
    }
}
int main(){
    iterator1();
}