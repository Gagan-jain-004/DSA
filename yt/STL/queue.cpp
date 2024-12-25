#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;



void explainQueue(){
    queue<int>q;
    q.push(1); //{1}
    q.push(2); //{4}

    q.back()+=5;

    cout<<q.back();   // prints 9

    //Q is {1,4,9}
    
    cout<<q.front();  //prints 1
    q.pop();

    cout<<q.front();

    //size swap empty same as stack 



}