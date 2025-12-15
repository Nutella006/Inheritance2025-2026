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
    bool isSorted(vector<int>& nums) {
      vector<int> mypreviousarray=nums;
       qs(nums,0,nums.size()-1);
       return (mypreviousarray==nums);
      
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

 if(s.isSorted(myarray)){
  cout<<"True";
 }
 else{
  cout<<"False";
 }
}