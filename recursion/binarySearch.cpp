#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&v,int &s,int &e,int target){
    if(s>=e)
    return -1;

int mid=(s+e)/2;
if(v[mid]==target)
return mid;


return (arr[mid]<key)
else if(v[mid]>target)
e=mid-1;

else
s=mid+1;

//  return binarySearch(v,s,e,target);
}
int main(){
    vector<int>arr{20,40,60,70,90,99,109};
    int target=99;
    int n=arr.size();

int s=0;
int e=n-1;

    int ans=binarySearch(arr,s,e,target);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}