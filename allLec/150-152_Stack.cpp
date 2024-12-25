#include<iostream>
 #include<stack>         //for stack implmentation present in stl 
#include<bits/stdc++.h>
using namespace std;




//------------------- basic 
/*
int main(){
    stack<int> st;      // creation like vector, stack of int type having name st;
     
     //insertion
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);

     //remove
     st.pop();

     //check element on top 
     cout<<"Element on top is "<<st.top()<<endl;
     
     // size 
     cout<<"size of stack is: "<<st.size()<<endl;

    if(st.empty())
    cout<<"stack  is empty "<<endl;
    else
    cout<<"stack is not empty"<<endl;

    
    // printing each element of stack 

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;

}
*/


//------------------------------ Stack implementation using array 
// for this so firstly remove #include <stack> libraray from top

/*
class Stack{
       public:

       int *arr;       //dynamic array 
       int top;
       int size;          // it is size of array 

       Stack(int size ){
        arr= new int[size ];        // array of size = size
        this->size = size ;
        top=-1;                      

       }

       void push (int data ){
        if(size-top>1){
            //space available
            //insert
            top++;
            arr[top]=data;
        }

        else{
            //space not available 
            cout<<"Stack Overflow"<<endl;
        }
       }


       void pop(){
        if(top==-1){
               //stack is empty
               cout<<"Stack underflow , can't delete element "<<endl;
        }
        else{  //stack is not empty
            top--;
        }
       }

       int getTop(){
        if(top==-1){
            cout<<"There is not element in stack"<<endl;

        }
        else{
            return arr[top];
        }
       }

       int getSize(){
            return top+1;

       }

       bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
             return false;
        }
       }


};

int main(){
        Stack s(10);
        //insertion 
        s.push(10);
        s.push(20);
        s.push(30);
    
    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
cout<<endl<<"size of stack "<<s.getSize()<<endl;

return 0;
}

*/


//--------------------- question - 2 ---------------------------
// creating 2 stacks in a single array 

//for self implementation of stack comment the <stack> header file

//approach first stack top=-1 and second stack ka top= size krke

/*   incomplete

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr= new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    //functions
    void push1(int data){
             if(top1-top2){
                //space not available
                cout<<"Overflow"<<endl;
             }
             else{
                //space available
                top1++;
                arr[top1]=data;
             }
    }
    void pop1(){
        if(top1==-1){
              //stack empty
              cout<<"underflow in  stack1"<<endl;
        }
        else{
              //stack not empty
              top1--;
        }
    }

    void push2(int data){
          if(top1-top2==1){
                //space not available
                cout<<"Overflow"<<endl;
             }
             else{
              top2--;
             }
    }
    void pop2(){
          if(top2==size){
            //stack 2 is empty
            cout<<"underflow in stack 2"<<endl;
          }
          else{
            //stack 2 is not empty
            top2++;
          }
    }
};

*/


//------------------- reverse the string using stack---------

/*
int main2(){
    string str ="babbar hell";

    stack <char> s;
    int i=0;
    while(i<str.length()){
        s.push(str[i]);
        i++;
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
*/


//----------------------- printing the middle element of stack -------

/*
void printMiddle(stack<int>&s, int &totalSize){
    if(s.size()==0){
        cout<<"stack is empty "<<endl;
    }
    //base case 
    if(s.size()== totalSize/2 +1){
        cout<<"Middle element is: "<<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();

    //recursive call 
    printMiddle(s,totalSize);

    //backtrack;
    s.push(temp);
}

int main(){
    stack<int>s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int totalSize= s.size();
    printMiddle(s,totalSize);

    return 0;


}

*/


//----lec-151 
//------------------------   Insert at bottom of stack

/*
void solve(stack<int> &s,int target){
      // base
      if(s.empty()){
       s.push(target);

             return;
      }

      int temp= s.top();
      s.pop();
      //recursive call
      solve(s,target);
        // backtrack
      s.push(temp);



}

void insertbottom(stack<int> &s){
    if(s.empty()){
             cout<<"stack is empty can't insert at bottom ";
             return;
    }

    int target= s.top();
    s.pop();
    solve(s,target);
}


int main(){
    stack<int>s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
   
   
     insertbottom(s);
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }

    return 0;


}

*/


//----------------------  Reverse a stack 


//approach 1- usin with storing in new stack
/*
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int temp= s.top();
    stack<int>x;
    x.push(temp);
    s.pop();
    reverse(s);

while(!x.empty()){
        cout<<x.top()<<" ";
        x.pop();
     }

   

}

int main(){
    stack<int>s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
   
   
     reverse(s);
     
    return 0;


}
*/


//approach 2
/*
void insertAtbottom(stack<int>&s,int target){
       
      //base case

}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int temp= s.top();
    s.pop();
    reverse(s);

   insertAtbottom(s,temp);
}

int main(){
    stack<int>s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
   
   
     reverse(s);
     
    return 0;


}
*/


// ----------------------------- Valid parenthesis leetcode 20;

/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.length();i++){
            char ch=s[i];

            //opening  bracket
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                //closing bracket
                if(!st.empty()){
                    char topCh=st.top();
                    if(ch==')' && topCh=='('  ){
                        //matching brackets
                        st.pop();
                    }
                    if(ch=='}' && topCh=='{'  ){
                        //matching brackets
                        st.pop();
                    }if(ch==']' && topCh=='['  ){
                        //matching brackets
                        st.pop();
                    }
                    else{
                        //brackets not matching
                        return false;
                    }
                    
                    
                }
                      else{
                             return false;
                             }
            }
        }

        if(st.empty()){
        //valid
        return true;
    }
    else{
        return false;
    }
    }

    
};

*/


//---------------------------- sorting the stack 

/*
void insertSorted(stack<int>&s,int target){
    //base case 

    if(s.empty()){
        s.push(target);
        return;
    }
if(s.top()>=target){
    s.push(target);
    return;
}
   
   
}

void sortStack(stack<int> &s){
    //base case 
    if(s.empty()){
        return;
    }

    int topElement=s.top();
    s.pop();


   sortStack(s);

    insertSorted(s,topElement);
}

int main(){
    stack<int>s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    sortStack(s);

    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
*/



//----------Lec 152
//--------------------- leetcode qsn - 155
/*
vector<pair<int,int>>st;
MinStack(){


}

void push(int val){
    if(st.empty()){
        pair<int,int> p=make_pair(val,val);  // instead of writting p.first= val and p.second =val we use make_pair( , )
        st.push_back(p);
    }
    else{
        pair<int,int>p;
        p.first=val;
        p.second=min(val,st.back().second);
        st.push_back(p);
    }
}

void pop(){
         st.pop_back();
}

int top(){
    return st.back().first;
}

int getMin(){
    return st.back().second;
}

*/


//---------------------- finding  smaller element after each element is present  in array using stack

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        int curr=v[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
}
cout<<"printing"<<endl;
for(int i=0; i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}


