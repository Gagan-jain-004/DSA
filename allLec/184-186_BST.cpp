#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node*insertIntoBST(Node*root, int data){

        if(root==NULL){
                     //this is the first node we have to create 
                     root = new Node(data);
                     return root;
        }

        // if not first node 

        if(root->data > data){
                       //insert in left 
                       root->left = insertIntoBST(root->left, data);
        }
        else{
                  //insert into right 
                  root->right= insertIntoBST(root->right,data);
                   
        }
        return  root;

}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root= insertIntoBST(root,data);
        cin>>data;
    }
}

void preOrderTraversal(Node * root){
    //NLR
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node * root){
    //LNR
    if(root==NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node * root){
    //LRN
    if(root==NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}



//searching
// assuming there are only unique values in tree

Node* findNodeInBST(Node* root,int target){
    //base case 
    if(root==NULL){
        return NULL;

    }

    if(root->data==target)
           return root;


    if(target>root->data){
          //right subtree me search kro
          return findNodeInBST(root->right,target);
    }

    else{
        return findNodeInBST(root->left,target);
    }
}

int minVal (Node*root){
    Node* temp= root;
    if(temp== NULL){
        return -1;
    }

    while(temp-> left!=NULL){
        temp=temp->left;
    }
    return temp->data; 
}
int maxVal (Node*root){
    Node* temp= root;
    if(temp== NULL){
        return -1;
    }

    while(temp-> right!=NULL){
        temp=temp->right;
    }
    return temp->data; 
}





void levelOrderTraversal(Node* root){
    queue<Node* >q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
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

//Deletion lelo

Node*deleteFromBST(Node*root,int target){
//basecase
    if(root==NULL)
       return NULL;
     
     if(root->data==target){
        // isi ko delete krna hai 
        //4 cases
        if(root->left==NULL && root->right==NULL){
            //leaf node
            delete root;
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL){
            Node*child=root->right;
            delete root;
            return child;
        }
        else if(root->left!=NULL && root->right==NULL){
            Node*child =root->left;
            delete root;
            return child;
        }
        else{
            //both child
            //find inorder predecessor  in left subtree
            int inorderPre= maxVal(root->left);
            //replace root->data value with inorder predecessor
            root->data= inorderPre;
            //delete inorder predecessor from left subtree
            root->left= deleteFromBST(root->left,inorderPre);
            return root;
        }
     }
     else if(target>root->data){
        //right jana chahiye
        root->right= deleteFromBST(root->right,target);
     }
     else if(target<root->data){
        //left jana chahhiye
        root->left= deleteFromBST(root->left,target);
     }

     }

int main(){
   Node*root=NULL;
   cout<<"Enter the data for Node "<<endl;
   takeInput(root);

//    cout<<"Printing the tree "<<endl;
//    levelOrderTraversal(root);
//    cout<<endl;

   cout<<"Printing the inorder "<<endl;
   inOrderTraversal(root);
   cout<<endl;

   cout<<"Printing the preorder "<<endl;
   preOrderTraversal(root);
   cout<<endl;

   cout<<"Printing the postorder "<<endl;
   postOrderTraversal(root);
   cout<<endl;

   // searching

   bool ans= findNodeInBST(root,155);
   cout<<"present or not : "<<ans<<endl;

// min max value 

   cout<<"minimum value : "<<minVal(root)<<endl;
   cout<<"maximum value : "<<maxVal(root)<<endl;

   deleteFromBST(root,150);

 
    return 0;
}




//--------------- validate bst leetcode  - 98


// one way is ki inorder nikal lo agr wo sorted order mai hai toh bst hai
/*
bool solve(TreeNode* root, long long int lb, long long int ub){
    //base case 
    if(root==NULL)
      return true;

      if(root->val > lb && root->val <ub ){
        bool leftAns= solve(root->left,lb,root->val);
        bool rightAns= solve(root->right, root->val,ub);
        return leftAns && rightAns;
      }
      else{
        return false;
      }
}
bool isValisBST(TreeNode* root){
    long long int lowerBound = -2^32;
    long long int upperBound = 2^32;
    bool ans = solve(root,lowerBound , upperBound);
    return ans;
}
*/



//------------------Lowest common ancestor leetcode-235
/*
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    //base case
    if(root== NULL)
          return NULL;

    //case1

    if(p->val < root-> val && q->val < root-> val){
        return lowestCommonAncestor(root-> left,p,q);
    }      

    //case2
    if(p->val > root->val && q->val > root->val){
        return lowestCommonAncestor(root->right,p,q);
    }

    //case3 and case 4
    return root;

 }
*/


//-----------------------Kth smallest element in bst Leetcode - 230

// one way is inorder array mai store krke index sai value print krwado

// using recursion krlo inorder traversal krte krte k ko --  krlo  jab tk choote element milte rhe  till u k get =0

/*
int kthSmallest(TreeNode* root, int k){

        //base case 
        if(root== NULL){
            //-1 reflects base condition reached
            return -1;
        }

        //Inorder

        //left
        int leftAns= kthSmallest(root->left,k);

        if(leftAns  !=-1){
            return leftAns;
        }
        //N -> root
        k--;
        if(k==0){
            return root->data;
        }

        // right
        int rightAns= kthSmallest(root->right,k);
         return rightAns;
}
*/


// -------------------- leetcode 653  two sum of elements in bst equal to target or not 

/*
void storeInorder(TreeNode* root, vector<int>& inorder){
    if(root== NULL){
        return;
    }

    storeInorder(root->left, inorder);
    inorder.push_back(root->val);
    storeInorder(root->right,inorder);

}

bool findTarget(TreeNode* root, int k){
    vector<int> inorder;
    storeInorder(root,inorder);

    int s=0;
    int e= inorder.size()-1;

    while(s<=e){
        int sum = inorder[s] + inorder[e];

        if(sum==k)
            return true;

        if(sum>k)
            e--;

         else
            s++;
    } 
    return false;
}
*/