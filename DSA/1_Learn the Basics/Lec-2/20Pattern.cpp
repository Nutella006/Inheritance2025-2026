#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int i=0;i<=(n-1);i++){
    for(int j=0;j<=(2*n-2);j++){
      if(j>=i && i+j<=(2*n-2)){
 cout<<" ";
    
      }
    
      else{
        cout<<"*";
      }
      
    }
    cout<<endl;
  }
   for(int i=1;i<=(n-1);i++){
    for(int j=0;j<=(2*n-2);j++){
      if(j>=(n-1-i) && j<=(n-1+i)){
 cout<<" ";
    
      }
    
      else{
        cout<<"*";
      }
      
     
    }
    cout<<endl;
  }

}