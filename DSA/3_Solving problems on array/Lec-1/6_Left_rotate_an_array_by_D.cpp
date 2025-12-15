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
  void rotateArray(vector<int>& nums, int k) {
    vector<int> copy=nums;
   int rotate=k%nums.size();
     for(int i=0;i<nums.size();i++){
      int shift=i-rotate;
        if(shift<0){
          nums[nums.size()+shift]=copy[i];
        }
        else{
          nums[shift]=copy[i];
        }
        }
          for(int r = 0; r < nums.size(); r++){
       cout<<nums[r]<<" ";
    }
    }
    
};
int main(){
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
    int d;
    cin>>d;

    Solution s;
   s.rotateArray(v,d);
}
