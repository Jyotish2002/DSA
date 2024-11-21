//When we declare an array we can't change it's size then vector concept come which is dynamic in nature which can change the size of own requirement.
#include<bits/stdc++.h>
using namespace std;
void expalinVector(){
    //Declaring a vector
    vector<int> vec;
    vec.push_back(5);
    vec.emplace_back(9); //PushBack and EmplaceBack both are same but emplace is faster in nature.

    //Print the vector
cout<<"The value of vec=\n";
    for(int i : vec){
        cout<<i<<endl;
    }
    cout<<endl;

    vector<pair<int,int>> veco;
    veco.push_back({1,2});
    veco.emplace_back(4,5);//Here both the syntax are different.So we can say that it easy to write in emplace back.

    //print veco
cout<<"The value of veco=\n";
    for(auto &p : veco){
        cout<<p.first<<" "<<p.second<<endl;//we use auto to automatically understand the type of p
    }
    cout<<endl;

  
    vector<int> v(5,100);//{100,100,100,100,100}
    vector<int> v2(4,500);//{500,500,500,500,500}
      //Print v and v2
cout<<"The value of v=\n";
    for(int i : v){
        cout<<i<<endl;
    }
    cout<<"The value of v2=\n";
    for(int i:v2)
{
    cout<<i<<endl;
}    

}
int main(){
    expalinVector();
}