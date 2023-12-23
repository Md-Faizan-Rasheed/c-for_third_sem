#include<iostream>
using namespace std;

class three{
    private:
    int a,b,c;

    public:
    three(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    friend void comparision(three); //Declearing Friend function
};
void comparision (three t){
    if (t.a > t.b && t.a > t.c){
        cout<<"A is greatest ";
    }
    else if (t.b > t.c && t.b >t.a  ){
        cout<<"B is greatest";
    }
    else{
cout<<"C is greatest";
    }
}
int main(){
   three a(3,4,2);
   comparision(a);


    return 0;
}