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
    int maxLen(vector<int>& arr) {
    int maxi=0;
    int sum=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
      sum=sum+arr[i];
      if(sum==0){
        maxi=i+1;
      }
      else if(mpp.find(sum)!=mpp.end()){
        maxi=max(maxi,i-mpp[sum]);

      }
      else{
        mpp[sum]=i;
      }
    }
    return maxi;

    }
};

int main() {
    Solution s;
    int size;
    cin>>size;
    vector<int> v(size);
    for(int i=0;i<v.size();i++){
      cin>>v[i];
    }
   cout<<s.maxLen(v);

   
    return 0;
}
