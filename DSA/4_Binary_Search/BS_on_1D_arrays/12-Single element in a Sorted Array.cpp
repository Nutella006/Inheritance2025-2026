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
    int singleNonDuplicate(vector<int> &nums) {
        
       if(nums.size()==1){
        return nums[0];
       }
       if(nums[0]!=nums[1]){
        return nums[0];
       }
       if(nums[nums.size()-1]!=nums[nums.size()-2]){
        return nums[nums.size()-1];
       }
       int low=1;
       int high=nums.size()-2;
       while(low<=high){
        int mid=(low+high)/2;
       if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
        return nums[mid];
       }
       else{
        if((mid%2==1 && nums[mid-1]==nums[mid])||(mid%2==0 && nums[mid+1]==nums[mid])){
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
    vector<int> a = {1,1,2,3,3,4,4,5,5};
    Solution s;
   int ans = s.singleNonDuplicate(a);
 cout<<"Single is "<<ans;
    
    return 0;
}