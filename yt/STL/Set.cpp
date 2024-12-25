#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


// Set  -  it stores everything in sorted order 
//        and contains only unique ones only 

void explainSet(){

    set<int> st;
    st.insert(1); 
    st.insert(2);// {1,2} 
    st.insert(3); //1,2,3
    st.insert(2); //  //1,2,3
    st.insert(4); // 1,2,3,4

//---------
    //{1,2,3,4,5}
    auto it= st.find(3);  // as it finds 3 if exist 

    //{1,2,3,4,5}
    auto  it = st.find(6);   // find if exist else point at end means afterwards (as we know end points at empty location)

    st.erase(5);   // erases 5  (takes log(n) time )

    int cnt = st.count(1);

    auto it= st.find(3);
    st.erase(it);   

    //{1,2,3,4,5}
    auto it1= st.find(2);
    auto it2= st.find(4);
    st.erase(it1,it2);  //after erase {1,4,5}   as [first,last)

    auto it= st.lower_bound(2);

    auto it= st.upper_bound(3);

}



//--------------- MULTI SET

void explainMultiSet(){
    // everything is same as set
    // but it stores duplicates elements also 

    multiset<int>ms;
    ms.insert(1);  //1
    ms.insert(1);  //1,1
    ms.insert(1);  //1,1,1

    ms.erase(1);  //all 1's erased

    int cnt = ms.count(1);

    //only a single one erased 
    ms.erase(ms.find(1));


}





// ---------------Unordered set

void explainUSet(){
    unordered_set<int> st;

    // everything is same but it dont stores data in sorted order just in random order 

}