#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
using namespace std;
class Solution{  
  public:
  int count=0;  
public:    
    int singleNumber(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
      int tofind=nums[i];
      count=0;
        for(int j=0;j<nums.size();j++){
         if(nums[j]==tofind){
          count=count+1;
         }
         if(count>1){
          break;
         }
         if(count==1 && j==nums.size()-1){
          return tofind;
         }
        }   
       }
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

    cout << s.singleNumber(v);
    return 0;
}
