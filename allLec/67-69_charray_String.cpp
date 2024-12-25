#include <iostream>
#include <bits/stdc++.h> //library for everything

using namespace std;


// int main(){

//  char ch[5];
//  cin.getline(ch,50);    // to print with gaps 
//  cout<<ch;
//     return 0;
// }

//------------------  length of a string ----------------------

// int getlength(char name[]){

//     int length=0;
//     int i=0;
//     while(name[i]!='\0'){
//         length++;
//         i++;

//     }
//     return length;

// }

// int main(){
//     char name[100];
//     cin>>name;

//     cout<<"Length is : "<<getlength(name)<<endl;
//     cout<<"Length is : "<<strlen(name)<<endl;       // predefined fxn to get length 

//     return 0;
// }


//             -----------------------------  Reverse a string---------------------------------------


// int getlength(char name[]){

//     int length=0;
//     int i=0;
//     while(name[i]!='\0'){
//         length++;
//         i++;

//     }
//     return length;

// }   

// void reverseCharArray(char name[]){
//     int i=0;
//     int n=getlength(name);
//     int j=n-1;

//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;

//     }
// }

// int main(){
//     char name[100];
//     cin>>name;
//     reverseCharArray(name);
//     cout<<name;
// }


// --------------------------  Replacing the spaces in char array by @ --------------

// void replaceSpaces(char sentence[]){
//     int n= strlen(sentence);
//     for(int i=0;  i<n; i++){
//         if(sentence[i]==' '){
//             sentence[i]='@';
//         }
//     }
// }

// int main(){
//     char sentence[100];
//     cin.getline(sentence,50);
//     replaceSpaces(sentence);
//     cout<<sentence;
// }

//---------------------           palindrome checker  ----------------

// bool checkPalindrome(char sent[]){
//     int s=0;
//     int n=strlen(sent);
//     int e=n-1;
//     while(s<=e){
//         if(sent[s]!=sent[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;

//         }
//     }
//     return 1;
// }

// int main(){
//     char sent[50];
//     cin>>sent;
//     if(checkPalindrome(sent)){
//         cout<<"gotcha";
//     }
//     else{
//         cout<<"no Man";
//     }
// }

// -------------------     to lower to  upper case  -------------------

// void cnvrtToUpper(char arr[]){
//     int n=strlen(arr);
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i]-'a'+'A';
//     }
// }

// int main(){
//      char a[50]={"hellman"};

// cnvrtToUpper(a);
// cout<<a;
// return 0;
// }


//       -              -------------           String  -----------

// int main(){
    // string str;
    // getline(cin,str);               //to come with spaces
    // cout<<str;
    // cout<<str.length();
    // str.push_back('S');
    // cout<<str;
    // str.pop_back();
    // cout<<str.substr(0,6);

    // string a="boolean";
    // string b="color";
    // if(a.compare(b)==0){
    //     cout<<"same hai re ";
    // }
    // else{
    //     cout<<"alag alag hai ";
    // }

    // string sentence="hell man u are";
    // string target="hell";

    // cout<<sentence.find(target);

// string a="hell is what it is ";
// string b="ticker";
//     a.replace(0,4,b);       // 0 for the starting index of the word and 4 is the digits that to be replaced with b string 
//     cout<<a<<endl;


//     b.erase(1,2); // 1 is the starting index of deletion and 2 letters to be deleted 
//     cout<<b<<endl;


//doubt 
   // string s="man";
    // for(int i=0; i<s.length();i++){
    //     cout<<s[i]<<" ";
    // }
    
// }


// removing adjacent refer                       leetcode - 1047 ----------

// int ans="";
// int i=0;

// while(i<s.length()){
//        if(ans.length() > 0 && ans.lenght()-1 == s[i]){
//             ans.pop_back();
//         }
//         else{
//             ans.push_back(s[i]);
//         }
// i++;
//     }


// return ans;


//-------------------------------      leetcode 539        good + clearer   -------------
// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
        
//         //cnvrt string to int 
//         vector<int> minutes;

//         for(int i=0;i<timePoints.size();i++){
//             string curr = timePoints[i];
//             int hours = stoi(curr.substr(0,2));
//             int min=stoi(curr.substr(3,2));

//             int totalMinutes=  hours*60 + min;
//             minutes.push_back(totalMinutes);

            
//         }

//         //sort
//         sort(minutes.begin(),minutes.end());

//         //difference
// int mini=INT_MAX;
// int n= minutes.size();

// for(int i=0;i<n-1;i++){
//     int diff=minutes[i+1]-minutes[i];
//     mini=min(mini,diff);
// }

// int lastdiff=(minutes[0]+1440)-minutes[n-1];
//  mini=min(mini,lastdiff);
// return mini;
//     }
// };


//--------------------------- lec - 69     -----------
//-----------    -------------                    ---------     sorting and custom comparator in string -------

// bool  cmp(char a, char b){
//     return a>b;
// }

// bool compare(int a, int b){
//     return a<b;
// }

// int main(){
//     string s= "brabus";
//     sort(s.begin(),s.end(),cmp);

//     cout<<s<<endl;

//     vector<int> v{5,0,9,2,4};
//   sort(v.begin(),v.end(),compare);

//   for(auto i:v){
//     cout<<i;
//   }

// }

//----------------------------------      map  in  sasti style -------------- // map key value mai hota hai  

int main(){
   // creation of map 
    map<int,char> mymap;
    // insertion in map
    mymap[0]='a';
    mymap[1]='x';
    mymap[25]='z';

    //accessing 
      cout<<mymap[25]<<endl;
      
   for (const auto& pair : mymap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
   }



    return 0;
}