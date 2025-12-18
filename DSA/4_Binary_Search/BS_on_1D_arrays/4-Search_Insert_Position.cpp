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
    int searchInsert(vector<int> &nums, int target)  {
        int ans=nums.size();
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
          int mid=(low+high)/2;
        if(nums[mid]>=target) {
          if(nums[mid]>target){
            ans=mid;
          }
          else{
            ans=mid;
          }
          high=mid-1;
        }

        if(nums[mid]<target) {
          low=mid+1;
        }
    }
    return ans;
    }
};


int main() {
    vector<int> a = {10, 20,22, 35, 47, 55, 60, 72};
    Solution s;
    int index = s.searchInsert(a,40);

    cout << "The index for search insert is: " <<index<< endl;
    return 0;
}
