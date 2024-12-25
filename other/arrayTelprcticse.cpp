#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


// 1]       ---------------    shifting all negatives at first and positives at after   ----------------------

// void shiftNeg(int arr[],int n){
    
// int start=0;


// for(int i=0; i<n; i++){
    
//     if(arr[i]<0){
//         swap(arr[i],arr[start]);
//         start++;
//     }
    
// }         
// }


// int main(){

// int arr[7]= {23,-7,12,-10,-11,40,60};

// shiftNeg(arr,7);

// for(int i=0; i<7; i++){
//     cout<<arr[i]<<" ";
// }

//     return 0;


// }




// ------------------------------------  sort three colors              leetcode -                       -------------------

int main(){
    int arr[]={1,0,2,0,1,2,0,2};
    
    int j=0;
    int start = 0;
    for(int i=0;i<8;i++){
        if (arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
        }
        j=start;
    }
    for(int i=j;i<8;i++){
        if (arr[i]==1){
            swap(arr[i],arr[start]);
            start++;
        }
    }
    
    
for(int i=0; i<7; i++){
    cout<<arr[i]<<" ";
}

    
    return 0;
}