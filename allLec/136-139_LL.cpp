#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;



// //  ---- ------- ------------        NOOB VERSION  of creating single linked list

// class Node {
// public:
//     int data;
//     Node *next;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//     }
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };



// // void print(Node * head){
// //     Node*temp=head;
// //     while(temp!=NULL){
// //         cout<<temp->data<<" ";
// //         temp= temp->next;
// //     }
// // }

// // int main(){

// //    Node* first = new Node(10);
// //    Node*  second= new Node(20);
// //    Node*  third= new Node(30);
// //    Node*  fourth= new Node(40);
// //    Node*  fifth= new Node(50);
   
// //    first->next=second;
// //    second->next=third;
// //    third->next=fourth;
// //    fourth->next= fifth;

// //    cout<<"LL : "<<endl;
// //    print(first);
// // }

                // ----------      -----   better version 

/*

class Node {
public:
    int data;
    Node *next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

//Inserting a node right at the head of linked list 
void insertAtHead(Node * &head,Node* &tail,int data){

     //check for empty ll
     if(head== NULL){
                 Node* newNode= new Node(data);
                 head= newNode;
                 tail=newNode;
                 return;
     }
  
    //step:1
    Node*newNode = new Node(data);
    //step:2
    newNode -> next= head;
    //step-3
    head= newNode;
}



//                             Inserting a node right at end of linked list 
void insertAtTail(Node* &head,Node* &tail,int data){

  if(head== NULL){
                 Node* newNode= new Node(data);
                 head= newNode;
                 tail=newNode;
                 return;
     }
                                  // step-1: Create a node 

    Node* newNode= new Node(data);
                       
                        //step-2 : Connect with tail node 

         
                          //LL is non-empty
    tail->next= newNode;
                               
                          //step- 3 : update tail         
    tail = newNode;
}

void print(Node * head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main(){
    Node* head= NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,70);

    print(head);
}

*/





//---   ----------  Singly LL   _______________
               // All clearer

/*
class Node {
public:
    int data;
    Node *next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

  // a destru to delete a node 
  ~Node(){
           cout<<"value deleted is "<<this->data<<endl;
  }
};

//Inserting a node right at the head of linked list 
void insertAtHead(Node * &head,Node* &tail,int data){

     //check for empty ll
     if(head== NULL){
                 Node* newNode= new Node(data);
                 head= newNode;
                 tail=newNode;
                 return;
     }
  
    //step:1
    Node*newNode = new Node(data);
    //step:2
    newNode -> next= head;
    //step-3
    head= newNode;
}



//                             Inserting a node right at end of linked list 
void insertAtTail(Node* &head,Node* &tail,int data){

  if(head== NULL){
                 Node* newNode= new Node(data);
                 head= newNode;
                 tail=newNode;
                 return;
     }
                                  // step-1: Create a node 

    Node* newNode= new Node(data);
                       
                        //step-2 : Connect with tail node 

         
                          //LL is non-empty
    tail->next= newNode;
                               
                          //step- 3 : update tail         
    tail = newNode;
}

void print(Node * head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

//finding length of  LL

int findLength(Node* &head){
    int len=0;
    Node* temp= head;
    while(temp!=NULL){
              temp= temp->next;
              len++;

    }
    return len;
}


void insertAtPosition(int data,int position, Node* &head,Node* &tail){
        if(head==NULL){
            Node*newNode= new Node(data);
            head= newNode;
            tail= newNode;
            return;
        }
        //edge cases
            if(position==0){
                insertAtHead(head,tail,data);
                return;
            }

           int len = findLength(head);

           if(position>= len){
            insertAtTail(head,tail,data);
            return;
           }

            // step1: find the position : prev & curr
         int i=1;
         Node* prev= head;
         while(i<position){
            prev= prev->next;
            i++;
         }
         Node* curr= prev->next;

         //step2:
         Node* newNode= new Node(data);

         //step 3:
         newNode -> next = curr;
         
         //step 4:
        prev->next= newNode;    
}



// deletion lelo

void deleteNode(int position, Node* &head,Node* &tail){
         if(head==NULL){
            cout<<"Cannot delete , LL is empty ";
            return;
         }

//deleting first Node
         if(position==1){
            Node*temp= head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return;
         }
         int len= findLength(head);

//deleting Last node         
         if(position==len){
               //find prev
               int i=1;
               Node* prev=  head;
               while(i<position-1){
                prev=  prev->next;
                i++;
               }
               //step-2
               prev->next =NULL;
               //step-3
               Node* temp=tail;
               //step-4
               tail=prev;
               //step-5
               delete temp;
               return;
         }
 // deleting middle node
 
 //step1:  find prev and curr
        int i=1;
        Node*prev= head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        Node*curr= prev->next;

        //step2:
        prev->next = curr->next;
        //step 3;
        curr->next= NULL;
        //step 4;
        delete curr;
            

}

int main(){
    Node* head= NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,70);

    print(head);
    cout<<endl;
cout<<findLength(head)<<endl;
    insertAtPosition(101,5,head,tail);
    print(head);

deleteNode(2,head,tail);
print(head);
}


*/



