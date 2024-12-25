#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;



// priority queue is max heap(greater element at top ) and min heap(lowest element at top) which inside tree is working 

void PQ(){
    priority_queue<int>pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);

    cout<<pq.top(); //prints 10

    pq.pop();  // {8,5,2}

    cout<<pq.top();  // prints 8

    //size swap empty function same as others

  
    //Minimum Heap

    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);  //{5}
    pq.push(2);  
     
     cout<<pq.top();  // prints 2
}

// here push pop has T.C = log(n)  while in stack else have O(1)