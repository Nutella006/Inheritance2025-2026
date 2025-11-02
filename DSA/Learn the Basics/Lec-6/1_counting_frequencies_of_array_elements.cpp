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
    vector<vector<int>> countFrequencies(vector<int>& nums) {
       
       int mx = *max_element(nums.begin(), nums.end());
       vector<vector<int>> myvec;
       
       int hash[mx+1] = {0};

       for(int i = 0; i < nums.size(); i++){  
            hash[nums[i]]++;
       }

       for(int j = 0; j <= mx; j++){          
            if(hash[j] != 0){
                myvec.push_back({j, hash[j]});
            }
       }
       return myvec;  
    }
};

int main(){
    int n;
    cin >> n;

    vector<int> v(n);   
    for(int r = 0; r < n; r++){
        cin >> v[r];
    }

    Solution s;
    vector<vector<int>> myvec1 = s.countFrequencies(v);

    for(int k = 0; k < myvec1.size(); k++){
        for(int l = 0; l < myvec1[k].size(); l++){
            cout << myvec1[k][l] << " ";
        }
        cout << endl;
    }
}
