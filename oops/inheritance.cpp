// -------------Single_Inheritance-------------
// #include<iostream>
// using namespace std;
// // base class
// class A{
//     protected:
//     int a;

//     public:
//     void set_A(){
//         cout<<"Enter the vlau fo A= ";
//         cin>>a;
//     }
//     void disp_A(){
//         cout<<endl<<"Value of A"<<a;
//     }
// };

// class B:public A{
//     int b,p;
//     public:
//     void set_B(){
//         set_A();
//         cout<<"Enter the vlaues of B= ";
//         cin>>b;
//     }
//     void display_B(){
//         disp_A();
//             cout<<endl<<"value of B="<<b;
        
//     }
//     void cal_product(){
//         p=a*b;
//         cout<<endl<<"Product of "<<a<<" *"<<b<<" = "<<p;
//     }
// };
// int main(){
// B _b;
// _b.set_B();
// _b.cal_product();
//     return 0;
// }



// ------------------Multiple_Inheritance--------------------
// #include<iostream>
// using namespace std;
// class F{
//     public:
//     int age1;
//     public:
//     int get1(){
//         cout<<"Enter the age Fathers"<<endl;
//         cin>>age1;
//     }
//     void set1(){
//            cout<<"Your father age"<<age1<<endl;
//     }
// };

// class M{
//     public:
//     int age2;
//     public:
//     int get2(){
//         cout<<"Enter the MOther age"<<endl;
//         cin>>age2;
//     }
//     void set2(){
//         cout<<"YOur mother age is"<<age2<<endl;
//     }
// };
// class C:public F,public M{
//     public:
//     string name;
//     int sum;
//     public:
//     void claculate(){
//         get1();
//         get2();
//         cout<<"Enter the name of child "<<endl;
//         cin>>name;
//         cout<<"sum of the age of father and mother is"<<age1+age2;
//     }
// };
// int main(){

//     C obj;
//     obj.claculate();
//     return 0;
// }

// ----------------Multilevel_Inheritance---------------------
// #include<iostream>
// using namespace std;
// class G{
//     public:
//     int money1;
//     public:
//     void setg(){
// cout<<"Enter the money that your GrandFather have =";
// cin>>money1;
//     }
//     int getg(){
//         return money1;
//     }

// };
// class F:public G{
//     public:
// int money2;
// public:
// void setf(){
//     G::setg();
//     cout<<"Enter the money Your Father have ="<<endl;
//     cin>>money2;
// }
// int getf(){
//     return money2;
// }

// void calc1(){
//     cout<<"Total Money at level F ="<<getg()+getf();
// }
// };
// class C:public F{
//     public:
//     int money3;
//     void setc(){
// F::setf();
//         cout<<"Enter the money you have"<<endl;
//         cin>>money3;
//     }
//     int getc(){
//         return money3;
//     }
// void calc2(){
//     cout<<"Total money at child level "<<getg()+getf()+getc();
// }
// };
// int main(){
//     // G obj1;
//     // obj1.setg();

//     // F obj2;
//     // obj2.setf();
//     // obj2.calc1();

//     C obj;
//     obj.setc();
//     obj.calc2();
//     return 0;
// }