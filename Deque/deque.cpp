#include<bits/stdc++.h>
using namespace std;
void Deque(){
    deque<int>dq;//Declare of deque
    dq.push_back(5);
    dq.push_front(8);
    dq.emplace_front(9);
    dq.pop_back();
    for(auto a:dq){
        cout<<a<<",";

    }
    cout<<endl;

}
void com(){
    deque<int>dq;
    int n;
    vector<int>num1;
    cout<<"Enter the range\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th = ";
        int num;
        cin>>num;
       num1.push_back(num);
    }
    cout<<"The number are as follows\n";
   for(auto a:num1){
    cout<<a<<",";
   }
}
int main(){
    Deque();
    cout<<"-----------------------\n";
    com();
}