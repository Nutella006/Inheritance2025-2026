#include<iostream>
using namespace std;
class Solution {
  public:
  int num=1;
  int fibnum=1;
public:
    int fib(int n) {
     if(n==0 || n==1){
      return 1;
     }
     return (fib(n-1)+fib(n-2));
    }
  };
  int main(){
    int num;
    Solution s;
    cin>>num;
    cout<<s.fib(num);
  }
