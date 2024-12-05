#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    if (x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
    
}
int main(){
    int x;
    cout<<"Enter number=\n";
    cin>>x;
    int ans=fact(x);
    cout<<"The factorial of "<<x<<" is "<<ans;
}