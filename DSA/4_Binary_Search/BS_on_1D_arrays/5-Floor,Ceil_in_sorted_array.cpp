#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include<climits>

using namespace std;
class Solution {
public:
  int Ceil(vector<int> &nums, int x){
      int ans=x;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
          int mid=(low+high)/2;
        if(nums[mid]>=x) {
          ans=nums[mid];
          high=mid-1;
        }

        if(nums[mid]<x) {
          low=mid+1;
        }
    }
    return ans;
}
int Floor(vector<int> &nums, int x){
      int ans=x;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
          int mid=(low+high)/2;
        if(nums[mid]<=x) {
          ans=nums[mid];
         low=mid+1;
        }

        if(nums[mid]>x) {
          high=mid-1;
        }
    }
    return ans;
}

    vector<int> getFloorAndCeil(vector<int> nums, int x) {
   int floor= Floor(nums,x);
    int ceil=Ceil(nums,x);
     return {floor,ceil};

    }
    };
int main() {
    vector<int> a = {10, 20,22, 35, 47, 55, 60, 72};
    Solution s;
   vector<int>  vec = s.getFloorAndCeil(a,40);
  
    cout << "The index for search insert is: " <<vec[0]<<" "<<vec[1]<< endl;
    return 0;
}
