#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {

        long long n = nums.size();
        long long S1 = n * (n + 1) / 2;                        
        long long S2 = n * (n + 1) * (2 * n + 1) / 6;          
        long long sum = 0, square = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            square += 1LL * nums[i] * nums[i];
        }

        long long val1 = sum - S1;        
        long long val2 = square - S2;       

        long long RplusM = val2 / val1;     
        long long R = (val1 + RplusM) / 2;  
        long long M = R - val1;             

        return { (int)R, (int)M };
    }
};

int main() {
    Solution s;
    vector<int> ans = s.findMissingRepeatingNumbers({1,1,2,3,4,6});
    
    cout << "Repeating: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}
