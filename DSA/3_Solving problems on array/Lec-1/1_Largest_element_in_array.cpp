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
    int largestElement(vector<int>& nums) {
     int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
           if(nums[i]>maxi){
            maxi=nums[i];
           }
        }
        return maxi;
    }
};
      


int main()
{
  Solution s;
  int size;
  cin>>size;
  vector<int> myarray(size);
for(int i=0;i<size;i++){
  cin>>myarray[i];
}

 cout<<s.largestElement(myarray);
}