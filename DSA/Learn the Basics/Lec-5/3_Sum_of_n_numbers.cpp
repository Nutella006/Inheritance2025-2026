#include<iostream>
using namespace std;

class Solution{	
	public:
		int NumbersSum(int N){
			if (N<1){
 return 0;
      }
      
           return (N+NumbersSum(N-1));
		}
};
int main()
{
  int num;
  cin>>num;
  Solution s;
  cout<<s.NumbersSum(num);
}