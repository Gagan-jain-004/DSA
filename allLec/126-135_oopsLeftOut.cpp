#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;



//-------------- ----    126  const keyword

// int main(){

//     // const int x=23;
//     // cout<<x;
//     // cout<<endl;

//     // -----        const with pointers

//     // hack ---  if we write const before * then content will be constant  

//     //   //- CONST data, NON-Const pointer
//     // const int *a = new int (2);  
//     //     //  int const*a =new int(2);    //alter way of writing above line
//     // cout<<*a<<endl;
//     //     //*a=20;   // can't change the content of pointer but can change the address stored in pointer
//     //     // cout<<*a<<endl;
//     //  int b =20;
//     //  a=&b;  //pointer itself can be reassigned
//     //  cout<<*a<<endl;

// //    // CONST Pointer, but NON-CONST data .
// //    int *const a= new int(2);
// //    cout<<*a<<endl;
// //    *a=20;   //chal jayega 
// //    cout<<*a<<endl;
// //    int b=50;
// //    a=&b;  //nahi chalega  coz CONST pointer

//     //    //CONST pointer , CONST data
//     //    const int *const a= new int(10);
//     //    cout<<*a<<endl;
//     //    *a=50;
//     //    int b=100;
//     //    a=&b;      

    
    
//     return 0;
// }


             // -     - - -- -     COnst with classes

//  class abc{
//     int x;
//     int *y;
//     public:
//     abc(){
//         x=0;
//         y= new int (0);
//     }

//     int getX() const {

//         // x=55;       // upper wala const likhne sai yeh kisi variable kon change nhi krne dega 
//         return x;
//     }

//     void setX(int _val){
//         x=_val;
//     }
//     int getY(){
//         return *y;
//     }
    
//     void setX(int _val){
//         *y=_val;
//     }
//  } ;           

//  int main(){
//     abc a;
//     cout<<a.getX()<<endl;
//     cout<<a.getY()<<endl;

//     return 0;
//  }


// class abc {

// // constructor    old style
// abc(int _x,int _y,int _z=0){
//     x=_x;
//     y = new int(_y);
//     z= _z;

// }

// // intialization list same work of constructor
// // abc(int _x,int _y, int _z=0):x(_x),y(new int (_y)), z(_z){

// // }

// }

//  // Macro
//  #define PI 3.14
//  #define MAXX(x,y) (x>y ? x:y)
//  void fun(){
//     int x=6;
//     int b=17;
//     int c=MAXX(x,b);
//     cout<<c;
//  }

//  int main(){
// //    int area=PI*2;
// //    cout<<area;
// fun();
//  }


//----------- ---- gloabl local

// int x=4;
// int main(){
    
// x=5;
// cout<<x<<endl;
// ::x=45;
// int x=20;
// cout<<x<<endl;
// cout<<::x<<endl;
// }


// ----------       Static keyword in class

// class abc{
//     public:
//     int x,y;

//     void print() const{
//         cout<<x<<" "<<y<<endl;
//     }
// };

// int main(){
//     abc obj1= {1,2};
//     abc obj2= {4,5};
//     obj1.print();
//     obj2.print();
// }




     ///          --------- - ---  Abstraction 


// Abstraction using header
//  as sort ki functionality likhi hui hai  algorithm header file mai joh ki don't need to know it's implementation just use it easily

     // int main(){
     //    vector<int> v={3,4,1,2};
     //    sort(v.begin(),v.end());

     //    for(auto i:v){
     //        cout<<i<<endl; 
     //    }

     //    string s="maserati";
     //    sort(s.begin(),s.end());
     //    cout<<s;
     // }

     //-----------    INLINE FXNS 

     // inline  void number(int num){
     //      cout<<num<<endl;
     //      cout<<num*2<<endl;
     //      cout<<num*3<<endl;
     // }

     // int main(){
     //      number(12);
     //      number(36);
     //      number(78);
     //      number(56);

     // }


     //--------------------- FRIEND KEYWORD
     // friend uske friend ke private ko access kr skta hai 

class A{
     private:
     int x;

     public:
     A(int _val):x(_val){};

     int getX(){return x;}
     void setX(int _val){x= _val;}

     friend class B;
};
class B{
     public: 
     void print (const A &a){
          cout<<a.x<<endl;
     }
};

int main(){

  A a(5);
  B b;
  b.print(a);
     return  0;
}