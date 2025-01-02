#include <bits/stdc++.h>
using namespace std;
int mincost(int *arr,int n,int k){
if((n-1)==k){
    return 0;
}
if((n-2)==k){
    return mincost(arr,n,k+1)+abs(arr[k]-arr[k+1]);
}
else{
    return min(mincost(arr,n,k+1)+abs(arr[k]-arr[k+1]),mincost(arr,n,k+2)+abs(arr[k]-arr[k+2]));
}
}
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
   int arr[n];
   for(int i=0;i<n;i++){
    cout<<"Enter the element :";
    cin>>arr[i];
   }
   cout<<mincost(arr,n,0);
    return 0;
}