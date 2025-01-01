#include <bits/stdc++.h>
using namespace std;
void RecursivePrintArray(int arr[],int idx,int n){
    if(idx==n){
       return;
    }
    
    cout<<arr[idx]<<endl;
         RecursivePrintArray(arr ,idx+1,n);

    
}
int main() {
    int n;
    cout << "Enter the size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the Value of inde " << i + 1 << ": ";
        cin >> arr[i];
    }
    RecursivePrintArray( arr, 0, n);
    return 0;
}
