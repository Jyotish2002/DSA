#include<bits/stdc++.h>
using namespace std;
void explainstack(){
    stack<int>st;
    st.push(10);
    st.push(50);
    st.push(40);
    st.push(90);
    vector<int>temp;
    while(!st.empty()){
        temp.push_back(st.top()); //in stack se use top to push the element
        st.pop();//LIFO
    }
    for(auto a=temp.begin();a!=temp.end();++a){
        cout<<*a<<",";
    }

}
int main(){
    explainstack();
}