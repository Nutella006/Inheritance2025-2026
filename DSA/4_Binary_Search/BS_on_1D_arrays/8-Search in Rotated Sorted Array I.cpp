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
    int search(vector<int> &nums, int k) {
       int low=0;
       int high=nums.size()-1;
       while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==k){
         return mid;
        }
       if(nums[low]<=nums[mid]){
        if(nums[low]<=k && k<=nums[mid]){
          high=mid-1;
        }
        else{
          low=mid+1;
        }
       }
       else{
        if(nums[mid]<=k && k<=nums[high]){
          low=mid+1;
        }
        else{
          high=mid-1;
        }

       }
    }
  }
};

int main() {
    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    Solution s;
   int ans = s.search(a,0);
  
    cout << "The index for search insert is: " <<ans<< endl;
    return 0;
}