#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
using namespace std;
class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
      int diff=0;
      int maxprofit=0;
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i>j){
         diff=arr[i]-arr[j];
        }
        if(maxprofit<diff){
          maxprofit=diff;
        }
        
      }
     }
     return maxprofit;
}
};


int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }
   
    cout<< s.stockBuySell(v,n);
    return 0;
}