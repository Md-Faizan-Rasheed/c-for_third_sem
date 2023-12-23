#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// Q. i/p infinite supply of coins 1,2,
//    o/p target to made 11 ruppes by using minimum of coins for target 3

int solve(vector<int>& arr,int target){
    if(target==0)
    {
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
      int ans=  solve(arr,target-arr[i]);
      if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
    return mini;
}
int main(){
    vector<int>arr{1,2};
    int target=3;

    int ans=solve(arr,target);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}