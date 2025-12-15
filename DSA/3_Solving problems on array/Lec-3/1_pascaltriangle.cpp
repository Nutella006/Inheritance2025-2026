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
    int pascalTriangleI(int r, int c) {
        long long result=1;
    for(int i=0;i<(c-1);i++){
        result=result*(r-1-i);
        result=result/(i+1);
    }
    return result;
    }
};


int main() {
    Solution s;
   cout<<s.pascalTriangleI(32,31);
    return 0;
}
