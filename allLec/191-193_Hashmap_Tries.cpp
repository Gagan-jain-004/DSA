#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;



//  hashmap using stl 
/*
int main(){
          //creation of map
          unordered_map<string,int> m;

          //insertion methods
          pair<string,int>p= make_pair("Scorpio",9);
          m.insert(p);

          pair<string,int>p2("alto",2);
          m.insert(p2);

          m["fortuner"]=10;

          //access ways 

          cout<<m.at("alto")<<endl;
          
          cout<<m["fortuner"]<<endl;

          //search ways
          cout<<m.count("Innova")<<endl;
          if(m.find("fortuner")!=m.end()){
            cout<<"Fortuner found"<<endl;
          }
          else{
            cout<<"Fortuner not found "<<endl;
          }

          //size 
          cout<<m.size()<<endl;
          cout<<m["hummer"]<<endl;    // jaise yeh entry present nhi thi toh yeh store hojati with value =0 leke 
          cout<<m.size()<<endl;


          //printing
          cout<<"printing  all entries "<<endl;

          for(auto i: m){
            cout<<i.first<<" -> "<<i.second<<endl;  // i acting as a pair here
            
          }

          return 0;
}

*/



//--------------------------- character ka count print kro string ke 
/*
int main(){
  string str= "thiruvananthpuram";
  unordered_map<char,int> freq;

  for(int i=0; i<str.length();i++){
    char ch= str[i];
    freq[ch]++;                    //freq[ch] accesses the value associated with the key ch
  }

  for(auto i: freq){
    cout<<i.first<<" "<<i.second<<endl;
  }

  return 0;
}


*/

//---------------------------------- Tries lec 192

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d){
      this->data=d;
      for(int i=0; i<26;i++){
        children[i]=NULL;
              }
      this->isTerminal=false;
    }
};

void insertWord(TrieNode* root, string word ){
 // cout<<"Inserting "<<word <<endl;
      //base case
       if(word.length()==0){
              root->isTerminal=true;
              return;
       }
       char ch= word[0];
       int index= ch-'a';
       TrieNode*child;

       //present 
       if(root->children[index]!=NULL){
        child= root->children[index];
       }
       else{
           //not present
           child= new TrieNode(ch);
           root->children[index]=child;
       }

       //recursion sambhal lega 
       insertWord(child, word.substr(1));
}

bool searchWord(TrieNode* root,string word ){
  //base case
  if(word.length()==0){
    return root->isTerminal;
  }

  char ch= word[0];
  int index= ch-'a';
  TrieNode*child;

  //present
  if(root->children[index]!=NULL){
    child= root->children[index];
  }
  else{
    return false;
  }
   //recursive call
   return searchWord(child,word.substr(1));
}

int main(){
    TrieNode*root=new TrieNode('-');

    insertWord(root,"coding");
    insertWord(root,"code");
    insertWord(root,"coder");
    insertWord(root,"codehelp");

    if(searchWord(root,"coding")){
      cout<<"present"<<endl;
    }
    else{
      cout<<"absent"<<endl;
    }

    return 0;
}