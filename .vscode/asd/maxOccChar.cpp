#include<iostream>
using namespace std;
int maxOccChar(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
         if(ch>='a' && ch<='z'){
            number=ch-'a';
         }
         else{
            number=ch-'A';
         }
         arr[number]++;
    }

    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main(){
  string s;
  cin>>s;
  cout<<"The maximam occuring character in given string is-->>"<<
  maxOccChar(s)<<endl;
  return 0;
}