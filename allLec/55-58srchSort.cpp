#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//      -------------                                 BINARY SEARCH        -------------------------------

int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}

// int main(){
// int arr[]={2,4,6,8,10,12,16};

// int size=7;
// int target=16;
// int index= binarysearch(arr,size,target);

// if(index==-1){
//     cout<<"not found ";
// }
// else{
//     cout<<"the index is "<<index;
// }

// without creating function of binarysearch we can use directly just by name like below

// vector<int> v{1,2,3,4,5,6};

//     if(binary_search(v.begin(),v.end(),6)){
//         cout<<" found ";
//     }
//     else{
//         cout<<"not found ";
//     }

// let's see in array case without creating function

// int arr[]={1,2,3,4,5,6};
// int size=6;

//   if(binary_search(arr,arr+size,8)){
//         cout<<" found ";
//     }
//     else{
//         cout<<"Not found ";
// }

// return 0;
// }

// lec 56 end                             binary search in matrix/2-d array        ----------------------

// bool Binarysearch(int arr[][4],int rows,int cols, int target){

//       int start =0;
//       int end=(rows*cols)-1;
//       while(start<end){
//         int mid=start+((end-start)/2);
//         int element=arr[mid/cols][mid%cols];  // row index =mid/cols    col index= mid%cols

//         if(element==target){
//                     return true;
//         }
//         else if(element<target){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//       }

// return false;

// }

// int main(){
//       int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

//     int rows=5;
//     int cols=4;
// int target=12;

//     bool ans =Binarysearch( arr,5,4,target);

//    if(ans){
//     cout<<"found";
//    }
// else{
//     cout<<"not found";
// }
//     return 0;
//     }

//                 lec-58            ---------------------             binary search in nearly sorted array       -----

// better than linear search because of complexity of binary  search is O(logn)

// int Binarysearch(vector<int> v, int target)
// {
//     int s = 0;
//     int e = v.size() - 1;
//     int mid = 0;

//     while (s < e)
//     {
//         mid = s + ((e - s) / 2);
//         if (v[mid] == target)
//             return mid;
//         if (mid - 1 >= 0 && v[mid - 1] == target)
//             return mid - 1;
//         if ( mid+1 <=v.size() &&   v[mid + 1] == target)
//             return mid - 1;

//         if (v[mid] < target)
//         {
//             s = mid + 2;
//         }
//         else
//         {
//             e = mid - 2;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr{10, 3, 40, 20, 50, 80, 70};
//     int target = 60;
//     int ans = Binarysearch(arr, target);

//     cout << "index of " << target << "is " << ans;

//     return 0;
// }


//  ------- ------      division using binary search ------------------------

int solve(int dividend, int divisor){
    int s=0;
    int e =abs(dividend);
    int ans=0;
    int mid;
    while(s<=e){
        mid=s+((e-s)/2);
        if(abs(mid*divisor)==abs(dividend)){
                ans= mid;
                break;
        }
        if(abs(mid*divisor)>abs(dividend)){
            e=mid-1;
        }
        else{
ans= mid;
s=mid+1;
        }
    }
 if((divisor<0 && dividend<0)||(divisor>0 && dividend>0))   {
    return ans;
}
else{
    return -ans;
}
}


int main(){

int dividend=22;
int divisor=-7;

int ans=solve(dividend,divisor);
cout<<"Ans is "<<ans<<endl;

    return 0;
}