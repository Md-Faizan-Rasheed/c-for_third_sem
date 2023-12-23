#include<bits/stdc++.h>
using namespace std;
class A
{
    private:
    int x,y;
    public:
    A() {}
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void operator ++() {
        x=x*x;
        y=y*2;
    }
    // void or --()
    // {
    //     x=x/x;
    //     y=y/2;
    // }
    void print()
    {
        cout<<x<<" "<<endl;
    }
};
int main()
{
    A op;
    op.setdata(10,15);
    ++op;
    cout << "Incremented numbers are "<<endl;
    op.print();
    // --op;
    // cout << "Decremented numbers are "<<endl;
    // op.print();
    return 0;
}
// #include<iostream>
// using namespace std;
// class overloading{
//     int x,y;
//     public:
//     void setdata(int a,int b){
//         x=a;
//         y=b;
//     }
//     void operator ()(){
//         x=x*y;
//         y=x/y;
//     }
//     void print(){
//         cout<<x<<" "<<y;
//     }
// };
// int main(){
//     overloading op;
//     op.setdata(20,30);
//      op();
// op.print();
//     return 0;
// }

