#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>&arr,int sum ,int& maxi ,int i){
    // base case
    if(i>=arr.size()){
        // maxi update
        maxi=max(sum,maxi);
        return maxi;
    }


    // include
    solve(arr,sum+arr[i],maxi,i+2);

    // exclude
    solve(arr,sum,maxi,i+1);
}
int main(){
    vector<int> arr{1,2,3,1,3,5,8,1,9};
    int sum=0;
    int maxi=INT_MIN;
int i=0;
    solve(arr,sum,maxi,i);

    cout<<maxi<<endl;
    return 0;
}