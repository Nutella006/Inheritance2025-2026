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
    vector<int> insertionSort(vector<int>& nums) {
     for(int i=0;i<nums.size();i++){
      for(int j=i;j>0;j--){
        if(nums[j]<nums[j-1]){
           int temp;
          temp=nums[j-1];
          nums[j-1]=nums[j];
        nums[j]=temp;
        }
     }
    }
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
  vector<int> sorted=s.insertionSort(myarray);
  for(int k=0;k<size;k++){
    cout<<myarray[k]<<" ";
  }
}