#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main (){
//     char ch[10]="brabus";
//     char *c= ch;                  

//     cout<<ch<<endl;              // here it works different than int by printing the whole string whereas in int it prints the add. of base elemnt
//     cout<<&ch<<endl;                  //prints address of base element i.e. of 0th index
//     cout<<ch[0]<<endl;           
 
//     cout<<c<<endl;                       // prints the full string 
//     cout<<&c<<endl;                           //address of c 
//     cout<<*c<<endl;                        // value at 0th index
//     return 0;
// }

// -------------       lec 87 ------------------


// void util(int *p){                                        // yeh pass by value hota hai matlab yahhan ek alg copy bni hai p key
//     *p=*p+1;                 //it change the original a to 6
    
// }

// int main(){
//     int a=5;
//     int *p=&a;

//     cout<<"before"<<endl;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;

// util(p);

//     cout<<"after"<<endl;
//     cout<<a<<endl;                  // output is 5 becoz address ke ander hei khela hua fxn mai
//     cout<<p<<endl;
//     cout<<*p<<endl;

// }


//----------------------------------        reference variable (same memory location but different names)

// int main(){
//     int a =5;
//     int &b= a;

//     cout<<a<<" "<<b;                // give both ans =5;
// }


//------------------------------     pass by reference in pointer by below changing in original p 

void solve(int * &p){
    p=p+1;
}


int main(){
    int a=5;
     int *p=&a;
     cout<<"before "<<p<<endl;
    solve(p);
    cout<<"after "<<p<<endl;
    
}