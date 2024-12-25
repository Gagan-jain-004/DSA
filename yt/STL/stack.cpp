#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


void explainStack(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.top()<<endl; // prints 3
    st.pop();

    cout<<st.size();

    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);
}