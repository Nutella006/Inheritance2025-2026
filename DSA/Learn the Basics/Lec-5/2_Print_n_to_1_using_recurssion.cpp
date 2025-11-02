#include<iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int n) {
 if (n < 1) return;
        cout << n << " ";
        printNumbers(n - 1);
   }
       
    };
int main()
{
  int num;
  cin>>num;
  Solution s;
  s.printNumbers(num);
}
