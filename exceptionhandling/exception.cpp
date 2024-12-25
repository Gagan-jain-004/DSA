#include<iostream>
using namespace std;

int main(){
    int n,d,result;
    cin>>n>>d;
    try{
        if(d==0)
        throw d;      // throw pe call hote hei tryy ke bahar nikal jao 
        result= n/d;
    cout<<"division is  : "<<result;

    }
    catch(int x){
        cout<<"Exception: can't divide by zero";
    }
    return 0;

}