//------- -------------     Doubly LL 


/*
class Node{
    public:
    int  data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node(){
        cout<<"node deleted value is : "<<this->data<<endl;
    }
};

void print(Node* &head){
    Node*temp= head;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp= temp->next;
    }

}

int getLength(Node*head){
    int len=0;
    Node*temp= head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}


void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //LL is empty
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
    }
    else{
        //LL is non-empty
  //S-1 create  a node
         Node* newNode= new Node(data);
  //S-2   
         newNode-> next = head;
  //s-3  
         head->prev= newNode;
  //s-4
         head= newNode;                     
    }    


}

void insertAtTail(Node*&head,Node*&tail,int data){

    if(head==NULL){
        // LL is empty
           Node*newNode= new Node(data);
           head=newNode;
           tail=newNode;
    }
    else{
        Node*newNode= new Node(data);
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
}


void insertAtPosition(Node*&head,Node*&tail,int data,int position){
    if(head==NULL){
        Node*newNode= new Node(data);
        head= newNode;
        tail=newNode;
    }
    else{
        //LL is not empty
        if(position==1){
             insertAtHead(head,tail,data);
             return;

        }
        int len= getLength(head);
        if(position>len){
            insertAtTail(head,tail,data);
            return;
        }
        //insertion in middle
        //Step1;
             int i=1;
             Node*prevNode= head;
             while(i<position-1){
                prevNode= prevNode->next;
                i++;
             }
             Node*curr= prevNode->next;

        //Step2: create a node 
        Node* newNode= new Node(data);
        //S-3
        prevNode->next= newNode;
        newNode->prev= prevNode;
        curr->prev=  newNode;     
        newNode->next=curr;
    }
}


void deleteFromPos(Node*&head,Node*&tail,int position){
    if(head==NULL){
        cout<<"Doubly LL is empty";
        return;
    }

    if(head->next== NULL){
        // single node
        Node* temp= head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len = getLength(head);

    if(position >len){
        cout<<"please enter a valid position"<<endl;
            return;
    }
    
    if(position==1){
        //to  delete the first node
              Node* temp= head;
              head= head->next;
              head->prev= NULL;
              temp->next=NULL;
              delete temp;
              return;
    }
    if(position==len){
           //delete last node
           Node* temp=tail;
           tail= tail->prev;
           temp->prev=NULL;
           tail->next= NULL;
           delete temp;
           return;
    }

     // delete from middle of linked list
    // step 1: find left,curr,right
    int i=1;
    Node* left= head;
    while(i<position-1){
        left= left-> next;
        i++;
    }
    Node*curr= left->next;
    Node*right= curr->next;

    //step 2:
    left->next=right;
    //step 3:
    right-> prev= left;

    //step4:
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;


}


int main(){
    Node*first= new Node (10);
    Node*second= new Node (20);
    Node*third= new Node (30);
    Node* head= first;
    Node*tail= third;
    first->next=second;
    second->prev=first;

    second->next= third;
    third->prev=second;

    print(first);
    cout<<endl;

    insertAtHead(head,tail,101);
    print(head);

    cout<<endl;

    insertAtTail(head,tail,501);
    print(head);
    cout<<endl;

    insertAtPosition(head,tail,401,6);
    print(head);

    cout<<endl;
    deleteFromPos(head,tail,5);
    print(head);
}

*/

//----------------

//--------------------------    Reverse a single LL

