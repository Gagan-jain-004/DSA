#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


//lec 123----------

/*
class Animal {
    //state or Properties 
    private:
    int weight;
    public:
    int age;
    string type;
  
  //default constructor  ---
   Animal(){
    this->weight=0;
    this->age=0;
    this->type="";
    cout<<"deflt constrct"<<endl;

   } 

   //Paramaterised Constructor   
   Animal(int age){
    this->age=age;
    cout<<"paramaterised constrctr"<<endl;
   }
   Animal(int age,int weight){
    this->age=age;
    this->weight=weight;
    cout<<"paramaterised 2nd constrctr"<<endl;
   }


// copy constructor
 Animal(Animal & obj){
  this->age=obj.age;
  this->weight=obj.weight;
  this->type=obj.type;
  cout<<"I am inside copy cnstrctr"<<endl;
 }
 

  //behaviour
  void eat(){
    cout<<"Eating"<<endl;
  }
  void sleep(){
    cout<<"Sleeping"<<endl;
  }
  
  int getWeight(){
    return weight;
  }
  void setWeight(int weight){
    this->weight=weight;
  }
 
  void print(){
    cout<<this->age <<" "<<this->weight <<" "<<this->type <<endl;
  }

//Destructor-------

  ~Animal(){
    cout<<"I am inside destrctr"<<endl;
  }

};

int main(){

//   //Object creation-------------
  

//   //static  (means before run time)-----

//   Animal raka;
//   raka.age=12;
//   raka.type="Lion";
//   cout<<"Age is "<<raka.age<<endl;
//   cout<<"Age is "<<raka.type<<endl;


//   raka.eat();

// // to access private data member outside we use get and set 

// raka.setWeight(101);
// cout<<"Weight "<<raka.getWeight()<<endl;


// //dynamic  (means at runtime)-------------

// Animal*suri =new Animal;
// (*suri).age=15;
// (*suri).type="billi";

// //alternate way of writing for -dynamic
// suri->age=17;
// suri->type="baby";

// suri->eat();
// suri->sleep();
// suri->setWeight(10);
// cout<<suri->getWeight();

// //Constructor khel --------------------
// Animal a(10) ;
// Animal*b= new Animal(100,25);


// // object copy ways
// Animal c= a;       //or can be like below 
// Animal d(a);


//-------------------

// Animal a ;
// a.age=20;
// a.setWeight(101);
// a.type="babbar";

// Animal b=a;

// a.print();
// b.print();

// a.type[0]='G';
// a.print();

//------------ Destructor ke khel 

cout<<"a boj creation"<<endl;
Animal a;
a.age=5;

cout<<"b obj creation "<<endl;
Animal *b= new Animal();
b->age= 12;

// manually need to call destructor in  case of removal of dynamic memory wala object 
delete b;
    return 0;
}

*/

//---------------------

//Lec 124-----------------------------------

//Inheritance 


// class Animal{
//    public:
//   int age;

// };

// class Dog:private Animal{
//   public:
//   void print(){
//     cout<<this->age;

//   }

// };

// //type of inheritance

// class Fruit{
//   public:
//   string name;
// };

// class Mango:public Fruit{
//   public :
//   int weight;
// };

// class Alphanso: public Mango{
//   public:
//   int sugarLevel;
// };



// int main(){
//   // Dog d1;
//   // d1.print();
     
//      Alphanso a;
//      cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;
//   return 0;
// }


// //------- inheritance of dm having same name but from different class can use by scoping 
// class A{
//   public:
//   int chemistry;
//   A(){
//     chemistry=101;
//   }
// };

// class B{
//   public:
//   int chemistry;
//   B(){
//     chemistry=410;
//   }
// };

// class C:public A,public B{
//   public :
//   int maths;
// };

// int main(){
//   C obj;
//   cout<<obj.A::chemistry<<" " <<obj.maths<<endl;

//   return 0;
// }

// //------hierarchical inheritance 

// class car{
//   public:
//   int age;
// void speedup(){
//   cout<<"Speeding up"<<endl;
// }

// };

// class Scorpio:public car{

// };

// class Fortuner:public car{

// };

// int main(){
//   Scorpio a1;
//   a1.speedup();

//   Fortuner f1;
//   f1.speedup();

// }



//----------- Polymorphism  
//compile time polymorphism

//(a) function overloading - fxn having same name but having different no. of parameters

// class Maths{

//   public:

//   int sum(int a,int b){
//     return a+b;
//   }
//   int sum(int a, int b, int c){
//     return a+b+c;

//   }
//   int sum (int a , float b){
//     cout<<"hell"<<endl;
//     return a+b+10;

//   }
// };

// int main(){
//   Maths obj;
//   cout<<obj.sum(3,5)<<endl;
  
// }


//----  (b) Operator Overloading 

// class Param {
//   public:
//   int val;

//   void operator+(Param& obj2){
//     int value1= this->val;
//     int value2=obj2.val;
//     cout<<(value2-value1)<<endl;
//      }


// };

// int main(){
//   Param obj1,obj2;
//   obj1.val=7;
//   obj2.val=2;

//   // this should print the difference between them 
//   obj1 + obj2;
//   return 0;

// }


//------------ Run time polymorphism (function overriding)

// class Animal{
//   public:
//  virtual void speak(){
//     cout<<"Speaking "<<endl;
//   }
// };

// class dog: public Animal{
//   public:
//   //override speak fxn
//   void speak(){
//     cout<<"Barking"<<endl;
//   }
// };

// int main(){

//   // dog d;
//   // d.speak();
         
//             //  Animal *a = new Animal();
//             //  a->speak();
//          //Dog *a = new Dog();
//          //a-> speak();

//      //UpCasting   ---     parent ka pointer ko child mai store krna 
//   Animal * a =  new dog();       // this whole in child class ( pointer to parent but object a is created in child class    )     
//       a->speak();                // gives speaking as output //virtual likh do parent mai agr barking print krwana ho 
// }




//--------------------- dynamic 

// int main(){
//   int *a= new int;  /// dynamically variable creation
//   *a=5;
// char *b= new char;
// *b='L';
// int n;

// cin>>n;
// int *arr= new int[n];    // dynamically array creation
// for(int i=0;i<n;i++){
//   cin>>arr[i];
// }
// cout<<arr[2]<<endl;
//   cout<<*a<<endl<<*b;
// }




//----------------------------- dynamicallly 2-D  array 


int main(){
  int row=5;
  int col=3;

  int **arr=new int*[5];

  for(int i=0; i<row; i++){
    arr[i]=new  int [col];
  }

  //printing
  for(int i=0; i<row; i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }

  cout<<endl;
  }
  
}