#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
       int t=nums[0];
       for(int i=0;i<nums.size();i++){
        if(i==nums.size()-1){
          nums[nums.size()-1]=t;
        }
        else{
              nums[i]=nums[i+1];
        }
       
       }
       for(int r = 0; r < nums.size(); r++){
        cout<<nums[r]<<" ";
    }
    }
};
int main(){
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }

    Solution s;
   s.rotateArrayByOne(v);
}