/*
class Node {
public:
    int data;
    Node *next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

  // a destru to delete a node 
  ~Node(){
           cout<<"value deleted is "<<this->data<<endl;
  }
};

//Inserting a node right at the head of linked list 
void insertAtHead(Node * &head,Node* &tail,int data){

     //check for empty ll
     if(head== NULL){
                 Node* newNode= new Node(data);
                 head= newNode;
                 tail=newNode;
                 return;
     }
  
    //step:1
    Node*newNode = new Node(data);
    //step:2
    newNode -> next= head;
    //step-3
    head= newNode;
}



//                             Inserting a node right at end of linked list 
void insertAtTail(Node* &head,Node* &tail,int data){

  if(head== NULL){
                 Node* newNode= new Node(data);
                 head= newNode;
                 tail=newNode;
                 return;
     }
                                  // step-1: Create a node 

    Node* newNode= new Node(data);
                       
                        //step-2 : Connect with tail node 

         
                          //LL is non-empty
    tail->next= newNode;
                               
                          //step- 3 : update tail         
    tail = newNode;
}

void print(Node * head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

//finding length of  LL

int findLength(Node* &head){
    int len=0;
    Node* temp= head;
    while(temp!=NULL){
              temp= temp->next;
              len++;

    }
    return len;
}


void insertAtPosition(int data,int position, Node* &head,Node* &tail){
        if(head==NULL){
            Node*newNode= new Node(data);
            head= newNode;
            tail= newNode;
            return;
        }
        //edge cases
            if(position==0){
                insertAtHead(head,tail,data);
                return;
            }

           int len = findLength(head);

           if(position>= len){
            insertAtTail(head,tail,data);
            return;
           }

            // step1: find the position : prev & curr
         int i=1;
         Node* prev= head;
         while(i<position){
            prev= prev->next;
            i++;
         }
         Node* curr= prev->next;

         //step2:
         Node* newNode= new Node(data);

         //step 3:
         newNode -> next = curr;
         
         //step 4:
        prev->next= newNode;    
}



// deletion lelo

void deleteNode(int position, Node* &head,Node* &tail){
         if(head==NULL){
            cout<<"Cannot delete , LL is empty ";
            return;
         }

//deleting first Node
         if(position==1){
            Node*temp= head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return;
         }
         int len= findLength(head);

//deleting Last node         
         if(position==len){
               //find prev
               int i=1;
               Node* prev=  head;
               while(i<position-1){
                prev=  prev->next;
                i++;
               }
               //step-2
               prev->next =NULL;
               //step-3
               Node* temp=tail;
               //step-4
               tail=prev;
               //step-5
               delete temp;
               return;
         }
 // deleting middle node
 
 //step1:  find prev and curr
        int i=1;
        Node*prev= head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        Node*curr= prev->next;

        //step2:
        prev->next = curr->next;
        //step 3;
        curr->next= NULL;
        //step 4;
        delete curr;
            

}

// reverse fxn

Node* reverseusingRecursion(Node* &prev,Node*curr){
    //base case 
    if(curr==NULL){
          // matlab ki ll reverse ho chuki
          return prev;
    }

    //1 case solve then  recursion will take care
    Node*temp = curr->next;
    curr->next = prev;
    prev= curr;
    curr=temp;

   return reverseusingRecursion(prev,curr);
}

Node* reverseusingLoop(Node*head){
    Node*prev=NULL;
    Node*curr= head;
    while(curr!=NULL){
        Node*temp= curr->next;
        curr->next=  prev;
        prev= curr;
        curr= temp;
    }
    return prev;

}

int main(){
    Node* head= NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,77);

    print(head);
    cout<<endl;

    // reversal code

    Node*prev=NULL;
    Node*curr= head;
    head=reverseusingRecursion(prev,curr);
  //  head=reverseusingLoop(head);
    cout<<endl;
    print(head);
    cout<<endl;


}

*/


//---------------        lec - 138             -------

// first) finding the middle in likedlist  
 //and also the separate code for the reverse of k nodes pair

