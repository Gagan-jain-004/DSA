#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


//basic 

/*
int main(){
    //creation
    queue<int>q;

//insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    cout<<"siz of queue is : "<<q.size()<<endl;

    //removal
    q.pop();

    cout<<"size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Q is empty "<<endl;

    }
    else{
        cout<<"Q is not empty "<<endl;
    }
//front getter
    cout<<"Front element is "<<q.front()<<endl;
}

*/

//------------------------------   queue implementation without stl taking  front and rear =0

// comment the library stdc++.h for it 
/*
class Queue{
    public:
    int *arr;
    int size ;
    int front ;
    int rear ;

    Queue(int size ){
        this->size= size;
        arr=new int[size];
        front=0;
        rear=0;

    }
    void push(int data){
        if(rear== size){
            cout<<"Q is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void pop(){
        if(front==rear){
            cout<<"empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }

    int getFront(){
        if(front==rear){
            cout<<"q is empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    int  getSize(){
        return rear-front;
    }
};

int main(){
    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    cout<<"Size of queue is : "<<q.getSize()<<endl;
    q.pop();
    cout<<"Size of queue is : "<<q.getSize()<<endl;

    cout<<"Front element is : "<<q.getFront()<<endl;

    if(q.isEmpty()){
        cout<<"q is empty "<<endl;
    }
    else{
        cout<<"q is not empty"<<endl;
    }


    return 0;
}

*/



//-------------------------------Circular queue implementation

// comment the library stdc++.h for it 

/*

class CirQueue{
    public:
    int data;
    int *arr;
    int size ;
    int front;
    int rear;

     CirQueue(int  size){
        this->size= size;
        arr = new int [size];
        front=-1;
        rear=-1;
    }
    void push(int data ){

            // check if queue is full
            
            if(front==0 && rear== size-1){
                cout<<"Queue is full"<<endl;
                }


            // single element case -> first element 
            
            else if(front ==-1){
                front=rear=0;
                arr[rear]=data;
                }
        
            //circular nature
        else if(rear==size-1&&front!=0){
            rear=0;
            arr[rear]=data;

            }  

            //normal flow 

        else  {
            rear++;
            arr[rear]=data;
        }
      }

      void pop(){
        //empty check
 if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        //single element  -> means at first element 

        else if(front == rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }

        //circular nature 
        else if(front == size-1){
            front=0;
        }
        //normal flow 
        else{
            front++;
        }
       
      }
        
};

*/


//--------------------------- Doubly ended queue implementation  without stl
// here deque is not pop . becoz pop is dequeue 


/*
class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void pushRear(int data ){
            
            // check if queue is full
            
            if(front==0 && rear== size-1){
                cout<<"Queue is full"<<endl;
                return;
                }


            // single element case -> first element 
            
            else if(front ==-1){
                front=rear=0;
                arr[rear]=data;
                }
        
            //circular nature
        else if(rear==size-1&&front!=0){
            rear=0;
            arr[rear]=data;

            }  

            //normal flow 

        else  {
            rear++;
            arr[rear]=data;
        }

    }


    void pushFront(int data){

            // check if queue is full
            
            if(front==0 && rear== size-1){
                cout<<"Queue is full"<<endl;
                return;
                }


            // single element case -> first element 
            
            else if(front ==-1){
                front=rear=0;
                }
        
            //circular nature agr front 0 par hai to last mai chale jao if end is empty 
        else if(front==0 && rear !=size-1){
            front=size-1;

            }  

            //normal flow 

        else  {
           front--;
        }
            arr[front]=data;

    }


    void popFront(){
                //empty check
 if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        //single element  -> means at first element 

        else if(front == rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }

        //circular nature 
        else if(front == size-1){
            front=0;
        }
        //normal flow 
        else{
            front++;
        }
       
      }
    
    void popRear(){
        
                //empty check
 if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        //single element  -> means at first element 

        else if(front == rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }

        //circular nature 
        else if(rear==0){
            rear = size-1;
        }
        //normal flow 
        else{
            rear--;
        }
       
  
    }

    
        void print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
        Deque dq(10);
        dq.print();
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.pushRear(10);
        dq.print();

        dq.popRear();
        dq.print();

}

*/


//------------------------------------deque with stl 
// include the below library
/*
# include<deque>

int main(){
    deque<int>dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);

    cout<<"size : "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"size : "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"size : "<<dq.size()<<endl;

      cout<<"front: "<<dq.front()<<endl;
    cout<<"back: "<<dq.back()<<endl;

    if(dq.empty()){
        cout<<"deque is empty"<<endl;
    }
    else{
        cout<<"deque is not empty"<<endl;
            }
}
*/



//---------------------------- lec 166 ----------------------

//----------------------   Reverse the queue 
//using stack

/*
void reverse (queue<int> &q ){

 
  stack<int>s;

  while(!q.empty()){
    int temp= q.front();
    q.pop();
    s.push(temp);
  }       

  while(!s.empty()){
int element = s.top();
    s.pop();
    q.push(element);
  }
}

int main(){
    queue<int>q;
    
    q.push(3);
    q.push(6);
    q.push(2);
    q.push(9);
    q.push(8);

    reverse(q);

   cout<<"printing Queue"<<endl;

   while(!q.empty()){
   cout<<q.front()<<" ";
   q.pop();
   }
   cout<<endl;
}
*/

