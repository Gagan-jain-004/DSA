#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data ){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root= new node(data);      // so yahaan constructor call hojayega 

    if(data== -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    
    return root;
    
}

void levelOrderTraversal(node* root){
    queue<node* >q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){             // yahaan pahunch gye matlab purana level complete hogya 
            cout<<endl;

            if(!q.empty()){          // it means queue still has some child 
                q.push(NULL);  
            }
        }

        else{
                cout<<temp->data<<" ";


                if(temp->left){                 // () koi symbol nhi matalb >0 means not null hai tab tk execute hoga 
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }

            }
    }
}




void preorderTraversal(node* root){
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

void  inorderTraversal(node*  root ){
    //LNR
    //base case
    if(root==NULL){
        return;
    }
    //L
    inorderTraversal(root->left);
    //N
    cout << root->data <<" ";
    //R
   inorderTraversal(root->right);
}


void postorderTraversal(node* root){
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


int main2(){
    node* root =NULL;

    //creating a tree
    root= buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //level order
    cout<<"printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

     cout<<"printing preorder : ";
      preorderTraversal(root);
      cout<<endl;

      cout<<"printing inorder : ";
     inorderTraversal(root);
      cout<<endl;

      cout<<"printing postorder : ";
      postorderTraversal(root);
      cout<<endl;


}

// for making tree from level order 

void buildFromLevelOrder(node* &root){
        queue<node*> q;
        cout<<"Enter data for root "<<endl;
        int data;
        cin>>data;
        root=new node(data);
        q.push(root);

        while(!q.empty()){
            node*temp=q.front();
            q.pop();

            cout<<"Enter left node for: "<<temp->data<<endl;
            int leftData;
            cin>>leftData;

            if(leftData != -1){
                temp->left= new node(leftData);
                q.push(temp->left);
            }

            cout<<"Enter right node for: "<<temp->data<<endl;
            int rightData;
            cin>>rightData;

            if(rightData !=-1){
                temp->right= new node(rightData);
                q.push(temp->right);
            }
        }
}

int main(){

    node*root=NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
}