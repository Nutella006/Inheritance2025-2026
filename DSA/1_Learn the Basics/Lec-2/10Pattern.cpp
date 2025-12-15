#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=(n-1);i++){
    for(int j=0;i>=j;j++){
      
 cout<<"*";
      
     
    }
    cout<<endl;
  }
   for(int i=0;i<=(n-2);i++){
    for(int j=0;i+j<=(n-2);j++){
      
 cout<<"*";
      
     
    }
    cout<<endl;
  }

}