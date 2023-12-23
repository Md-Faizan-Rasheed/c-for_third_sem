#include<iostream>
using namespace std;
// class two;5 t5
class one{
    friend class two;
    int a,b;
    public:
    one(int a,int b){
       this->a=a;
       this->b=b;
    }
};
class two{   
    public:
    void  display(one obj){
        cout<<"a: "<<obj.a<<"b: "<<obj.b<<endl;
    } 
    void compare(one com){
        if(com.a>com.b){
            cout<<"A is greater than b";
        }
        else{
            cout<<"B is greater than a";
        }
    }
};
int main(){
    int a, b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    one z(a,b);
    two k;
    k.display(z);
    k.compare(z);
    return 0;
}