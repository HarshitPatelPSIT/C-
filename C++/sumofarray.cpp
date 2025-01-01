#include <iostream>
using namespace std;

int findsum(int arr[],int idx,int n) {
   if(idx==n-1){
    return arr[idx];
   }
   else{
    return findsum(arr,idx+1,n)+arr[idx];
   }
}

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
   for(int i=0;i<n;i++){
    cout << "Enter the Value of inde " << i + 1 << ": ";
    cin>>arr[i];
   }
   cout<<findsum(arr,0,n);
    return 0;
}