#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
      int count=0;
        int check=n;
        int sum=0;
        int r;
        while(check!=0)
        {   
            check=check/10;
            count=count+1;
        }
      check=n;
        while(check!=0)
        { r=check%10;
        check=check/10;
        sum=sum+round(pow(r,count));
      
        }
        if(n==sum)
        {
            return true;
        }
        else
        {
            return false;
        }



        


    }
};
int main(){
  Solution sol;
  int num;
  cin>>num;
  cout<<sol.isArmstrong(num);
}