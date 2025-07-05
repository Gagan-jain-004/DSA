#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
     int zero=0;
     int one=0;
     int two=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) zero++;
        if(nums[i]==1) one++;
        if(nums[i]==2) two++;
    }
    for(int i =0;i<nums.size();i++){
        if(i<zero) nums[i]=0;
       else if(i<zero + one) nums[i]=1;
       else  nums[i]=2;
    }
    for(auto i:nums){
        cout<<i;
    }
    
    }
};





int main(){
vector<int>nums{2,0,2,1,1,0};

Solution sol;
sol.sortColors(nums);



}