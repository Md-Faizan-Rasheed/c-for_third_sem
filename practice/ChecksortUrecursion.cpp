#include<iostream>
using namespace std;
bool check(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }

    bool ans=check(arr+1,n-1);
    return ans;
}
int main(){
    int arr[5]={20,4,6,8,9};
    int n=5;
    bool ans=check(arr,n);
    cout<<ans;
    return 0;
}