/*
class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data= data;
        this-> next= NULL;

    }
};

void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

// middle ke liye
Node*getMiddle(Node* &head){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return head;
    }
    if(head->next== NULL){
        // only 1 node in LL to woh hei middle ho jayega 
        return head;
    }

    //LL have >1 node
    Node*slow= head;
    Node*fast= head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;

}

int getLength(Node* head){
    int len=0;
    Node*temp=head;
    while(temp!= NULL){
        temp= temp->next;
        len++;

    }
    return len;
}

//reverse ka code 

Node* reverseKNodes(Node* &head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = getLength(head);
    if(k>len){
             //cout<<"Enter a valid value for k"<<endl;
             return head;
    }

    //it means number of nodes in LL is >=k
    // Step A: reverse first k nodes of LL

    Node*prev= NULL;
    Node*curr=head;
    Node* forward= curr->next;
    int count =0;

    while(count<k){
        forward=curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
        count++;
    }

    //Step B: recursive  call 
    if(forward!= NULL){
        //we still have nodes left to reverse 
        Node* recursionKaAns=reverseKNodes(forward,k);
        head->next= recursionKaAns;
    }

    //Step C: return head of the modified LL
    return prev;
}

int main(){
    Node*head= new Node(10);
    Node*second= new Node(20);
    Node*third= new Node(30);
    Node*fourth= new Node(40);
    Node*fifth= new Node(50);
    Node*sixth= new Node(60);
    head-> next= second;
    second->next= third;
    third->next=fourth;
    fourth->next= fifth;
    fifth->next=sixth;
    sixth->next=NULL;

     print(head);

    //  cout<<"Middle Node is : "<<getMiddle(head)->data<<endl;
    head=reverseKNodes(head,3);
    print(head);
    return 0;
}
*/


//---------------- detect the loop in LL 

/*
class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data= data;
        this-> next= NULL;

    }
};

void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

// middle ke liye
Node*getMiddle(Node* &head){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return head;
    }
    if(head->next== NULL){
        // only 1 node in LL to woh hei middle ho jayega 
        return head;
    }

    //LL have >1 node
    Node*slow= head;
    Node*fast= head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;

}

int getLength(Node* head){
    int len=0;
    Node*temp=head;
    while(temp!= NULL){
        temp= temp->next;
        len++;

    }
    return len;
}

//reverse ka code 

Node* reverseKNodes(Node* &head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = getLength(head);
    if(k>len){
             //cout<<"Enter a valid value for k"<<endl;
             return head;
    }

    //it means number of nodes in LL is >=k
    // Step A: reverse first k nodes of LL

    Node*prev= NULL;
    Node*curr=head;
    Node* forward= curr->next;
    int count =0;

    while(count<k){
        forward=curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
        count++;
    }

    //Step B: recursive  call 
    if(forward!= NULL){
        //we still have nodes left to reverse 
        Node* recursionKaAns=reverseKNodes(forward,k);
        head->next= recursionKaAns;
    }

    //Step C: return head of the modified LL
    return prev;
}

bool checkForLoop(Node* &head){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return false;
    }
    Node * slow= head;
    Node*fast= head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        if(slow== fast){
            //loop present
            return true;

        }
    }
    // fast NULL hogya if u  reach here 
    return false;
}

int main(){
    Node*head= new Node(10);
    Node*second= new Node(20);
    Node*third= new Node(30);
    Node*fourth= new Node(40);
    Node*fifth= new Node(50);
    Node*sixth= new Node(60);
    Node*seventh= new Node(70);
    Node*eighth= new Node(80);
    Node*ninth= new Node(90);
    head-> next= second;
    second->next= third;
    third->next=fourth;
    fourth->next= fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next= eighth;
    eighth->next= ninth;
    ninth->next=fifth;
    
   cout<<"Loop is present or not "<<checkForLoop(head);
    return 0;
}


*/

//------------------  question   palindrome check in linkedlist (lex- 139 )


