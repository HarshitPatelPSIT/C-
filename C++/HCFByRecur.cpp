#include <iostream>
using namespace std;
int HCF(int n,int m) {
   if(n%1==0 and m%==0){
    return 1;
   }
   else{
     return (n%min(n,m)==0&& m%min(n,m)==0)?min(n,m):HCF(min(n,m)-1,max(n,m));
   }
}

int main() {
    int n,m;
    cout << "Enter the Number : ";
    cin >> n>>m;
   HCF(n,m);
    return 0;
}