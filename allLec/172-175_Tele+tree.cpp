#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;



class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

//it returns root node of the created tree

Node* createTree(){

    cout<<"enter the value: "<<endl;
        int data;
        cin>>data;

        if(data==-1){
            return NULL;
        }
        
        //Step1: create Node
        Node* root= new Node(data);

        //Step2: create left subtree
        cout<<"left of Node: "<< root->data <<endl;
        root->left= createTree();

        //Step3: create right subtree
        cout<<"right of Node: "<< root->data <<endl;
        root->right= createTree();
        return root;

}


// preorder traversal code

void preorderTraversal(Node* root){
    //base case 
    if(root==NULL){
        return;
    }
    //N L R
    //N
    cout<<root->data<<" ";
    //L
    preorderTraversal(root->left);
    //R
    preorderTraversal(root->right);

}

//inorder traversal

void  inorderTraversal(Node*  root ){
    //LNR
    //base case
    if(root==NULL){
        return;
    }
    //L
    inorderTraversal(root->left);
    //N
    cout<<root->data<<" ";
    //R
   inorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    //LRN
    //base case
    if(root==NULL){
        return;
    }

    //L
    postorderTraversal(root->left);
    //R
    postorderTraversal(root->right);
    //N
    cout<<root->data<<" ";
}



// level order traversal 

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    //asli traversal start krte hai

    while(!q.empty()){
        Node*front= q.front();
        q.pop();

        cout<<front->data<<" ";

        if(front->left != NULL){
            q.push(front->left);
        }

        if(front->right !=NULL){
            q.push(front->right);
        }
    }
}

int main(){
    Node*root= createTree();
      // cout<<root->data<<endl;

      cout<<"printing preorder : ";
      preorderTraversal(root);
      cout<<endl;

      cout<<"printing inorder : ";
     inorderTraversal(root);
      cout<<endl;

      cout<<"printing postorder : ";
      postorderTraversal(root);
      cout<<endl;

      cout<<"printing postorder : ";
      levelOrderTraversal(root);
      cout<<endl;
      
}

