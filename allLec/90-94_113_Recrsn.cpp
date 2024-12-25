#include <iostream>
#include <bits/stdc++.h> //library for everything


using namespace std;


//-------   printing the array element using recursion

// void print(int arr[],int n,int i){
   
//     if(i>=n){

//      return;
//     }
//      cout<<arr[i]<<" ";
     
//      print(arr,n,i+1);         
// }
// int main(){

// int v[4]= {10,20,30,40};
//  int i=0;
//  int n=4;
// print(v,n,i);
//     return 0;
// }


//------------- printing max element of array using recursion ---------

// void findMax(int arr[],int n,int i, int& maxi){
//     if(i>=n){
//         return;
//     }

//      maxi=max(maxi,arr[i]);

//     findMax(arr,n,i+1,maxi);
        


// }

// int main(){

//     int arr[]={10,30,21,44,32,17,19,66};
//     int n=8;

//     int maxi=INT_MIN;
//     int  i=0;

//     findMax(arr,n,i,maxi);
//         cout<<maxi;


//     return 0;
// }

//-------------------------- finding key in a string 

// My method

// void find(string x,int l,char k,int i){

// if(i>=l){
//     cout<<"noMan";
//     return;
// }
// if(x[i]==k){
//     cout<<"gotcha";
//     return;
// }
// find(x,l,k,i+1);

// }

// int main(){
//     string s="hakunama";
//     int len= s.length();
//     char key='l';
//     int i=0;
//      find(s,len,key,i);
   
// }

//-------------- printing the digits of a numbeer


// void printdigits(int n){
//     //base case 

//     if(n==0){
//         return;
//     }


   
//     int newn=n/10;
    
//     printdigits(newn);

//      int digit=n%10;
//     cout<<digit<<" ";
// }

// int main(){
//     int n=647;
//     printdigits(n);

//     return 0;
// }



//--------------------------  reporting whether  array is sorted or not 

//without recurion-___-----

// int repo(int arr[],int n, int i){
//   while(i<n-1){
//     if(arr[i]<arr[i+1]){
//         i++;
//     }
//     else{
//         return 0;
//     }
//   }
//   if(i==n-1){
//     return 1;
//   }
// }

// int main(){
//     int arr[]={1,25,3,4,5};
//     int n=5;
//     int i=0;

//     int ans =repo(arr,n,i);
//     cout<<ans;
// }

// ------  with  recursion

// bool check(vector<int> &v, int n,int i){
//  if(i==n-1){
//     return true;
//   }
//   else if(v[i]>v[i+1]){
//      return false;
//   }
  
//   check(v,n,i+1);
// }

// int main(){
//     vector<int> v{10,20,80,50,60};
//     int n=v.size();
//     int i=0;
//     bool isSorted= check(v,n,i);
//     if(isSorted){
//         cout<<"Sorted "<<endl;
//     }
//     else{
//         cout<<"Not Sorted "<<endl;
//     }

//     return 0;
// }


// ------- ---------- --------   binary search with recursion  ----- 

// int binarySearch(vector<int> arr, int s, int e, int key){
  
//     if(s>e){
//         return -1;
//     }
//     int mid=s+((e-s)/2) ;
//     if(arr[mid]==key){
//         return 1;
//     }

//    if(arr[mid]<key){
//     s=mid+ 1;
//    }
//    else{
//     e=mid-1;
//    }
//   return binarySearch(arr,s,e,key);

  

//     // alter way                using eternary operator 

//     // return (arr[mid]<key)? binarySearch(arr,mid+1,e,key):binarySearch(arr,s,mid-1,key);
// }

// int main(){
//     vector<int>v{10,20,40,60,70,90,99};

//     int target=25;
//     int n=v.size();
//     int s=0;
//     int e=n-1;

//     int ans= binarySearch(v,s,e,target);
//     cout<<ans;

// }


//------------------- ---------    Printing subsequences of a string  ------

// void printSubsequence(string str,string output, int i,vector<string>&v){
//     //base case  

//     if(i>= str.length()){
//        v.push_back(output);
//         return;
//     }
//     //exclude
//     printSubsequence(str,output,i+1,v);

//       //include
//       output= output + str[i]; 
//     printSubsequence(str,output,i+1,v);


// }

// int main(){
//     string str="abc";
//     string output="";
//     vector<string>v;
//     int i=0;
//     printSubsequence(str,output,i,v);
    
//     cout<<"Printing all subsequences"<<endl;

//     for(auto val:v){
//         cout<<val<<" ";
//     }
    


//     return 0;
// }


// -------------------          Recursion  level-4  -------

// int solve(vector<int>&arr, int target){

//     //base 
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }
//     // solve 1 case 
//     int mini =INT_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans= solve(arr,target-arr[i]);
//         if(ans!= INT_MAX)
//         mini=min(mini,ans+1);
//     }

//     return mini;
// }

// int main(){
//     vector<int> arr{1,2};
//     int target =5;

//     int ans= solve(arr,target);
//     cout<<"Answer is : "<<ans<<endl;
// }


//  printing maxm no. of segments of  rod of length n having segment of part x,y,z;-----------

int solve(int n,int x,int y,int z ){
    //base case 

    if(n==0){
        return  0;

    }
   
   if(n<0){
    return INT_MIN;
   }
    
    int ans1 =solve(n-x,x,y,z)+1;
    int ans2 =solve(n-y,x,y,z)+1;
    int ans3 =solve(n-z,x,y,z)+1;

    int ans= max(ans1,max(ans2,ans3));
    return ans;


}

int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;


    int ans= solve(n,x,y,z);

    if(ans<0)
    ans=0;

    cout<<"Answer is "<<ans;
    return 0;
}