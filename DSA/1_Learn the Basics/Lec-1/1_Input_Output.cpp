#include<iostream>
using namespace std;
class Solution {
public:
    void printNumber(int a) {
            cout<<a;
    }
};
int main()
{ int num;
  cin>>num;
  Solution s;
  s.printNumber(num);
}