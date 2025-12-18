#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include<climits>

using namespace std;
class Solution {
public:
   bool searchInARotatedSortedArrayII(vector<int>& arr, int k) {
     int low=0;
       int high=arr.size()-1;
       while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
         return 1;
        }
        if(arr[mid]=arr[low]==arr[high]){
          low=low+1;
          high=high-1;
          continue;
        }
       if(arr[low]<=arr[mid]){
        if(arr[low]<=k && k<=arr[mid]){
          high=mid-1;
        }
        else{
          low=mid+1;
        }
       }
       else{
        if(arr[mid]<=k && k<=arr[high]){
          low=mid+1;
        }
        else{
          high=mid-1;
        }

       }
    }
    return 0;
   }
  };
int main() {
    vector<int> a = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    Solution s;
   bool ans = s.searchInARotatedSortedArrayII(a,3);
  if(ans){
    cout << "True " <<endl;
  }
  else{
    cout << "False " <<endl;
  }
    
    return 0;
}