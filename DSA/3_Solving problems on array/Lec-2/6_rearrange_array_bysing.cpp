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
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> positive;
       vector<int> negative;
        for(int i=0;i<nums.size();i++){
          if(nums[i]>=0){
            positive.push_back(nums[i]);
          }
          else{
           negative.push_back(nums[i]);
          }
        }
        int n=nums.size();
        vector<int> newnums;
        int pointer1=0;
        int pointer2=0;
        while(n>0){
          if(n%2==0){
            newnums.push_back(positive[pointer1]);
             pointer1++;
          }
          else{
            newnums.push_back(negative[pointer2]);
             pointer2++;
          }
         n--;
        
        
        }

       nums=newnums;
       return nums;
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
   
    vector<int> vnew=s.rearrangeArray(v);
    for(int k = 0; k < vnew.size(); k++){
        cout<< vnew[k]<<" ";
    }
    return 0;
}