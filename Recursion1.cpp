#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==1||n==0){
        return n;
    }
    else{
        return (n+(fun(n-1)*10));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"Number After Adding number 0 to n : "<<fun(n);
}