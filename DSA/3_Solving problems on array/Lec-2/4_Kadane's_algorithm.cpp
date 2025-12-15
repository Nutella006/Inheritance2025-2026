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
    int maxSubArray(vector<int>& nums) {
       
        int maxi=0;
      int j;
        for(int i=0;i<nums.size();i++){
          int sum=0;
          for(j=i;j<nums.size();j++){
            sum=sum+nums[j];
            if(sum>maxi){
           maxi=sum;
          }
          }
          
        }
        return maxi;
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
   
    cout<< s.maxSubArray(v);
    return 0;
}