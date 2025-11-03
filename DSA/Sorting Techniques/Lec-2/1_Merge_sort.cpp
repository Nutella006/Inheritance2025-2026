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
    vector<int> mergeSort(vector<int>& nums) {

    }
};


int main()
{
  Solution s;
  int size;
  cin>>size;
  vector<int> myarray(size);
  for(int k=0;k<size;k++){
    cin>>myarray[k];
  }
  vector<int> sorted=s.mergeSort(myarray);
  for(int k=0;k<size;k++){
    cout<<myarray[k]<<" ";
  }
}