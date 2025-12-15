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
    void nextPermutation(vector<int>& nums) {
        int index=-1;
       for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
       }
       if(index==-1){
        reverse(nums.begin(),nums.end());
        return;
       }
       for(int j=nums.size()-1;j>index;j--){
        if(nums[j]>nums[index]){
            swap(nums[index],nums[j]);
        }
       }
       reverse(nums.begin()+index+1,nums.end());
    }

};


int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
   
   s.nextPermutation(v);
    for(int k = 0; k < v.size(); k++){
        cout<< v[k]<<" ";
    }
    return 0;
}