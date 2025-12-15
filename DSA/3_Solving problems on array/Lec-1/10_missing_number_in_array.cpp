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
vector<int> quickSort(vector<int>& nums) {
 qs(nums,0,nums.size()-1);
 return nums;
    }
    int partition(vector<int> &arr,int low,int high){

      int pivot=arr[low];
      int i=low;
      int j=high;
      while(i<j){
        while(arr[i]<=pivot && i<=high-1){
          i++;
        }
        while(arr[j]>pivot && j>=low){
          j--;
        }
       if(i<j){
        swap(arr[i],arr[j]);
       }
      }
      swap(arr[low],arr[j]);
      return j;
    }
  void  qs(vector<int> &arr,int low,int high){
    if(low >= high) return;
  int Pindex=partition(arr,low,high);
  qs(arr,low,Pindex-1);
  qs(arr,Pindex+1,high);
  }
    int missingNumber(vector<int>& nums) {
        int range=nums.size();
        nums=quickSort(nums);
        for(int i=0;i<nums.size();i++){
        if(i!=nums[i]){
          cout<<i;
          break;
        }
        else if(i==nums.size()-1){
          cout<<nums.size();
        }
        }

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
      
  s.missingNumber(v);
 


}