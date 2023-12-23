#include<iostream>
// #include"Hero.cpp"
using namespace std;
class Hero{
    
    // public:
    // double lul;
    private:
    int health;
    public:
    char level;
    //properties
    Hero(){
        cout<<"Constructor has been called default simple"<<endl;
        name=new char[100];
    }

    // parameterised constructor
    Hero (int health){
        cout<<"this --->>"<<this<<endl;
        this->health =health;
    }
      
      //COPY CONSTRUCTOR 
      Hero (Hero temp){
        cout<<"Copy constructor called "<<endl;

        this->health=temp.health;
        this->level=temp.level;
      }

     Hero (int health ,char level){
       this->level=level;
        
        cout<<"this --->>"<<this<<endl;
        this->health =health;
    }


    
    void print(){
        cout<<endl;
        cout<<"Nam :  "<<this->name<<" ,";
        
        cout<<"Print the first function membrane"<<endl;
        cout<<"Health"<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
    }

int getHealth(){
    return health;
}
char getLevel(){
    return level;
}
 
 void setHealth(int h){
    health=h;
 }
 void setLevel(char c){
    level=c; 
    cout<<"Destructor hai aja tu vhai call krna prega kya";
 }

};
int main(){

// class Hero;
Hero a;


Hero *b=new Hero();


return 0;

}












// Hero hero1;
// hero1.setHealth(123);
// hero1.setLevel('d');
// char name[7]="Babber";
// hero1.setName(name);






















// Hero surash(45,'D');

// //COPY CONSTRUCTOR
// Hero R(surash);
// R.print();


// R.health=surash.health;
// R.Level=surash.Level;
























// cout<<"HEy"<<endl;
    // Hero ramesh(11);
    // Hero rameshe(534,'A');
    // rameshe.print();
    // ramesh.print();
    // cout<<"Address of ramesh "<<&ramesh<<endl;
    // cout<<"Heloo"<<endl;
    //STATIC ALLOCATION
// Hero a;
// a.setHealth(344);
// a.setLevel('A');
// cout<<"Level is "<<a.level<<endl;
// cout<<"Health is "<<a.getHealth()<<endl;

// //DAYNAMIC ALLOCATION
// Hero *b=new Hero;
// b->setHealth(765);
// b->setLevel('B');
// cout<<"Level is "<<(*b).level<<endl;
// cout<<"Health is "<<(*b).getHealth()<<endl;


// cout<<"Level is "<<b->level<<endl;
// cout<<"Health is "<<b->getHealth()<<endl;





// cout<<"Size of ramesh is "<<sizeof(ramesh)<<endl;
// cout<<"Ramesh Health is "<<ramesh.getHealth()<<endl;
// ramesh.setHealth(70);
// // ramesh.health=70;
// ramesh.level='A';
// cout<<"Health is;  "<<ramesh.getHealth()<<endl;
//  cout<<"Level is: "<<ramesh.level<<endl;
// cout<<"Size of health    "<<sizeof(h1)<<endl;
    // return 0;
// }
 