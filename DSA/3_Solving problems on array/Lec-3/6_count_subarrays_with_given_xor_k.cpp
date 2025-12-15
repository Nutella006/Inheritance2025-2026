#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;
class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
      map<int,int> mpp;
      int xr=0;
      int count=0;
      mpp[xr]=1;
      for(int i=0;i<nums.size();i++){
        xr=nums[i]^xr;
        int x=xr^k;
        count=count+mpp[x];
        mpp[xr]++;

      }
      return count;
    }
};

int main() {
    Solution s;
    int size;
    cin>>size;
    vector<int> v(size);
    for(int i=0;i<v.size();i++){
      cin>>v[i];
    }
    int target;
    cin>>target;
   cout<<s.subarraysWithXorK(v,target);

   
    return 0;
}
