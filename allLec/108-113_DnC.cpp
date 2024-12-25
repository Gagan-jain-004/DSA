#include<iostream>
#include<bits/stdc++.h>


using namespace std;


//---------- ------  Merge sort   via   recursionn 


// void merge(int*arr, int s, int e){

   
//     int mid=(s+e)/2;

//     int len1= mid-s+1;
//     int len2= e-mid;

//     //dynamic array creation for len1 and len2  becoz it's good way then rather creating like  arr[n]
//     int *left =new int [len1];
//     int *right =new int [len2];
//     //copy values
    
//     int k=s;
//     for(int i=0; i<len1;i++){
//         left[i]=arr[k];
       
//         k++;

//     }
    
//     k=mid+1;
//     for(int i=0; i<len2;i++){
//         right[i]=arr[k];
//         k++;
//     }


//     //merge logic
//      int leftIndex=0;
//      int rightIndex=0;
//      int mainArrayIndex=s;

//      while(leftIndex<len1 && rightIndex<len2){
//         if(left[leftIndex]<right[rightIndex]){
//             arr[mainArrayIndex++]=left[leftIndex++];

//         }
//         else{
//             arr[mainArrayIndex++]=right[rightIndex++];
//         }
//      }
//      //copy logic for left array 
//      while(leftIndex<len1){
//         arr[mainArrayIndex++]=left[leftIndex++];
//      }

//      //copy logic for right array
//      while(rightIndex<len2){
//         arr[mainArrayIndex++]=right[rightIndex++];
//      }
// }


// void mergeSort(int *arr,int s,int e){
//     //base case 
//     // s==e     matlab already single element hai to sortesd hei hoga na re 
//     // s>e        matlab invalid array 
//     if(s>=e){
//         return;
//     }

//     int mid=(s+e)/2;
    
//     //Left part sort kardo via recursion where end would be mid obviously 
//     mergeSort(arr,s,mid);
 
//     // right part sort krdo via recursion where s would be mid+1 
//     mergeSort(arr,mid+1,e);

//     //now merge 2 sorted arrays
//    merge(arr,s,e);

// }

// int main(){
//    int arr[]={4,1,13,2,12};
//    int n=5;

//    int s=0;
//    int e=n-1;

//    mergeSort(arr,s,e);

//    for(int i=0;i<5;i++){
//     cout<<endl<<"ender"<<arr[i]<<" ";
//    }
//     return 0;
// }



                                    // ai explanation of above code 

/*

Sure thing! Let's dive deep into each step of the recursion and merging process with your merge sort algorithm. I'll break it down for you:

Initial Array: {4, 1, 13, 2, 12}
1. First Call to mergeSort(arr, 0, 4)
s = 0, e = 4, mid = (0+4)/2 = 2

mergeSort(arr, 0, 2) is called to sort the left part.

mergeSort(arr, 3, 4) is called to sort the right part.

2. Sorting the Left Part: mergeSort(arr, 0, 2)
s = 0, e = 2, mid = (0+2)/2 = 1

mergeSort(arr, 0, 1) is called to sort the left subpart.

mergeSort(arr, 2, 2) is called to sort the right subpart.

2.1 Sorting the Left Subpart: mergeSort(arr, 0, 1)
s = 0, e = 1, mid = (0+1)/2 = 0

mergeSort(arr, 0, 0) is called to sort the leftmost part.

mergeSort(arr, 1, 1) is called to sort the next part.

2.1.1 Base Case: mergeSort(arr, 0, 0) and mergeSort(arr, 1, 1)
Both calls hit the base case (s == e), meaning each subpart is a single element and already sorted. They return immediately.

2.2 Merging {4} and {1}: adder(arr, 0, 1)
len1 = 1, len2 = 1

left array: {4}

right array: {1}

Merging Process:

Compare 4 and 1

Insert 1 into the main array

Insert 4 into the main array

Resulting array: {1, 4, 13, 2, 12}

2.3 Base Case: mergeSort(arr, 2, 2)
This call hits the base case (s == e), meaning the subpart is a single element ({13}) and already sorted. It returns immediately.

3. Merging {1, 4} and {13}: adder(arr, 0, 2)
len1 = 2, len2 = 1

left array: {1, 4}

right array: {13}

Merging Process:

Compare 1 and 13

Insert 1 into the main array

Compare 4 and 13

Insert 4 into the main array

Insert 13 into the main array

Resulting array: {1, 4, 13, 2, 12}

Sorting the Right Part: mergeSort(arr, 3, 4)
s = 3, e = 4, mid = (3+4)/2 = 3

mergeSort(arr, 3, 3) is called to sort the left subpart.

mergeSort(arr, 4, 4) is called to sort the right subpart.

4.1 Base Case: mergeSort(arr, 3, 3) and mergeSort(arr, 4, 4)
Both calls hit the base case (s == e), meaning each subpart is a single element and already sorted. They return immediately.

4.2 Merging {2} and {12}: adder(arr, 3, 4)
len1 = 1, len2 = 1

left array: {2}

right array: {12}

Merging Process:

Compare 2 and 12

Insert 2 into the main array

Insert 12 into the main array

Resulting array: {1, 4, 13, 2, 12}

Final Merging: adder(arr, 0, 4)
len1 = 3, len2 = 2

left array: {1, 4, 13}

right array: {2, 12}

Merging Process:

Compare 1 and 2

Insert 1 into the main array

Compare 4 and 2

Insert 2 into the main array

Compare 4 and 12

Insert 4 into the main array

Compare 13 and 12

Insert 12 into the main array

Insert 13 into the main array

Final sorted array: {1, 2, 4, 12, 13}

*/


