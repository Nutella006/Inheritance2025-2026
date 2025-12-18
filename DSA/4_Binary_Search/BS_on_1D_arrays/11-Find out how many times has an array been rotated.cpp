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
    int findKRotation(vector<int> &nums)  {
         int low=0;
         int index=nums.size();
       int high=nums.size()-1;
       int ans=INT_MAX;
       while(low<=high){
        int mid=(low+high)/2;
        if(nums[low]<nums[mid]){
          ans=min(ans,nums[low]);
         if(ans==nums[low]){
          index=low;
         }
          low=mid+1;
        }
        else {
          ans=min(ans,nums[mid]);
          if(ans==nums[mid]){
            index=mid;
          }
          high=mid-1;

        }

       }

    return index;
   
    }
};
int main() {
    vector<int> a = {7, 8, 1, 2, 3, 4, 5, 6};
    Solution s;
   int ans = s.findKRotation(a);
 cout<<"Number of Rotations is "<<ans;
    
    return 0;
}