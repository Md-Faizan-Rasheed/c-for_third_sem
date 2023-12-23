// #include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool find (string str,int n,char key ,int i){
    if(i>=n)
    return false ;

    if(str[i]==key){
        return true;
    }
      return find(str,n,key,++i);
}


int main(){

    string str="lovebabber";
    char key='r';
    int n=str.length();
    int i=0;

   bool say= find(str,n,key,i);
   cout<<say;
    return 0;
}