/*
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* reverse(Node*head){
    Node*prev= NULL;
    Node* curr= head;
    Node*next= curr->next;
    while(curr!= NULL){
        next= curr->next;
        curr->next= prev;
        prev= curr;
        curr= next;
    }
    return prev;
}
bool checkPalindrome(Node*&head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next==NULL){
        // only 1 node 
        return true;
    }
    
    // now for >1 node in LL 

    //Step  A : find the middle node 
    Node *slow = head;
    Node* fast= head->next;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    // now slow pointer is pointing  to the middle node 

    //Step B: reversen LL after middle node
    Node*reverseLLKaHead= reverse(slow->next);

    //join th reversed LL into the left part
    slow->next= reverseLLKaHead;

    //Step C: start comparisonn 
    Node*temp1= head;
    Node*temp2= reverseLLKaHead;
    while(temp2!= NULL){
        if(temp1->data !=temp2->data){
            //not a palindrome
            return false;
        }
        else{
            //if data is equal , then aage badh jao
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
 return true;
}

int main(){
    Node*head = new Node(10);
    Node*second  = new Node(20);
    Node*third  = new Node(30);
    Node*fourth  = new Node(20);
    Node*fifth  = new Node(10);
    head->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    
    bool isPalindrome= checkPalindrome(head);

    if(isPalindrome){
        cout<<"LL is a valid palindrome"<<endl;
    } 
    else{
        cout<<"LL is not a valid palindrome"<<endl;
    }
    return 0;
}
*/


//----------------  question  remove duplicates from a sorted LL 


/*
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

void removeDuplicates(Node* &head){
         if(head==NULL){
            cout<<"LL is empty "<<endl;
            return;
         }
         if(head->next==NULL){
            cout<<"single node in LL "<<endl;
            return;
         }

         //>1 node in ll to neeche dekho
         Node* curr=  head;
         while(curr!=NULL){
            if((curr->next !=NULL)&&(curr->data== curr->next->data)){
               
               //equal
               Node*temp= curr->next;
                curr->next= curr->next->next;
                //delete node
                temp->next=NULL;
                delete temp;
            }
            else{
                curr=curr->next;
            }
         }
}
int main(){
      Node*head = new Node(1);
    Node*second  = new Node(2);
    Node*third  = new Node(2);
    Node*fourth  = new Node(3);
    Node*fifth  = new Node(4);
    Node*sixth  = new Node(4);
    head->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next=fifth;
    fifth->next=sixth;


    print(head);
    removeDuplicates(head);
    cout<<"output LL "<<endl;;
    print(head);
    return 0;
}

*/


//----------------------- question sort 0s , 1s, 2s 

// i/p= 2110021  o/p = 0011122


/*
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};




void print(Node *head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
void sortZeroOneTwo(Node * &head){
    int zero=0;
    int one =0;
    int two=0;
    Node*temp= head;
    while(temp!=NULL){
        if(temp->data==0)
              zero++;
        else if(temp->data==1)
            one++;
        else if (temp->data==2)
             two++;
        temp=temp->next;               
    }

    //step2: fill 0,1and 2s in the original ll
    temp=head;
    
        //fill zeros
        while(zero--){
            temp->data=0;
            temp=temp->next;
        }
        //fill ones
        while(one--){
            temp->data=1;
            temp=temp->next;
        }
        //fill twos
        while(two--){
            temp->data=2;
            temp=temp->next;
        }
    
}
int main(){

      Node*head = new Node(1);
    Node*second  = new Node(2);
    Node*third  = new Node(2);
    Node*fourth  = new Node(0);
    Node*fifth  = new Node(0);
    Node*sixth  = new Node(0);
    head->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(head);

// sortZeroOneTwo(head);
//     print(head);
 
    return 0;
}
*/



//------------------- addition of two LL
//  eg)L1= 1->2->3      L2 =    4->5->6    output -  l1+l2=  5->7->9

// below one is incomplete 


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};




void print(Node *head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
Node*reverse(Node*head){
    Node*prev=NULL;
    Node*curr= head;
    Node*next= curr->next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node*solve(Node*&head1,Node*&head2){
    //step1:  reverse both linked list 
     head1= reverse(head1);
     head2= reverse(head2);

    //step2:  add both linked list 
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry =0;

    while(head1!= NULL && head2!= NULL){
        int sum= carry+head1->data+ head2->data;
        int digit = sum%10;
        carry = sum/10;
        Node*newNode=new Node(digit);
    }
    //step3:  reverse the ans linked list 
}
int main(){
    Node*head1=  new Node(2);
    Node*second1=  new Node(4);
    head1->next= second1;

    Node*head2= new Node(2);
    Node*second2= new Node(3);
    Node*third2= new Node(4);
    head2->next=second2;
    second2->next=third2;

    Node*ans = solve(head1,head2);

    print(ans);
}