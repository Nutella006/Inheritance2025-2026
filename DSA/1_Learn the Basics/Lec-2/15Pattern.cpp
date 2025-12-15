#include<iostream>
using namespace std;
int main(){
  int n;
  char ch='A';
  cin>>n;
  for(int i=0;i<=(n-1);i++){
    for(int j=0;i+j<=(n-1);j++){
         char chnew;
      chnew=ch+j;
 cout<<chnew;
      
     
    }
    cout<<endl;
  }
}