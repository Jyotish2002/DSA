#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"Hello welcome to my new world";
}
int sum(int a ,int b){
    return a+b;
}
int main(){
    int a,b,s;
    cout<<"Enter the number";
    cin>>a>>b;
    s=sum(a,b);// It will call the sum function()
    cout<<s;
    print();//It will call the function print()
    return 0;
}