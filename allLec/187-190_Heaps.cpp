#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;

/*
//heap insertion and deletion
class Heap{
    public:
    int arr[101];
    int size;

    Heap(){
        size=0;
    }

    void insert(int value){
         // value insert karo end mai
         size = size +1;
         int index =size;
         arr[index]=value;

         // iss value ko place at right {correct position }position
         while(index>1){
            int parentIndex= index/2;
            if(arr[index]>arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index= parentIndex;
            }
            else{
                break;
            }

            }
    }

//Deletion in heap -- In heap deletion only starts from the top 
    int del(){
        int ans=arr[1];
        // replace root node value with last node data
        arr[1]=arr[size];
        size--;

        //place root node ka data on its correct position
        int index=1;
        while(index<size){
            int left = 2*index;
            int right= 2*index+1;

            int largest= index;
            
            if(left<size&& arr[largest]<arr[left]){
              largest=left;
            }
            if(right<size&& arr[largest]<arr[right]){
              largest=right;
            }

            if (largest== index){
                //value is at correct position
                return ans;
        }
            else{
                    swap(arr[index],arr[largest]);
                    index=largest;
            }
        }

    }

};




int main(){
   Heap h;
   h.arr[0]=-1;
   h.arr[1]=100;
   h.arr[2]=50;
   h.arr[3]=60;
   h.arr[4]=40;
   h.arr[5]=45;
   
   h.size=5;

   cout<<"printing the heap "<<endl; 
   for(int i=0; i<=h.size; i++){
            cout<<h.arr[i]<<" ";
   }cout<<endl;

   h.insert(110);

    cout<<"printing the heap "<<endl; 
   for(int i=0; i<=h.size; i++){
            cout<<h.arr[i]<<" ";
   }cout<<endl;
   
    return 0;
}


*/




//------------------heapify

/*

void heapify(int arr[],int n, int i){
    int index=i;
    int leftIndex=2*i;
    int rightIndex=2*i+1;

    int largest= index;
    if(leftIndex<=n && arr[largest]<arr[leftIndex]){
        largest=leftIndex;
    }
    if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        largest=rightIndex;
    }

    if(index != largest){
        // matlab left ya right chidl me se koi greater hogya currentnode sai 
        swap(arr[index],arr[largest]);
        index= largest;
        heapify(arr,n,index);
    }
}

void buildHeap(int arr[], int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}

//heap sort 

void heapSort(int arr[],int n){
   

    while(n!=1){
        swap(arr[1],arr[n--]);
        //heapify
        heapify(arr,n,1);
    }
}

int main(){
    int arr[]={-1,12,15,13,11,14};
    int n=5;
    buildHeap(arr,n);

    cout<<"printing heap "<<endl;

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    cout<<"printing heap "<<endl;

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
*/

//----------------- Priority Queue

/*
//max heap through priority queue stl
int main(){
    priority_queue<int>pq;    // it directly creates a max heap
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<<"top element : "<<pq.top()<<endl;
    pq.pop();

    cout<<"top element : "<<pq.top()<<endl;
    pq.pop();

    cout<<"top element : "<<pq.top()<<endl;
    pq.pop();

    cout<<"top element : "<<pq.top()<<endl;
    pq.pop();

    cout<<"Size: "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"max heap is empty "<<endl;
    }
    else{
        cout<<"max heap is not empty "<<endl;
    }

}
*/



//------------------- min heap through priority queue stl
/*
int main(){
    //min heap
    priority_queue<int,vector<int>,greater<int> >pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<<"top element "<<pq.top()<<endl;
    pq.pop();
    cout<<"size : "<<pq.size()<<endl;
    cout<<"top element "<<pq.top()<<endl;
    
}


*/



//----------------------- getting kth smallest element of array using array

int getKthSmallestElement(int arr[], int n, int k){
    //create max heap
    priority_queue<int>pq;

    //insert initial k elements of array 
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    //for remaining elements, push only if they are less than top 
    for(int i=k; i<n; i++){
        int element = arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans= pq.top();
    return ans;

}

int getKthGreatestElement(int arr[], int n, int k){
    //create min heap
    priority_queue<int,vector<int>,greater<int>>pq;

    //insert initial k elements of array 
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    //for remaining elements, push only if they are greater than top 
    for(int i=k; i<n; i++){
        int element = arr[i];
        if(element> pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans= pq.top();
    return ans;

}

int main(){
    int arr[]={10,5,20,4,15};
    int n=5;
    int k=2;
    int ans= getKthSmallestElement(arr,n,k);

    cout<<"ans is: "<<ans<<endl;

    return 0;
}


//-------------------- To check whether a CBT is max heap or not
/* not working 

pair<bool,int>solve(Node*root){
    //base case
    if(root==NULL){
        pair<bool,int> p= make_pair(true,INT_MIN);
        return p;

    }

    if(root->left==NULL && root->right== NULL){
        //leaf node
        pair<bool,int>p= make_pair(true,root->data);
        return p;
    }

    pair<bool,int>leftAns=solve(root->left);
    pair<bool,int>rightAns=solve(root->right);

    if(leftAns.first== true && rightAns.first==true &&
    root->data > leftAns.second &&
    root->data > rightAns.second){
                pair<bool,int> p= make_pair(true,root->data);
                return p;
    }
    
    else{  
        pair<bool,int> p= make_pair(false,root->data);
         return p;
              
    }

}
*/