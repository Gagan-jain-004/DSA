#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin; //   ifstream  use to read the other file data in console
    //now open the file u want to read 
    fin.open("zoom.txt");

    // ab read karo 

    char c ;
    c= fin.get();    // get use here to consider the space also while printing in console 
    while(!fin.eof()){         // eof = end of file 
        cout<<c;
        c=fin.get();
    }
    fin.close();
}