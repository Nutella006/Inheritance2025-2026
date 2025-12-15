#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
      int r;
        int p;
        int count = 0;
        vector<int> vec;
        int original = n; 

        while (n != 0) {
            r = n % 10;
            vec.push_back(r);
            n = n / 10;
        }

        int size = vec.size(); 

        if (size % 2 == 0) {
            p = (size / 2) - 1;
        } else {
            p = (size / 2);
        }

        for (int i = 0; i <= p; i++) {
            if (vec[i] != vec[size - 1 - i]) {
                count = count + 1;
            }
        }

        if (count == 0) {
            return true; 
        } else {
            return false;
        }
    }
};
int main(){
  Solution sol;
  int num;
  cin>>num;
  if(sol.isPalindrome(num)){
    cout<<"true";
  }
 else{
  cout<<"false";
 }
}