//----------------------    109-      Quick Sort ----------


// int partition (int arr[],int s,int e){
//     // step 1: choose pivot element 
//     int pivotIndex= s;
//     int pivotElement = arr[s];

//     //step 2: find right position for pivot element and place it there
//     int count=0;
//     for(int i=s+1; i<=e;i++){
//         if(arr[i]<=pivotElement){
//             count++;

//         }
//     }
    
//     //so with  the help of count u get the right position for pivot element

//     int rightIndex= s+count;
//     swap(arr[pivotIndex],arr[rightIndex]);
//     pivotIndex= rightIndex;

//     //step 3:  left me chhote aut right mai bade

//     int i=s;
//     int j=e;

//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<pivotElement){
//             i++;
//         }
//         while(arr[j]>pivotElement){
//             j--;
//         }

//         //2 case ho  sakte hai 
//         //A -> ki you found the element to swap (coz koi left mai bada element reh gya ya right mai choota pivotelemnt ke)
//         //B -> no need to swap 
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//         return pivotIndex;

//     }

// }

// void quickSort(int arr[],int s,int e){

//     //base case -  same of merge sort see above for explanation
//     if(s>=e){
//         return;
//     }  

//     //partition logic, return  pivot  index
//     int p= partition(arr,s,e);

//     //recursive  calls
//     //pivot element -> to sort  left sides element  
//     quickSort(arr,s,p-1);

//     //pivot element -> to sort  right sides element  
//     quickSort(arr,p+1,e);


// }

// int main(){
//     int arr[]={8,1,3,4,20,50,30};
//     int n=7;

//     int s=0;
//     int e=n-1;
//    quickSort(arr,s,e);

//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }




//----------------------------     ---        -      BACKTRACKING -  ---- ------

// finding permutation of a string 

// void printPermutation(string &str,int i){
//     //base case
//      if(i>=str.length()){
//               cout<<str<<" ";
//               return;
//      }

//      //swapping 
//      for(int j=i;j<str.length();j++){
//         //swap
//         swap(str[i],str[j]);
//         //recursive call
//         printPermutation(str,i+1);

//         //backtracking 
//         swap(str[i],str[j]);

//      }

// }


// int main(){
//     string str="abc";
//     int i=0;
//     printPermutation(str,i);
//     return 0;

// }



//----------------------------------------  DNC L-3 -       RAT IN A MAZE PROBLEM -------------


// bool isSafe(int i,int j,int row , int col , int arr[][3],
// vector<vector<bool> > &visited){
//     if(((i>=0 && i<row)&& (j>=0 && j<col))&& (arr[i][j]==1)&&
//     (visited[i][j]==false)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void solveMaze(int arr[3][3],int row,int col,int i,int  j,
// vector<vector<bool> > &visited,vector<string> &path,string output ){
 
//   //base case 
//   if(i == row-1 && j == col-1){
//          //answer found
//              path.push_back(output);
//                  return;

//   }

//   //Down  .> i+1, j
//   if(isSafe(i+1,j,row,col,arr,visited)){
//     visited[i+1][j]=true;
//     solveMaze(arr,row,col,i+1,j,visited,path,output+'D');
//     //backtrack
//     visited[i+1][j]=false;
//   }

//   //left -> i,j-1
 
//  if(isSafe(i,j-1,row,col,arr,visited)){
//     visited[i][j-1]=true;
//     solveMaze(arr,row,col,i,j-1,visited,path,output+'L');
//     //backtrack
//     visited[i][j-1]=false;
//   }

//   //right  -> i, j+1 
 
//  if(isSafe(i,j+1,row,col,arr,visited)){
//     visited[i][j+1]=true;
//     solveMaze(arr,row,col,i,j+1,visited,path,output+'R');
//     //backtrack
//     visited[i][j+1]=false;
//   }

//   //up -> i-1,j
 
//  if(isSafe(i-1,j,row,col,arr,visited)){
//     visited[i-1][j]=true;
//     solveMaze(arr,row,col,i-1,j,visited,path,output+'U');
//     //backtrack
//     visited[i-1][j]=false;
//   }

