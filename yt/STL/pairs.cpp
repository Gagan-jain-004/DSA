#include <iostream>
#include <bits/stdc++.h> //library for everything


using namespace std;

// pairs 
void explainPair(){
    pair<int,int> p= {1,3};

    cout<<p.first<<" "<<endl;

// to store 3 in pair go nested 
    pair<int,pair<int,int>> p2 ={1,{2,3}};

    cout<<p.first<<" "<< p2.second.second<<" "<< p2.second.first;

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};

    cout<<arr[1].second;

}

int main(){
    explainPair();
}




