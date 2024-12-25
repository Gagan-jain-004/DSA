#include <iostream>
// #include <cmath>
#include <bits/stdc++.h> //library for everything
using namespace std;

int findUnique(vector<int> a)
{
   int ans = 0;
   for (int i = 0; i < a.size(); i++)
   {
      ans = ans ^ a[i];
   }
   return ans;
}

int getMax(int arr[][3], int row, int col)
{
   int maxi = INT_MIN;
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         maxi =max(maxi,arr[i][j]);
      }
   }
   return maxi;
}

int getMin(int arr[][3], int row, int col)
{
   int mini = INT_MAX;
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < col; j++)
      {
         mini =min(mini,arr[i][j]);
      }
   }
   return mini;
}


int  transpose(int arr[][3],int row,int col){
   for (int i = 0; i < row; i++)
   {for (int j = 0; i < col; j++)
   {
      cout<<arr[j][i]<<" ";
   }cout<<endl;
   
   }
   
}

int main()
{

   // find unique  element (who is singly present in it others are present twice)-------------------------- lec 44

   // int n;
   // cin>>n;
   // vector<int> arr(n);
   // for(int i=0;i<arr.size();i++){
   //    cin>>arr[i];
   // }

   // int uniqueElement = findUnique(arr);
   // cout<<uniqueElement;

   // union of array (considering all elements present single time )------------------------

   //       int arr[]={1,5,3,6,9,8};
   //       int brr[]={2,4,7};

   //       vector <int> ans;
   //       for(int i=0;i<6;i++){
   //          ans.push_back(arr[i]);
   //       }
   //       for(int i=0;i<3;i++){
   //          ans.push_back(brr[i]);
   //       }
   // for(int i=0;i<ans.size();i++){
   //    cout<<ans[i];
   // }

   // intersection of array -------------------------------

   // vector <int> arr{1,2,3,3,4,6,8};
   // vector <int> brr{3,3,4,10};
   // vector <int> ans;

   // for(int i=0;i<arr.size();i++){
   //    for(int j=0; j<brr.size();j++){
   //       if(arr[i]==brr[j]){
   //          brr[j]=-1;
   //          ans.push_back(arr[i]);
   //       }

   //    }
   // }

   // for(auto kl:ans){
   //    cout<<kl<<" ";
   // }

   // separating o and 1 by swaping and collecting 0 at starting and 1 at ending -------------------

   // vector <int> v{0,1,0,1,1,0,1,0,1,1};
   // int start = 0;
   // int end= v.size()-1;
   // int i=0;
   // while(i<end){
   //        if(v[i]==0){
   //               swap(v[i],v[start]);
   //               start++;
   //               i++;
   //        }
   //        if(v[i]==1){
   //               swap(v[i],v[end]);
   //               end--;
   //        }
   // }

   //  for(auto it: v){
   //                cout<<it<<" ";
   //  }

   // 2-D array -------------------------

   // int arr[3][3]={
   //        {1,2,3,},
   //        {4,5,6},
   //        {7,8,9},
   // };

   // return max nd min in 2-d array ------------------
  
//   int arr[3][3]={{1,2,3},{1,3,7},{4,6,8}};
 
// //  cout<<"Max  "<<getMax(arr,3,3)<<endl;
// //  cout<<"Min  "<<getMin(arr,3,3);

//  transpose(arr,3,3);


//----------------------!!!!!!              *******         2-d vector    boi     **********          -------------------
                
//    vector<vector<int>>arr;

//    vector<int>a{1,2,3};
//    vector<int>b{2,4,6};
//    vector<int>c{1,3,7};

//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);

//    for(int i=0; i<arr.size();i++){
//       for (int j = 0; j < arr[i].size(); j++)            // if no. of col in every row is different than use arr[i].size() else use arr[0].size()
//       {
//              cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
      
//    }

// cout<<endl;

// vector<vector<int>>v(5,vector<int>(5,101));

//  for(int i=0; i<v.size();i++){
//       for (int j = 0; j < v[i].size(); j++)           
//        {
//              cout<<v[i][j]<<" ";
//        }
//        cout<<endl;
      
//    }



   return 0;
}