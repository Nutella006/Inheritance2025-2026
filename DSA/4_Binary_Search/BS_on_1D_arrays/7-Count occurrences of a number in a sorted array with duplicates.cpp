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
    int first(const vector<int> &nums, int target){
    int first=-1;
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
int last(const vector<int> &nums, int target){
    int last=-1;
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
    int countOccurrences(const vector<int>& arr, int target) {
       int firstelement=first(arr,target);
      int lastelement=last(arr,target);
      if(firstelement==-1){
        return -1;
      }
      return (lastelement-firstelement)+1;
    }
};
int main() {
    vector<int> a = {10,20,22,22,22,22,35, 47, 55, 60, 72};
    Solution s;
   int ans = s.countOccurrences(a,22);
  
    cout << "The index for search insert is: " <<ans<< endl;
    return 0;
}
