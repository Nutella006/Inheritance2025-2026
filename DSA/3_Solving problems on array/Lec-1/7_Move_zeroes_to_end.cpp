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

    void moveZeroes(vector<int>& nums) {
       
        vector<int> newvector={};
        int totalzeroes=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]==0){
            totalzeroes=totalzeroes+1;
          }
          else{
            newvector.push_back(nums[i]);

          }
        
        }
        while(totalzeroes>0){
          newvector.push_back(0);
          totalzeroes=totalzeroes-1;
        }
            for(int r = 0; r < newvector.size(); r++){
       cout<<newvector[r]<<" ";
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
   s.moveZeroes(v);
}