//using recursion

/*

void reverse (queue<int> &q ){
  
   if(q.empty()){
    return;
   }

 int temp= q.front();
 q.pop();
   reverse(q);
   q.push(temp);


}


int main(){
    queue<int>q;
    
    q.push(3);
    q.push(6);
    q.push(2);
    q.push(9);
    q.push(8);

    reverse(q);

  while(!q.empty()){
               cout<<q.front();
               q.pop();
   }
   
}



*/


//-----------------Question of reverse the k elements in queue

/*
void reverseK(queue<int>&q,int k){
    //step A: queue -> k elements to in stack
    stack<int>s;
    int count=0;
    int n=q.size();

    if(k==0 || k>n){
        return;
    }

    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count==k)
        break;
    }

    //step B: stack  sai -> q mai wapas
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }

    //step C: push n-k element from  q front to back
        count=0;
        while(!q.empty()& n-k!=0){
            int temp= q.front();
            q.pop();
            q.push(temp);
            count++;

            if(count== n-k)
            break;
        }
}


int main(){
    queue<int>q;
    
    q.push(3);
    q.push(6);
    q.push(2);
    q.push(9);
    q.push(8);

    reverseK(q,3);

  while(!q.empty()){
               cout<<q.front()<<" ";
               q.pop();
   }
   cout<<endl;
   
}


*/


//------------------------   Interleave first  and second half of queue

/*
void interleaveQueue(queue<int>&q){
    //Step A: Separate both halfs

    int n=q.size();
    
    if(q.empty())
          return;

    int k = n/2;

    int count=0;
    queue<int>q2;

    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k)
        break;

    }

    //step B:  interleaving start krdo

    while(!q.empty()&& !q2.empty()){
        int first= q2.front();
        q2.pop();

        q.push(first);

        int second= q.front();

        q.pop();

        q.push(second);
    }
  
    //odd wala case 
    if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    }

}
int main(){
    queue<int>q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    
interleaveQueue(q);
  while(!q.empty()){
               cout<<q.front()<<" ";
               q.pop();
   }
   cout<<endl;
   
}

*/


//------------------- reporting first -ve integer in every window of size K 
//--------------  Sliding Window

/*
#include <deque>

void solve(int arr[],int n, int k){
    deque<int>q;

    //process first window of size k

    for(int i=0;i<k; i++){
        if(arr[i]<0){
            q.push_back(i);
        }
    }

    //remaining window  ko process kro 

    for(int i=k;i<n;i++){
        //answer dedo purani window ka 
        if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }

        //out of window elements ko remove krdo
        while((!q.empty())&& (i-q.front()>=k)){
            q.pop_front();
        }

        //check current element for insertion
        if(arr[i]<0){
            q.push_back(i);
        }
    }
    //answer print karo for last  window
      if(q.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
}

int main(){
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int size=8;

    int k=3;

    solve(arr,size , k);

    return 0;
}
*/

//--------------------------------  lec 167
//----------finding first non repeating character

/*
int main(){

    string str="aabc";
    int freq[26]={0};

    queue<char>q;

    string ans="";

    for(int i=0;i<str.length();i++){
        char ch=str[i];

        //increment frequency
        freq[ch - 'a']++;

        //q.push
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }
    cout<<"final Ans: "<<ans<<endl;
}

*/


//------------------------------Leetcode 134 Gas station (important one )

/*
int canCompleteCircuit(vector<int> &gas,vector<int>&cost){
    //kitna perol  kam padgya
    int deficit=0;

    //kitna petrol bacha hua hai
    int balance=0;

    //ciruit kaha sai start kr rhe ho 
    int start =0;

    for(int i=0;i<gas.size();i++){
        balance+= gas[i]-cost[i];
        if(balance<0){
            deficit+= balance;
            start=i+1;
            balance=0;
        }
    }

    if(deficit+balance>=0){
        return start;

    }

    else{
        return -1;
    }
}

*/

//------------------------- Sliding Window Maximum (Leetcode - 239)

/*
vector<int> maxSlidingWindow(vector<int>& nums, int k){
    deque<int>dq;
    vector<int>ans;

    //first window of k size 
    for(int i=0; i<k; i++){
        //chote element remove krdo 
        while(!dq.empty()&& nums[i]>= nums[dq.back()]){
            dq.pop_back();
        }
        //inserting index , so that we can checkout of window element
        dq.push_back(i);
    }

    //store answer for first window 
    ans.push_back(nums[dq.front()]);

    //remaining windows ko  process 
    for(int i=k; i<nums.size();i++){
        //out of window element ko  remove krdia 
        if(!dq.empty() && i-dq.front()>=k){
            dq.pop_front();
        }

        //ab firse current element k liye chhotte element ko  remove krna ha
           while(!dq.empty()&& nums[i]>= nums[dq.back()]){
            dq.pop_back();
        }
        //inserting index , so that we can checkout of window element
        dq.push_back(i); 

        //current window ka answer store krna ha 
        ans.push_back(nums[dq.front()]);
    }

    return ans;

}


*/