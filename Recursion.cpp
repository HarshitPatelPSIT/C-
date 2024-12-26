#include<bits/stdc++.h>
using namespace std;
 /*void fun(int arr[],int idx ,int n){
    if(idx==n){
        return ;
    }
    else{
    cout<<arr[idx]<<endl;
    fun(arr,idx+1,n);
    }
 }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array element"<<endl;
    fun(arr,0,n);
} 
*//////////////////////////////////
// max element in array
/*int max(int *arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    else{
      return max(arr[idx],max(arr,idx+1,n));
    }
}
int main(){
    int n=5;
    int arr[n]={3,10,3,67,5};
   cout<<max(arr,0,n);
    return 0;
}*/     //////////////
//// sum of all values of the array
/*int sum(int  *arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    else
{
    return (arr[idx]+sum(arr,idx+1,n));
}
}
int main(){
    int n=5;
    int arr[n]={2,3,5,20,9};
    cout<<sum(arr,0,n)<<endl;
    return 0;
    
}*/
////////////////////
// remove occurance osf "a " in string
/*string remove(string &s,int idx,int n){
    if(idx==n){
        return "";
    }
    else{
        return ((s[idx]=='a') ? "" :string(1, s[idx]))+ remove(s,idx+1,n);
    }
}
int main(){
    int n=5;
    string s="abcax";
    cout<<remove(s,0,n)<<endl;
}*////////////////////
//////////////////////////////
// given number is palindrome
bool check(int n,int &temp ){
    if(n){
        return true;
    }
    else{
       return (check(n/10,&temp%10)==temp)?true:false;
        
    }
}
int main(){
    int n=12621;
    int temp=n;
    cout<<(check(n,temp)?"Number is palindrome": " is not palindrome");
}