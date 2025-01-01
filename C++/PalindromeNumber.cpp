#include <iostream>
using namespace std;

bool CheckPalindrome(int n ,int *temp) {
   if (n<=9&&n==(*temp%10))
   {
    (*temp)/=10;
   return true;
   }
   bool ans=(CheckPalindrome(n/10,temp) and (n%10)==((*temp)%10));
   (*temp)/=10;
   return ans;;
}

int main() {
    int n,temp;
    cout << "Enter the Number : ";
    cin >> n;
    temp=n;
    int *temp1=&temp;
   cout<<CheckPalindrome(n,temp1);
    return 0;
}