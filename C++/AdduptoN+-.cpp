#include <iostream>
using namespace std;
int AdduptoN(int n) {
   if(n==0){
    return 0;
   }
   else{
     return  AdduptoN(n-1)+(((n%2)==0)?(-n):n);

   }
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
   cout<<AdduptoN(n);
    return 0;
}