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
    vector<int> bubbleSort(vector<int>& nums) {
      recBubbleSort(nums,nums.size());
      return nums;
      
}
void recBubbleSort(vector<int>& arr,int length){
  if (length==1) return;
  int swapped=0;
   for(int j=0;j<(length-1);j++){
        if(arr[j]>arr[j+1]){
          int temp;
          temp=arr[j+1];
          arr[j+1]=arr[j];
        arr[j]=temp;
         swapped=1;
        }
       
        
    }
     if(!swapped) return;

        recBubbleSort(arr,length-1);
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
  vector<int> sorted=s.bubbleSort(myarray);
  for(int k=0;k<size;k++){
    cout<<myarray[k]<<" ";
  }
}