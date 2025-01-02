#include <bits/stdc++.h>
using namespace std;
int finddigit(int n){
    if(n<=9){
        return 1;
    }
    else{
        return 1+finddigit(n/10);
    }
}
int Armstrong(int n,int d) {
    if(n==0){
        return 0;
    }
    else{
        return pow(n%10,d)+Armstrong(n/10,d);
    }

}
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int d=finddigit(n);
  cout<<d<<endl;
  if(n==Armstrong(n,d)){
    cout<<"It is Armstrong Number: "<<Armstrong(n,d)<<endl;
  }
  else{
    cout<<"It is not a Armstrong Number: "<<Armstrong(n,d)<<endl;
  }
    return 0;
}