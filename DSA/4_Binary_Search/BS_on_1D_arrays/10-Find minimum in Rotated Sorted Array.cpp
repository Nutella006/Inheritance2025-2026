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
    int findMin(vector<int> &arr)  {
       int low=0;
       int high=arr.size()-1;
       int ans=INT_MAX;
       while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<arr[mid]){
          ans=min(ans,arr[low]);
          low=mid+1;
        }
        else {
          ans=min(ans,arr[mid]);
          high=mid-1;

        }

       }

    return ans;
   
    }
};
int main() {
    vector<int> a = {7, 8, 1, 2, 3, 4, 5, 6};
    Solution s;
   int ans = s.findMin(a);
 cout<<"Minimum element"<<ans;
    
    return 0;
}