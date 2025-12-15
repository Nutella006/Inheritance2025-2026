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
     RecinsertionSort(nums,0,nums.size());
     return nums;
    }


    void RecinsertionSort(vector<int>& arr,int i,int n) {
    if (i==n) return;
      for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
           int temp;
          temp=arr[j-1];
          arr[j-1]=arr[j];
        arr[j]=temp;
        }
        
    
}
i=i+1;
      RecinsertionSort(arr,i,n);
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