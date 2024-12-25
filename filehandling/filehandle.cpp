#include<iostream>
#include<fstream>
#include<bits/stdc++.h> 
using namespace std;

/*
int main(){
    //File ko open krna 
    ofstream fout;        //fout object hai ofstream ka 
    fout.open("zoom.txt"); //agr file present hai to open krega nhi toh create krdega ish hei folder ki directory mai yaa path bhi daal skte 

    // file ke ander likhna 
    fout<<"hello boi";

    fout.close();  //resource  release karna jo file handle kr rhe thai

    return 0;
}

*/


int main(){
    vector <int> arr(5);

    cout<<"Enter the input: ";
    for(int i=0;i<5;i++)
     cin>>arr[i];

        //file ko open karo 
    ofstream fout;
    fout.open("zero.txt");
    fout<<"original data\n";
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";          //fout sai file mai ja rha data
    }
    fout<<"\nSorted data ";
  sort(arr.begin(),arr.end());
   for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout.close();
     
}



// int main(){
//     ofstream fout;
//     fout.open("z1.txt");
//     fout<<"hell man\n ";
//     fout<<"well can\n";
//     fout<<"in vain\n";

//     fout.close();

//     ifstream fin;
//     fin.open("z1.txt");
//     string line ;
    
//     while(getline(fin,line)){                         // line ke ander fin ka material  daalna 
//         cout<<line<<endl;
//     }
//     fin.close();
// }