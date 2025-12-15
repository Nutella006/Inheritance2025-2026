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
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unionpart={};
       nums1=quickSort(nums1);
       nums2=quickSort(nums2);
      int i=0;
     int j=0;
     int end1=nums1.size()-1;
     int end2=nums2.size()-1;
    while(i<=end1 && j<=end2){
      if(nums1[i]>nums2[j]){
        if(unionpart.size()!=0 && nums2[j]!=unionpart.back()){
            unionpart.push_back(nums2[j]);
          
        }
            if(unionpart.size()==0){
           unionpart.push_back(nums2[j]);
          
        }
       j=j+1;
      }
      else{
        if(unionpart.size()!=0 && nums1[i]!=unionpart.back()){
            unionpart.push_back(nums1[i]);
          
        }
        else if(unionpart.size()==0){
           unionpart.push_back(nums1[i]);
        }
          
       i=i+1;
        
      }

    }
while(i<=end1){
  if(nums1[i]!=unionpart.back()){
            unionpart.push_back(nums1[i]);
           
}
i=i+1;
}
while(j<=end2){
 if(unionpart.size()!=0 && nums2[j]!=unionpart.back()){
            unionpart.push_back(nums2[j]);
          
        }
        j=j+1;
}
return unionpart;
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
       int n2;
    cin >> n2;

    vector<int> v2(n2);   
    for(int r = 0; r < n2; r++){
        cin >> v2[r];
    }

     vector<int> myunion=s.unionArray(v,v2);
 
    for(int r = 0; r < myunion.size(); r++){
        cout << myunion[r]<<" ";
    }
 


}