// #include<iostream>
// using namespace std;
// class A{
//     friend class B;
// public:
//     int a;
//     int n1=1,n2=2,n3=3,n4=4,n5=5,n6=6,n7=7,n8=8,n9=9,n10=10;
// };
// class  b{
//     public:
//     void display(A c){
//         cout<<c.n1 <<c.n2 <<c.n3 <<c.n4 <<c.n5 <<c.n6 <<c.n7 <<c.n8 <<c.n9 <<c.n10 <<endl;
//     }
//     void sum(A c){
//         int sum=c.n1 + c.n2 + c.n3 + c.n4  + c.n5 + c.n6  + c.n7 + c.n8  + c.n9 + c.n10;
//         cout<<sum; 
//     }

// };
// int main()
// {
//     A a;
//     b p;
//     p.display(a);
//     p.sum(a);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class car{
//     int cost;
//     string name;

//     public:
//     car(string n,int c){
//            name=n;
//            cost=c;
//     }
//     bool operator ==( car c){
//            return (name == c.name && cost==c.cost);
           
//     }
// };
// int main(){
// car c1("Santro",5000);
// car c2("Safare",100000);
// if(c1 == c2){
//     cout<<"Equivalent "<<endl;
// }
// else{
//     cout<<"Not Equivalent"<<endl;
// }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Parent {
// public:
//     void GeeksforGeeks_Print()
//     {
//         cout << "Base Function" << endl;
//     }
// };
 
// class Child : public Parent {
// public:
//     void GeeksforGeeks_Print()
//     {
//                 // Parent::GeeksforGeeks_Print();

//         cout << "Derived Function" << endl;
 
//         // call of overridden function
//         // Parent::GeeksforGeeks_Print();
//     }
// };
// int main(){
//      Child Child_Derived;
//      Parent p;
//      p.GeeksforGeeks_Print();
//     // Child_Derived.GeeksforGeeks_Print();
//     return 0;
// }


// #include <iostream>
// using namespace std;
 
// class Parent {
// public:
//     void GeeksforGeeks()
//     {
//         cout << "Base Function" << endl;
//     }
// };
 
// class Child : public Parent {
// public:
//     void GeeksforGeeks()
//     {
//         cout << "Derived Function" << endl;
//     }
// };
 
// int main()
// {
//     Child Child_Derived;
 
//     // pointer of Parent type that points to derived1
//     Parent* ptr = &Child_Derived;
 
//     // call function of Base class using ptr
//     ptr->GeeksforGeeks();
 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class A{
//     public: 
//     void show(){
//         cout<<"In base class";
//     }
// };
// class B:public A{
//     public:
//     void show(){
//         cout<<"In derived class ";
//     }
// };
// int main(){
// B z;
// z.show();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <class T> T add (T &a , T &b){
//     T result = a + b;
//     return result;
// }

// int main(){
//     int a=5,b=44;
//     float m=33.333,w=22.222;

//     cout<<"Addigiton of a a and b"<<add(a,b);
//     cout<<"Addditio  ao m and w"<<add(m,w);
//     return 0; 
// }

// #include<iostream>
// using namespace std;
// template <class T>
// {
//     class A{
//         public:
        
//     }
// }
// int main(){
//     return 0;
// }

// #include<iostream>
// using namespace std;
// classs distance{
//     int meters1;
//     int meters2;
//     distance(int m1,int m2){
//         meters1=m1;
//         meters2=m2;
//     }
//     friend void add(distance);

// };

// friend void add(distance d){
//     cout<<"Addition is = "<<d.meters1+d.meters2;
// }
// int main(){
//     distance p(4,6);
//     add(p);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// class distance {
//     int meters1;
//     int meters2;

// public:
//     distance(int m1, int m2) {
//         meters1 = m1;
//         meters2 = m2;
//     }

//     friend void add(distance d);
// };

//  friend void add(distance d) {
//     cout << "Addition is = " << d.meters1 + d.meters2 << endl;
// }

// int main() {
//     distance p(4, 6);
//     add(p);

//     return 0;
// }
#include<iostream>
using namespace std;

class distance {
    int meters1=88;
    int meters2=77;

   

    friend void add(distance d );
};

friend void add(distance d) {
    cout << "Addition is = " << d.meters1 + d.meters2 << endl;
}

int main() {
    distance d;
   add(d);

    return 0;
}

