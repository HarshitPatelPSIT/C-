#include <iostream>
using namespace std;
int HCF(int n,int m) {
  if(m>n){
    return HCF(m,n);
  }
   if(m==0){
    return n;
   }
   else{
    return HCF(m,n%m);
   }
}
int main() {
    int n,m;
    cout << "Enter the Number : ";
    cin >> n>>m;
   cout<<HCF(n,m);
    return 0;
}