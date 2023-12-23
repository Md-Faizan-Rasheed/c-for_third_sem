
// #include<iostream>
// using namespace std; 
// class Person { 
// protected: 
//     string name; 
  
// public: 
//     Person(const string& name) 
//         : name(name) 
//     { 
//     } 
//     void display() { cout << "\nName: " << name << endl; } 
// }; 
  
// //  (Single Inheritance) 
// class Employee : public Person { 
// protected: 
//     int employeeId; 
  
// public: 
//     Employee(const string& name, int id) 
//         : Person(name) 
//         , employeeId(id) 
//     { 
//     } 
//     void displayEmployee() 
//     { 
//         display(); 
//         cout << "Employee ID: " << employeeId << endl; 
//         cout << "Method inside Derived Class Employee"
//              << endl; 
//     } 
// }; 
  
// // (Single Inheritance) 
// class Student : public Person { 
// protected: 
//     int studentId; 
  
// public: 
//     Student(const string& name, int id) 
//         : Person(name) 
//         , studentId(id) 
//     { 
//     } 
//     void displayStudent() 
//     { 
//         display(); 
//         cout << "Student ID: " << studentId << endl; 
//         cout << "Method inside Derived Class Student"
//              << endl; 
//     } 
// }; 
  
// //  (Multiple Inheritance) 
// class StudentIntern : public Employee, public Student { 
// public: 
//     StudentIntern(const string& name, int empId, int stuId) 
//         : Employee(name, empId) 
//         , Student(name, stuId) 
//     { 
//     } 
//     void displayStudentIntern() 
//     { 
//         cout << "Methods inside Derived Class "
//                 "StudentIntern : "
//              << endl; 
//         displayEmployee(); 
//         displayStudent(); 
//     } 
// }; 
  
// // driver code 
// int main() 
// { 
//     StudentIntern SI("Riya", 67537, 2215); 
//     SI.displayStudentIntern(); 
  
//     return 0; 
// }

// output
// Methods inside Derived Class StudentIntern : 
// Name: Riya
// Employee ID: 67537
// Method inside Derived Class Employee
// Name: Riya
// Student ID: 2215
// Method inside Derived Class Student


// #include<iostream>
// using namespace std; 
// // Base class 1 
// class Meal { 
// public: 
//     void print() 
//     { 
//         cout << "Different types of meals are served :"
//              << endl; 
//     } 
// }; 
  
// //  (Hierarchical Inheritance) 
// class Breakfast : public Meal { 
// public: 
//     void print() 
//     { 
//         cout << "\nBreakfast is a type of meal." << endl; 
//     } 
// }; 
  
// // Derived class from breakfast (Multilevel Inheritance) 
// class Milk : public Breakfast { 
// public: 
//     void print() 
//     { 
//         cout << "Milk served in breakfast." << endl; 
//     } 
// }; 

// // (Multilevel Inheritance) 
// class Yoghurt : public Milk { 
// public: 
//     void print() 
//     { 
//         cout << "Yoghurt made from milk." << endl; 
//     } 
// }; 
  
// // (Hierarchical Inheritance) 
// class Dessert : public Meal { 
// public: 
//     void print() 
//     { 
//         cout << "\nDessert is a type of meal." << endl; 
//     } 
// }; 
  
// //  (Multilevel Inheritance) 
// class Sweets : public Dessert { 
// public: 
//     void print() 
//     { 
//         cout << "Sweets served in Dessert." << endl; 
//     } 
// }; 
  
// //  (Multilevel Inheritance) 
// class Pastry : public Sweets { 
// public: 
//     void print() 
//     { 
//         cout << "Pastry is a type of sweet." << endl; 
//     } 
// }; 
  
// int main() 
// { 
//     Meal types; 
//     Breakfast servedBreakfast; 
//     Milk milk; 
//     Yoghurt yoghurt; 
//     Dessert servedDessert; 
//     Sweets sweet; 
//     Pastry pastry; 
  
//     types.print(); 
//     servedBreakfast.print(); 
//     milk.print(); 
//     yoghurt.print(); 
//     servedDessert.print(); 
//     sweet.print(); 
//     pastry.print(); 
  
//     return 0; 
// }
// Output
// Different types of meals are served :

// Breakfast is a type of meal.
// Milk served in breakfast.
// Yoghurt made from milk.

// Dessert is a type of meal.
// Sweets served in Dessert.
// Pastry is a type of sweet.




// Hybrid
// #include <iostream>
// using namespace std;

// class A
// {
//  	public:
//  	int x;
// };
// class B : public A
// {
//  	public:
//  	B()      
//  	{
//  	   x = 10;
//  	}
// };
// class C
//  {
//  	public:
//  	int y;
//  	C()  
//  	{
//  	    y = 4;
//         }
// };
// class D : public B, public C   
// {
//  	public:
//  	void sum()
//  	{
//  	    cout << "Sum= " << x + y;
//  	}
// };

// int main()
// {
//  D obj1;         
// obj1.sum();
//  	return 0;
// }         
// Output

// Sum= 14


// Overload ++ when used as prefix
// #include <iostream>
// using namespace std;
// class Count {
//    private:
//     int value;

//    public:
//     Count() : value(5) {}
//     void operator ++ () {
//         ++value;
//     }
//     void display() {
//         cout << "Count: " << value << endl;
//     }
// };
// int main() {
//     Count count1;
//     ++count1;
//     count1.display();
//     return 0;
// }

// Output

// Count: 6


// // friend 
// #include <iostream>
// using namespace std;
 
// class GFG {
// private:
//     int private_variable;
 
// protected:
//     int protected_variable;
 
// public:
//     GFG()
//     {
//         private_variable = 10;
//         protected_variable = 99;
//     }
 
//     // friend class declaration
//     friend class F;
// };
 
// class F {
// public:
//     void display(GFG& t)
//     {
//         cout << "The value of Private Variable = "
//              << t.private_variable << endl;
//         cout << "The value of Protected Variable = "
//              << t.protected_variable;
//     }
// };
 
// // Driver code
// int main()
// {
//     GFG g;
//     F fri;
//     fri.display(g);
//     return 0;
// }
// The value of Private Variable = 10
// The value of Protected Variable = 99

/ Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
Output

int Number = 7
double Number = 7.7
