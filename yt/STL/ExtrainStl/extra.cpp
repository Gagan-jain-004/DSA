#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;

bool comp( pair<int,int>p1,pair<int,int>p2){
}

void explainExtra(){

// to sort an array using stl
    int a[]={1,2,3,4};
     int n= sizeof(a);
    sort(a,a+n);

    for(auto i: a){
        cout<<i<<" ";
    } 

// to  get max element of the array 
 int max = *max_element(a,a+n);    

// sorting a particular point to another pointer in array

    sort(a+2,a+4);        //[start,end)


 // ----------- sorting vector
  
    cout<<endl;
    vector<int>v = {5,56,3,45};
    sort(v.begin(),v.end());

     for(auto i: v){
        cout<<i<<" ";
    } 


// for decreasing order 
        sort(v.begin(),v.end(),greater<int>());

            cout<<endl;
            for(auto i: v){
                cout<<i<<" ";
            } 

// sorting using custom comparator 

    pair<int,int> arr[]={{1,2},{2,1},{4,1}};

// let say sort in below mentioned order we use comp
    // sort it according to second element
    // if second element is same, then sort .. 
    // it according to first element but in descending

    sort(arr,arr+n,comp);

     // {{4,1} ,{2,1},{1,2}};
}

int main(){
  
  //  explainExtra();

//----------- 

  int num = 7;

  int cnt = __builtin_popcount(num);   // this is use to get the total 1 present in binary of that number 
  cout<<cnt<<endl;

  long long n =1562456215215;
  int c= __builtin_popcount(n);
  cout<<c<<endl;

// to print the all  permutation of string first sort it then use below  while

string s= "321";
sort(s.begin(),s.end());

do {
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));


}