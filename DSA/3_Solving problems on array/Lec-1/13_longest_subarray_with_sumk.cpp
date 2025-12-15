#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
      int mynewlength=0;
      int j;
        for(int i=0;i<nums.size();i++){
          int sum=0;
          for(j=i;j<nums.size();j++){
            sum=sum+nums[j];
          }
          if(sum==k){
           mynewlength=max(mynewlength,j-i+1);
          }
        }
        return mynewlength;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
    int k;
    cin>>k;

    cout << s.longestSubarray(v,k);
    return 0;
}
