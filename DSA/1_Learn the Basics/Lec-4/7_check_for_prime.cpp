#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
            int check;
        vector<int> vec;
      if(n%2==0)
      {
       check=n/2;
      }
      else
      {
  check=(n+1)/2;
      }
      for(int i=1;i<=check;i++)
      {
        if(n%i==0)
{
    vec.push_back(i);
}


      }
      vec.push_back(n);
      if(vec.size()==2)
      {
        return true;
      }
      else{
        return false;
      }
    }
};
int main(){
  Solution s;
  int num;
  cin>>num;
  cout<<s.isPrime(num);
}