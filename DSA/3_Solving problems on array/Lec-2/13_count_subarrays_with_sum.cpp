#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
      int sum=0;
      int count=0;
        for(int i=0;i<nums.size();i++){
          for(int j=i;j<nums.size();j++){
            sum=sum+nums[j];
            if(sum==k){
              count=count+1;
            }
          
          }
            sum=0;
        }
        return count;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
vector<int> v(n);
    for (int r = 0; r < n; r++){
        
            cin >> v[r];
}
int k;
cin>>k;

    cout<< s.subarraySum(v,k);

}
