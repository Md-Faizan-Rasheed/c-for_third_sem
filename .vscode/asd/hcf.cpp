#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a,b;
    int small;
    int max=INT_MIN;
    cout<<"Enter the value of A and B ";
    cin>>a>>b;
    if (a>b){
        small=a;
    }
    else{
        small=b;
    }
    for(int i=2;i<=small;i++){
        if(a%i==0 && b%i==0){
            // cout<<i<<" "<<endl;
             
             if(i>max){
                max=i;
             }
        }
    }
    cout<<"HCF of the given two number is"<<" "<<max;
    
    return 0;
}