// }


// int main(){
//     int maze[3][3]={{1,0,0},
//                      {1,1,0},
//                       {1,1,1}};
     
//     if(maze[0][0]==0){
//         cout<<"No Path Exists "<<endl;
//         return 0;
//     }
//     int row=3;
//     int col = 3;

//     vector<vector<bool> > visited(row,vector<bool>(col,false));

//     //source ki  value true mark kr dete hai 
//     visited[0][0]=true;

//     vector<string> path;
//     string output=" ";

//     solveMaze(maze,row,col,0,0,visited ,path,output);    // 0,0 is start of rat 
    
//     for(auto i:path){
//         cout<<i<<" ";
//     }

//     if(path.size()==0){
//         cout<<"No Path Exists "<<endl;
//     }
    
//     return 0;
// }




//----------------------------        n queen place in n*n board such that no queen can attack the another------------------------


// unordered_map<int,bool>rowCheck;
// unordered_map<int,bool>upperLeftDiagonalCheck;
// unordered_map<int,bool>bottomLeftDiagonalCheck;





// void printSolution(vector<vector <char> > &board,int n){
//     for(int i=0; i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//           }
//     cout<<endl;
//     }
//     cout<<endl<<endl;
// }


// bool isSafe(int row,int col,vector<vector<char> > &board,int n){
   
//    if(rowCheck[row]==true)
//       return false;
   
//    if(upperLeftDiagonalCheck[n-1+col-row]==true)
//       return false;
   
//    if(rowCheck[row+col]==true)
//       return false;

//       return true;
   
   

//     //below one is previous approach of o(n) and above one is of map wali with o(1) t.c
    
//     // //check karna chahte hai ki kya mai current cell [row,col] pr queen rakh sakta hu ya nahi 
//     // int i=row;
//     // int j=col;

//     // // check row 
//     // while(j>=0){
//     //     if(board[i][j]=='Q'){
//     //         return false;
//     //     }
//     //         j--;

//     // }

//     // //check  upper left diagonal
//     // i= row;
//     // j=col;
//     // while(i>=0 && j>=0){
//     //     if(board[i][j]=='Q'){
//     //         return false;
//     //     }
//     //     i--;
//     //     j--;
//     // }
//     // //check  bottom left diagonal
//     //   i= row;
//     // j=col;
//     // while(i<n && j>=0){
//     //     if(board[i][j]=='Q'){
//     //         return false;
//     //     }
//     //     i++;
//     //     j--;
//     // }

//     // // agr upper checks mai kuch  return nhi hua toh matlab ye position safe hai kyoki queen nhi mili toh  true return krde
//     // return true;
// }

// void  solve(vector<vector <char> > &board,int col ,int n){
//     //base case 
//     if(col>=n){
//         printSolution(board,n);
//         return;
//     }

//     // 1 case solve karlo baki recursion dekh lega   ( matlab q ko  saari row mai aajmalo baki recursion )
    
//     for(int row=0; row<n;row++){
//         if(isSafe(row,col,board,n)){
//             //safe toh rkh de
//             board[row][col]='Q';
//             rowCheck[row]=true;
//             upperLeftDiagonalCheck[n-1+col-row]=true;
//             bottomLeftDiagonalCheck[row+col]=true;

//             //recursion solution lagega (so that q2 ,q3,and so on rkhte jao)
//             solve(board,col+1,n);

//             //backtracking   (check krne ke baad ush jagah ko free krdo so fir agli row ke liye restart feel ho )
//             board[row][col]='-';
//               rowCheck[row]=false;
//             upperLeftDiagonalCheck[n-1+col-row]=false;
//             bottomLeftDiagonalCheck[row+col]=false;
//         }
//     }

// }

// int main(){
//     int n =4;
//     vector<vector<char> >board(n,vector<char>(n,'-'));
//     int col=0;
//    //0  matlab empty cell
//    //1  matlab queen at the cell
    
//     solve(board,col,n);
//     return 0;

// }




//------------ Generate Parentheses leetcode-- 22   dnc L-5 not understand      -=---------


//----------------     Letter combination of phone number  Leetcode-17  --------

void solve(vector<string> &ans,int index,string output,string digits,vector<string>&mapping){
    //base case 
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }

    //1case solve bakki recursion role 
    int digit = digits[index]-'0';
    string value= mapping[digit];
    for(int i=0;i<value.length();i++){
        char ch=value[i];
        output.push_back(ch);
        solve(ans,index+1,output,digits,mapping);
        //backtrack
        output.pop_back();

    }
}

vector<string> letterCombinations(string digits){
    vector<string>ans;

    if(digits.length()==0)
    return ans;
    
    int index=0;
    string output="";
    vector<string> mapping(10);
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";

    solve(ans,index,output,digits,mapping);
    return ans;

}