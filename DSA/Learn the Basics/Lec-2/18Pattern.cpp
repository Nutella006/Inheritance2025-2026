#include<iostream>
using namespace std;
int main(){
  int n;
  int k;
  char ch='A';
  char chnew;
  cin>>n;
  for(int i=0;i<=(n-1);i++){
    for(int j=0;i>=j;j++){
     k=4-(i-j);
      chnew=ch+k;
 cout<<chnew;
      
     
    }
    cout<<endl;
  }
}