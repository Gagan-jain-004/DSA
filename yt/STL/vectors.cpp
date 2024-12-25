#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;

void explainVector(){

    vector<int>v;

    v.push_back(1);
    v.emplace_back(2);      // same work as pushback

    
    vector<pair<int,int>>vec;          // pair inside vector

    vec.push_back({1,2});
    vec.emplace_back(3,4);      // same work as pushback

    vector<int>vc(5,100);      // vector of size 5 with all values 100 
    vector<int>vd(5);           // vector of size 5  that will also include values if u insert further more 

    vector<int> vt(vd); // copying vd in vt 

   
   
    // accessing in vector 

    cout<<v[0]<<" or can write as "<<v.at(0);

    cout<<v.back()<<endl;   //prints the last one 

    for(vector<int> :: iterator it = v.begin();it!= v.end(); it++){           //iterator points to the memory location  
        cout<<*(it)<<" ";           //  this is not a better way good one is below 
    }

    for(auto it= v.begin(); it!= v.end();it++){
        cout<<*(it)<<" ";                      //  this is not a better way good one is below 
    }

    
      // best method to print vector 

    for(auto i: v){
        cout<<i<<endl;
    }





//---------------------- Deletion

    // {10,20,12,23}
    v.erase(v.begin()+1);       // it delete the 20 so now v={10,12,23}

    // {10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35}  [start,end) end wala deletion mai nhi aata hai so ek jada rakhna jab required ko delete krna hai  

//---------------------- Insertion

vector<int>v(2,100);  // {100,100}
v.insert(v.begin(),300);  //  {300,100,100};
v.insert(v.begin()+1,2,10);  //  {300,10,10,100,100}

//not so important yeh below 
vector<int>copy(2,50);  // {50,50}
v.insert(v.begin(),copy.begin(),copy.end());  //{50,50,300,10,10,100,100}   // v.begin is starting address for copy wala vector 


// size - no. of elements 

//{20,10}
cout<<v.size();  //2

// Swapping 

//vc->{10,20}  vd-> { 30 ,40}

vc.swap(vd);  //vc->{30,40}  vd- > {10,20} 


v.clear();    // erases the entire vector 

// empty check
cout<<v.empty();// true if yes else no 

}

 
