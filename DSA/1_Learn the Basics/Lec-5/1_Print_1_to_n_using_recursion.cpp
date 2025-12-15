#include<iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int n) {
        print(1, n); 
    }

private:
    void print(int i, int n) {
        if (i > n) return;       
        cout << i << endl;        
        print(i + 1, n);         
    }
};
int main()
{
  Solution s;
  int num;
  cin>>num;
  s.printNumbers(num);
}