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
    int findPeakElement(vector<int> &arr) {
      int low=0;
      int high=arr.size()-1;
      if(arr.size()==1){
        return 0;
      }
      if(arr[0]>arr[1]){
        return 0;
      }
      if(arr[arr.size()-1]>arr[arr.size()-2]){
        return arr.size()-1;
      }
      while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
          return mid;
        }
        else if(arr[mid]>arr[mid-1]){
          low=mid+1;
        }
        else{
          high=mid-1;
        }
      }
    }
};
int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    Solution s;
   int ans = s.findPeakElement(a);
 cout<<"Peak is "<<ans;
    
    return 0;
}