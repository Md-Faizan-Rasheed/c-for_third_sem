//Sum of Two arrays
//arr1[4]={1,2,5,1};
// arr2[4]={3,6};
//sum[]={4,8,9,7}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>findArraysSum(vector<int>& a,vector<int>& b,int n,int m){
    int i=n-1,j=m-1;
    int carry=0;
    vector<int>ans;
    while(i>=0 && j>=0){
       int sum=a[i]+b[j] +carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--,j--;
    }

    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(i>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

reverse(ans.begin(),ans.end());
   return ans;
}

int main(){
    vector<int>a1{1,2,5,1};
    vector<int>a2{3,6};
    int n=a1.size();
    int m=a2.size();
 vector<int>result= findArraysSum(a1,a2,n,m);

for(int num:result){
    cout<<num<<" ";
}
cout<<endl;

    return 0;
}