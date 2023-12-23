#include<iostream>
#include<cstring>
using namespace std;
void sieveofEratosthenes(int n){
bool prime[n+1];

memset(prime,true, sizeof(prime));

for(int p=2;p*p<=n;p++){
    
    if(prime[p]==true){


        for(int i=p*p;i<=n;i=i+p){
            prime[i]=false;

        }
    }
}
for(int p=2;p<=n;p++){
    if(prime[p]){
        cout<<p<<" ";
    }
}
}
int main (){
    int n;
    cout<<"Enter a number upto which you want Prme nO."<<endl;
    cin>>n;
    sieveofEratosthenes(n);
    return 0;
}