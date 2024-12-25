#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


void explainList(){
                        // insertion is easier in list than vector 
    list<int> ls;

    ls.push_back(2);  //{2}
    ls.emplace_back(4);  // {2,4}

    ls.push_front(5);   //{5,2,4}

    //rest function are same as vector
    //begin, end , clear , insert , size , swap

}




//  deque

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);   //{1}
    dq.emplace_back(2);   //{1,2}
    dq.push_front(3);  //{3,1,2}

    dq.pop_back();  // {3,1}
    dq.pop_front();  // {1}

     //rest function are same as vector
    //begin, end , clear , insert , size , swap

}