#include <iostream>
using namespace std;
void AdduptoN(int n) {
   if(n<1){
    return ;
   }
   else{
     AdduptoN(n-1);
     cout<<n<<" ";
   }
}

int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
   AdduptoN(n);
    return 0;
}