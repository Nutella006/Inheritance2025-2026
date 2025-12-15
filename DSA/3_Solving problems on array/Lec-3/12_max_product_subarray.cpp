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
    int maxProduct(vector<int>& nums) {
      int ans=INT_MIN;
      int prefix=1;
      int suffix=1;

        for(int i=0;i<nums.size();i++){
         if(prefix==0){
          prefix=1;

         }
         if(suffix==0){
          suffix=1;
         }
         prefix=prefix*nums[i];
         suffix=suffix*nums[nums.size()-i-1];
         ans=max(ans,max(prefix,suffix));
        }
        return ans;
    }
};

    


int main() {
    vector<int> a = {5, 4, -3, 2, 1};
    Solution s;
    int product = s.maxProduct(a);

    cout << "The number of inversions are: " <<product<< endl;
    return 0;
}
