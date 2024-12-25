#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;

// map stores in sorted and unique manner by using key value approach

void explainMap(){
    map<int,int> mpp;

    map<int,pair<int,int>> mpp2;

    map<pair<int,int>,int>mp;

    mpp[1]=2;

    mpp.insert({2,4});

    mp[{2,3}]=10;

    for(auto it: mpp){
        cout<<it.first <<" "<<it.second<<endl;

    }

    cout<<mpp[1];
    cout<<mpp[5];

   

    auto it= mpp.find(5);
}


void explainMultimap(){
    // everything same as map . only it can store multiple keys like {1,6} {1,56} ...

}

void explainUnorderedMap(){
    // stores in random order and having unique values only 
}