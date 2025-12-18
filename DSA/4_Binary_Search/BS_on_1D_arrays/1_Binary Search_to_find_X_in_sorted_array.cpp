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
   int binary_search(vector<int> &nums,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(nums[mid]==target) return mid;
    if(nums[mid]>target) return binary_search(nums,mid+1,high,target);
    if(nums[mid]<target) return binary_search(nums,low,mid-1,target);
   }
    int search(vector<int> &nums, int target){
     binary_search(nums,0,nums.size()-1,target);
    }
};

    


int main() {
    vector<int> a = {5, 4, -3, 2, 1};
    Solution s;
    int index = s.search(a,-3);

    cout << "The index for target is: " <<index<< endl;
    return 0;
}
