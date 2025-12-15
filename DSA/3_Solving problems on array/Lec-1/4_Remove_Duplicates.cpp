#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.size()==1) return 1;
        int count=1;
        for(int i=1;i<nums.size();i++){
          if(nums[i]!=nums[i-1]){
            count=count+1;
          }
        }
        return count;
    }
};


int main(){
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }

    Solution s;
    cout<<s.removeDuplicates(v);
}
