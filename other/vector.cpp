#include <iostream>

#include <bits/stdc++.h> //library for everything

using namespace std;

void print(vector<int>x){
    int size= x.size();
    for(int i=0; i<size; i++){
        // cout<<x[i]<<endl; same work done by below by using at 
        cout<<x.at(i)<<endl;
    }
}


void print2(vector<int> z){
    for(auto it:z){
        cout<<it<<" ";
    }
}

int main(){
    // vector <int> v;
    // //initialization of vector 
    // vector <int> arr ={1,2,3,1,3};
    // //copying the vector
    // vector <int> arr1(arr);

    //    vector <char> v;
    //     v.push_back('a');

    // cout<<"front element "<<v[0];
    // cout<<"front element "<<v.front();
    // cout<<"end element "<<v[v.size()-1];
    // cout<<"end element "<<v.back();


//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(3);
// print(v);

// v.pop_back();
// print(v);

// vector <int> v{1,2,3,4,5};
// print2(v);

// for(int i=0; i<5;i++){
//     int d;
//     cin>>d;
//    v.push_back(d);
// }

//to clear the vector completely

// v.clear();
// print(v);


//-------------------------------------------           2d vector ----------------------

            
//    vector<vector<int>>arr;

//    vector<int>a{1,2,3};
//    vector<int>b{2,4,6};
//    vector<int>c{1,3,7};

//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);

//    for(int i=0; i<arr.size();i++){
//       for (int j = 0; j < arr[i].size(); j++)            // if no. of col in every row is different than use arr[i].size() else use arr[0].size()
//       {
//              cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
      
//    }

// cout<<endl;

// vector<vector<int>>v(5,vector<int>(5,101));

//  for(int i=0; i<v.size();i++){
//       for (int j = 0; j < v[i].size(); j++)           
//        {
//              cout<<v[i][j]<<" ";
//        }
//        cout<<endl;
      
//    }




return 0;
}



