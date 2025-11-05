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
    vector<int> mergeSort(vector<int>& nums) {
      mS(nums,0,nums.size()-1);
      return nums;
    }
   void mS(vector<int> &arr,int low,int high){
       if(low==high){
        return;
       }
       int mid=(low+high)/2;
       mS(arr,low,mid);
       mS(arr,mid+1,high);
       merge(arr,low,mid,high);
   }
   void merge(vector<int> &arr,int low,int mid,int high){
       vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high)
        {
          if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
          }
          else{
            temp.push_back(arr[right]);
            right++;
          }
        
        }
          while(left<=mid){
              temp.push_back(arr[left]);
            left++;
          }
           while(right<=high){
              temp.push_back(arr[right]);
            right++;
          }
          for(int i=low;i<=high;i++){
           arr[i]=temp[i-low];
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
  vector<int> sorted=s.mergeSort(myarray);
  for(int k=0;k<size;k++){
    cout<<myarray[k]<<" ";
  }
}