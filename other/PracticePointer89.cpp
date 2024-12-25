#include <iostream>
#include<bits/stdc++.h>

using namespace std;

// int main(){

//     //nothing will get printed on  output 

//      int *ptr =0;
//      int a=29;


//      *ptr= a;
//      cout<<*ptr<<" "<< a;


// }

// int main(){
//     int a =4;
//     int *c= &a;
//     cout<<c<<endl;
//     c=c+1;
//     cout<<a<<" "<<*c<<" "<<c<<endl;  //*c will not give 4 as output becoz address is shifted to one ahead that's why 
// }

// int main(){
//     char a[]="abcd";
//     cout<<*(a) +0;
// }

// clearer --------------------------

// void Q(int z){
//     z+=z;
//     cout<<z<<" ";          //14
// }
// void P(int *y){
//     int x=*y +2;
//     Q(x);
//     *y =x- 1;
//     cout<<x<<" ";        //7

// }

// int main(){
//     int x=5;
//     P(&x);
//     cout<<x;          //6
//     return 0;
// }


// ---------------------       must one

int main(){
    int a =10;
    int *p=&a;
    int **q=&p;

    int b=20;
    *q= &b;
    (*p)++;
    cout<<a<<" "<<b<<endl;      //10 21
}