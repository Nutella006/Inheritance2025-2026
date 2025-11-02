#include<iostream>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
       
        int count=0;
        while(n!=0){
          
            n=n/10;
            count=count+1;
         

        }
        return count;
    }
};
int main(){
  Solution sol;
  int num;
  cin>>num;
 cout<< sol.countDigit(num);
}