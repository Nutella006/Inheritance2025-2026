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
class Solution{
public:
int first(vector<int> &nums, int target){
    int first=0;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
        first=mid;
        high=mid-1;
        }
        else if(nums[mid]>target){
        high=mid-1;
        }
        else{
      low=mid+1;
        }
    }
   return first;
}
int last(vector<int> &nums, int target){
    int last=nums.size()-1;
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
        last=mid;
        low=mid+1;
        }
        else if(nums[mid]>target){
        high=mid-1;
        }
        else{
      low=mid+1;
        }
    }
   return last;
}
    vector<int> searchRange(vector<int> &nums, int target) {
      int firstelement=first(nums,target);
      int lastelement=last(nums,target);
      return {firstelement,lastelement};
       }

    };
int main() {
    vector<int> a = {10,20,22,22,22,22,35, 47, 55, 60, 72};
    Solution s;
   vector<int>  vec = s.searchRange(a,22);
  
    cout << "The index for search insert is: " <<vec[0]<<" "<<vec[1]<< endl;
    return 0;
}
