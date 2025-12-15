#include<iostream>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
       int comp;
        int gcd;
        int less;
      if(n1>n2)
        {
            comp=n1;
            less=n2;
        }
        else{
            comp=n2;
            less=n1;
        }
        for(int i=less;i>=1;i--)
        {
            if(comp%i==0 && less%i==0){
                gcd=i;
                break;

            }
        }
        cout<<gcd;

    }
};
int main(){
  Solution sol;
  int num1,num2;
  cin>>num1>>num2;
  sol.GCD(num1,num2);
}