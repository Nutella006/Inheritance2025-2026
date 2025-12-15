#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;
class Solution {
public:
  void swapthem(vector<int>& v1,vector<int>& v2,int index1,int index2){
    if(v1[index1]>v2[index2]){
       swap(v1[index1],v2[index2]);
    }
  }
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
      int length=n+m;
      int gap=(length)/2 +length%2;
      int left=0;
      int right=left+gap;
      while(true){
        while(right<length){
        //left side and the right side
        if(left<n && right>=n){
          swapthem(nums1,nums2,left,right-n);
        }
        //both on right
        else if(left>=n && right>=n){
             swapthem(nums2,nums2,left-n,right-n);
        }
        //both left
        else{
           swapthem(nums1,nums1,left,right);

        }
        left++;
        right++;
      }
      if(gap==1){
        break;
      }
      gap=gap/2+gap%2;
      left=0;
      right=left+gap;
      }
      
    }
};
int main() {
    Solution s;
    int size1;
    cin>>size1;
    vector<int> v1(size1);
    for(int i=0;i<v1.size();i++){
      cin>>v1[i];
    
    }
    int size2;
    cin>>size2;
    vector<int> v2(size2);
    for(int m=0;m<v2.size();m++){
      cin>>v2[m];
    
    }
    s.merge(v1,size1,v2,size2);
    for(int i=0;i<v1.size();i++){
      cout<<v1[i];
    
    }
    for(int m=0;m<v2.size();m++){
      cout<<v2[m];
    
    }

 
  

   
    return 0;
}
