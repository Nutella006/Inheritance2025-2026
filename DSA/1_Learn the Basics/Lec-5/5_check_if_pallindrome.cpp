#include<iostream>
using namespace std;

class Solution{	
  public:
    int start = 0;
    int end;
	public:		
  
    void swap(string& s,  int n) {
        if(start >= end) return;

        int t = s[start];
        s[start] = s[end];
        s[end] = t;

        start++;
        end--;

        swap(s, s.size());
    }
		bool palindromeCheck(string& s){
      string mystring=s;
      end = s.size() - 1;  

       swap(s, s.size());
       if(s==mystring){
        return true;
       }
       else{
        return false;
       }
    
    }
};
int main(){
  Solution s;
  string mystr;
  cin>>mystr;
  cout<<s.palindromeCheck(mystr);
}

