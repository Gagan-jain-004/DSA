#include<iostream>

using namespace std;

// bool prime(int n){
//     if(n<=1){
//         return false;
//     }
//     else{
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//     return true;
//     }

// }

// int main(){
//     int a=25;
   
//     if(prime(a)){
//         cout<<"it is prime man ";
//     }
//     else{
//         cout<<"not it is not prime no.";
//     }
//     return 0;
// }

// gcd -----                  ----------------------        gcd(a,b)=gcd(a-b,b)

// int gcd(int a,int b ){
//     if(a==0) return b ;
//     if(b==0) return a ;

//     while(a>0 && b>0){
//         if(a>b)a=a-b;
//         else {b=b-a;}
//     }
//     return a==0? b:a;
// }
