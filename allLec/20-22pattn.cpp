#include<iostream>
#include <cmath>
#include <bits/stdc++.h> //library for everything

using  namespace std;
// int main(){
//     int n =3;
//     if(cout<<n){
//         cout<<"hell";
//     }
  
//     return 0;

// }

// patterns


// int main (){
//     int n;
//     cin>>n;
//hollow rectangle
    // for (int i=0; i<n;i++){

    //                 if(i==0|| i==n-1){
    //                     for(int j=0;j<n;j++){
    //                         cout<<"*";
    //                     }
    //                     cout<<endl;
    //                 }
    //                 else{
    //                     cout<<"*";
    //                     for(int j=1;j<n-1;j++){
    //                         cout<<" ";
    //                     }
    //                     cout<<"*"<<endl;
    //                 }
    //       }

    //optimal is below 
    // for (int i=0; i<n;i++){

    //     for(int j=0; j<n; j++){
    //         if(i==0||i==n-1||j==0||j==n-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

   //half hollow pyramid
    // for (int i=0; i<n;i++){

    //     for(int j=0; j<n; j++){
    //         if(i==0||j==n-i-1||j==0){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

 // --------------- full pyramid with spaces outwards lec 20 sai ---------------------

 //my way
//   for (int i=0; i<n;i++){
//                int  k=0;

//         for(int j=0; j<(2*n-1); j++){

//          if(j<n-i-1){
//             cout<<" ";
//          }
//          else if(k<i+1){
//             cout<<"* ";
//             k++;
//          }
//          else{
//             cout<<" ";
//          }

//         }
//         cout<<endl;
//     }

    //by master ka tarika 
   
   //  for(int i=0;i<n;i++){
   
   // for(int j=0; j<n-i-1;j++){
   //    cout<<" ";
   // }
   // for(int str=0;str<i+1;str++){
   //    cout<<"* ";
   // }
   // cout<<endl;

   //  }

   //---------------------------inverted full pyramid --------------------

   // for(int i=0;i<n;i++){
   //    for(int j=0;j<i;j++){
   //       cout<<" ";
   //    }
   //    for(int j=0;j<n-i;j++){
   //       cout<<"* ";
   //    }
   //    cout<<endl;
   // }


   //-------------------hollow diamond---------
  //   for(int i=0;i<n;i++){
    
  //     for(int j=0;j<n-i-1;j++){
  //       cout<<" ";
  //     }
  //     for(int j=0;j<2*i+1;j++){
  //             if(j==0){
  //              cout<<"*";
  //             }
  //             else if(j==2*i){
  //              cout<<"*";
  //             }
  //             else{
  //              cout<<" ";
  //             }
  //     }
  //     cout<<endl;
  //  }

  //  for(int i=0;i<n;i++){
  //   for(int j=0;j<i;j++){
  //     cout<<" ";
  //   }
  //   for(int j=0;j<2*n-2*i-1;j++){
  //     // if first or last character
  //     if(j==0||j== 2*n-2*i-2){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  //  }


//------------------- flipped solid diamond----------------

// for(int i=0; i<n;i++){
//   for(int j=0;j<n-i;j++){
//     cout<<"*";
//   }

//   for(int j=0; j<2*i;j++){
//     cout<<" ";
//   }

//   for(int j=0;j<n-i;j++){
//     cout<<"*";
//   }
//  cout<<endl;
// }

// for(int i=0; i<n;i++){
//   for(int j=0;j<i+1;j++){
//     cout<<"*";
//   }

//   for(int j=0; j<2*n-2*i-2;j++){
//     cout<<" ";
//   }

//   for(int j=0;j<i+1;j++){
//     cout<<"*";
//   }
//  cout<<endl;
// }

// ----------- fancy pattern ---------

// for(int i=0; i<n;i++){
//   for(int j=0;j<2*i+1;j++){
//     if(j%2==0){
//       cout<<i+1;
//     }
//     else{
//       cout<<"*";
//     }
//   }cout<<endl;
// }

// for(int i=0; i<n;i++){
//   for(int j=0;j<2*n-2*i-1;j++){
//     if(j%2==0){
//       cout<<n-i;
//     }
//     else{
//       cout<<"*";
//     }
//   }cout<<endl;
// }

//-------------------alphabet palindrome pyramid--------------

// for(int i=0; i<n; i++){
//   for(int j=0;j<i+1;j++){
//     char x='A'+j;
//     cout<<x;
//   }
//   for(int j=i;j>0;j--){
//     char x= 'A'+j-1;
//     cout<<x;
//   }
//   cout<<endl;
// }

//--------------Numeric full pyramid (lecture --  21  )

// for(int i=0; i<n; i++){
//   for(int j=0;j<n-i-1;j++){
//     cout<<" ";
//   }
//   for(int j=0;j<i+1;j++){
//       cout<<i+j+1;
//   }
//   for(int j=i; j>0;j--){
//     cout<<i+j;
//   }
//   cout<<endl;
// }


//--------------Numeric hollow pyramid---------
// for(int i=0; i<n; i++){
//   for(int j=0;j<n-i-1;j++){
//     cout<<" ";
//   }

//   int x=1;
//   for(int j=0;j<2*i+1;j++){
    
   
//   if(i==0||i==n-1) {
//       if(j%2==0){
//         cout<<x++;
//       }
//       else{
//         cout<<" ";
//       }
//      } 
//      else if(j==0){
//       cout<<j+1;
//      }
//      else if(j==2*i){
//       cout<<i+1;
//      }
//     else{
//       cout<<" ";
//     }
    
     
     
//   }
  
//   cout<<endl;
// }

// int a=4;
// int c=(++a)*(++a);
// cout<<c;

//     return 0;
// }




//---------------------------------          functions  -------------------

//             -------------------------------                decimal to binary 
//by division method

int decimaltobinary(int n){
    int ans= 0;
    int i=0;
    while(n>0){
        int a = n%2;
          ans = a*pow(10,i++)+ans;
        n=n/2;
  
    }
    return ans;
}


int main(){
    int n ;
    cin>>n;

 

   cout<< decimaltobinary(n);

   return 0;
}