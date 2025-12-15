#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
    int count=0;
    int sum=0;
    int r,q;
    int check=n;
        while(check!=0)
        {
            check=check/10;
            count=count+1;
        }
        while(n!=0){
         r=n%10;
         q=n/10;
         sum=sum+r*(pow(10,count-1));
         count=count-1;
         n=q;
        }
      return sum;
    }
};
int main(){
  Solution s;
  int num;
  cin>>num;
 cout<< s.reverseNumber(num);
}