#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


// sorting using comparator -------------

// void print(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// bool mycomp(int &a,int &b){
//     return a>b ;                      // for descending order
//     // return a<b ;                      // for increasing order
// }

// int main(){
// vector<int>v{44,55,22,11,33};
// sort(v.begin(),v.end(),mycomp);
// print(v);
//     return 0;
// }



// sorting in vector of vector        -------------------------------


void printer(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
      vector<int>&temp =v[i];
      int a= temp[0];
      int b= temp[1];
      cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
    }

    bool mycompforindex(vector<int> &a, vector<int> &b){
        return a[1]>b[1];                    // 1 index wale element ko compare krke sort krna 
    }

    int main(){
vector<vector<int>> v;
int n ;
cout<<"Enter the size: "<<endl;
cin>>n;

for(int i=0; i<n;i++){
    int a , b;
    cout<<"enter a and b "<<endl;
    cin>>a>>b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
}

cout<<"Here are the input values"<<endl;

printer(v);
cout<<"Sorted by index=1 of each pair of elements"<<endl;
sort(v.begin(),v.end(),mycompforindex);
printer(v);



return 0;
    }
