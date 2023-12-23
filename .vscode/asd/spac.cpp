#incluede<iostream>
using namespace std;
int replacing(string str[]){
    int tem="";
    for(int i=0;i<=str.length();i++){
        if(str[i]==''){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0')
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    retrun tem;
}
int main(){
string str;
cin.getline(str,100);
cout<<replacing(str);

    return 0;
}