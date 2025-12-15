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
    vector<int> selectionSort(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
        int mini=nums[i];
        int jpos=i;
             for(int j=i+1;j<nums.size();j++)
             if(nums[j]<mini){
              mini=nums[j];
              jpos=j;
            
             }
             int temp;
             temp=nums[i];
             nums[i]=nums[jpos];
             nums[jpos]=temp;


      }
  return nums;
    }
  
};
int main()
{
  Solution s;
  int size;
  cin>>size;
  vector<int> myarray(size);
  for(int k=0;k<size;k++){
    cin>>myarray[k];
  }
  vector<int> sorted=s.selectionSort(myarray);
  for(int k=0;k<size;k++){
    cout<<myarray[k];
  }
}