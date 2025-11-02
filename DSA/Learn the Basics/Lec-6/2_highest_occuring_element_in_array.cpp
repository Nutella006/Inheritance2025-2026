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
    int mostFrequentElement(vector<int>& nums) {
 int mx = *max_element(nums.begin(), nums.end());
 int freq=0;
 int num;
       vector<vector<int>> myvec;
       
       int hash[mx+1] = {0};

       for(int i = 0; i < nums.size(); i++){  
            hash[nums[i]]++;
            if(hash[nums[i]]>freq){
               freq=hash[nums[i]];
                num=nums[i];
            }
       }
       return num;
    }
};
int main(){
  Solution s;
   int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
  cout<<s.mostFrequentElement(v);
    
}
