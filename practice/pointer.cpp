#include<iostream>
using namespace std;
// void update(int **p){
//     p=p+1;

//     *p=*p+1;

//     **p=**p+1;
// }
void print(int arr[],int n,int i){
    if(i>=n)
    return;

    // cout<<arr[i]<<" ";

print(arr,n,++i);
    cout<<arr[i]<<" ";

}
int main(){
    // int i=5;
    // int *ptr=&i;
    //  int **dtr=&ptr;
    //  cout<<**dtr<<endl;
    //  cout<<*ptr;
    int arr[]={23,22,53,24,25};
    int n=5;
    int i=0;
    print(arr,n,i);

    return 0;
}