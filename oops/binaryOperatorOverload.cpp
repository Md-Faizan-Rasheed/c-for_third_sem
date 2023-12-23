
#include<iostream>
using namespace std;
class ABC{
    int a;
    public:
    void getdata(){
        cout<<"Enter the number"<<endl;
        cin>>a;
    }

    void putdata(){
        cout<<"value of a is= "<<a;
    }

    ABC operator +(ABC BB){
        ABC cc;
        cc.a=a+BB.a;
        return cc;
    }
};
int main(){
 ABC AA,bb,cc;
 AA.getdata();
 bb.getdata();
 cc.getdata();
 cc.putdata();
    return 0;
}
