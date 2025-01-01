#include <iostream>
using namespace std;
void KmultipleofN(int n,int k) {
   if(k==0){
    return ;
   }
   else{
    KmultipleofN(n,k-1);
     cout<<n*k<<" ";
   }
}

int main() {
    int n,k;
    cout << "Enter the Number : ";
    cin >> n>>k;
   KmultipleofN(n,k);
    return 0;
}