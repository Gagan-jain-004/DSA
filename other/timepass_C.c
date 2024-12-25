#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Node {
    int data;
    int next;
};

struct Node arr[MAX_SIZE];
int freeList, head;

void initialize() {
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        arr[i].next = i + 1;
    }
    arr[MAX_SIZE - 1].next = -1;
    freeList = 0;
}

int allocateNode() {
    if (freeList == -1) {
        printf("Memory Full\n");
        return -1;
    }
    int node = freeList;
    freeList = arr[freeList].next;
    return node;
}

void deallocateNode(int node) {
    arr[node].next = freeList;
    freeList = node;
}

void insertAtBeginning(int data) {
    int node = allocateNode();
    if (node == -1) {
        return;
    }
    arr[node].data = data;
    arr[node].next = head;
    head = node;
}

void insertAtEnd(int data) {
    int node = allocateNode();
    if (node == -1) {
        return;
    }
    arr[node].data = data;
    arr[node].next = -1;
    if (head == -1) {
        head = node;
    } else {
        int temp = head;
        while (arr[temp].next != -1) {
            temp = arr[temp].next;
        }
        arr[temp].next = node;
    }
}

void deleteNode(int key) {
    int prev = -1, curr = head;
    while (curr != -1 && arr[curr].data != key) {
        prev = curr;
        curr = arr[curr].next;
    }
    if (curr == -1) {
        printf("Key not found\n");
        return;
    }
    if (prev == -1) {
        head = arr[curr].next;
    } else {
        arr[prev].next = arr[curr].next;
    }
    deallocateNode(curr);
}

void search(int key) {
    int curr = head;
    while (curr != -1) {
        if (arr[curr].data == key) {
            printf("Key found at node %d\n", curr);
            return;
        }
        curr = arr[curr].next;
    }
    printf("Key not found\n");
}

void printList() {
    int curr = head;
    while (curr != -1) {
        printf("%d ", arr[curr].data);
        curr = arr[curr].next;
    }
    printf("\n");
}

int main() {
    initialize();
    insertAtEnd(10);
    insertAtBeginning(20);
    insertAtEnd(30);
    printList();
    deleteNode(20);
    printList();
    search(30);
    return 0;
}



// stack using array 


// #define n 100
// int stack[n];
// int top=-1;

// void push(int data){
//     if(top>n-1){
//         printf("stack overfflow \n");
//         return;
//     }
//     else{
//         top++;
//     }
//     stack[top]=data;
// }

// int pop(){
//     int data;
//     if(top==-1){
//         printf("stack empty \n ");
//         return -1;
//     }
  
//     else{
//            data= stack[top];
//         top--;
//     }
//     return data;
// }

// int main(){
//     push(10);
//     push(20);
//     push(30);

//    printf("delet : %d", pop());
// }


//queue implementation using array 

// #define n 100
// int queue[n];
// int front=-1,rear=-1;

// void enqueue (int data){
//     if(rear == n-1){
//         printf("queue is full \n");
//     }
//     else  if(front==-1){
//         front=rear=0;
//     }
//     else{rear++;
//     }
//     queue[rear]=data;
// }

// int  dequeue(){
//     if(front==-1){
//         printf("queue is empty ");
//         return -1;
//     }
//     int data=queue[front];
//     if(front==rear){
//         front=rear=-1;
            
//     }
//     else{front++;
//     }
//     return data;    
    
// }

// int main(){
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     printf("dl1 : %d",dequeue());
// }





// string copy 

// int main(){
//     char s1[100],s2[100];

//     printf("Enter the string: ");
//     fgets(s1,100,stdin);

//     s1[strcspn(s1,"\n")]='\0';
//     strcpy(s2,s1);
//     printf("copy wali : %s",s2);
// }

