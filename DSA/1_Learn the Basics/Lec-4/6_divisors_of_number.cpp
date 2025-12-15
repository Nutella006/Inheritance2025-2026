#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
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
      
      return vec;

    }
  };
    int main(){
      Solution s;
      int num;
      cin>>num;
      vector<int> div=s.divisors(num);
      for(int i=0;i<div.size();i++){
        cout<<div[i]<<" ";
      }

    }