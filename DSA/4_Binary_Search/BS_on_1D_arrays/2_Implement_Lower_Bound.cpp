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
    int lowerBound(vector<int> &nums, int x){
      int ans=x;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
          int mid=(low+high)/2;
        if(nums[mid]>=x) {
          ans=mid;
          high=mid-1;
        }

        if(nums[mid]<x) {
          low=mid+1;
        }
    }
    return ans;
}
};
    


int main() {
    vector<int> a = {10, 22, 35, 47, 55, 60, 72};
    Solution s;
    int index = s.lowerBound(a,20);

    cout << "The index for lowerbound is: " <<index<< endl;
    return 0;
}
