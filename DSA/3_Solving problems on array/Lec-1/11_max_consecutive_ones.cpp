#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countOne = 0;
        int maxOne = 0;
        int i = 0;
        int n = nums.size();

        while(i < n) {
            if(nums[i] == 1) {
                countOne++;
            } else {
                if(countOne > maxOne) {
                    maxOne = countOne;
                }
                countOne = 0;
            }
            i++;
        }

        if(countOne > maxOne) {
            maxOne = countOne;
        }

        return maxOne;
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

    cout << s.findMaxConsecutiveOnes(v);
    return 0;
}
