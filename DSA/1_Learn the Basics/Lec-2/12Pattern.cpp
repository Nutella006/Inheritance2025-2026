#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=(n-1);i++){
    for(int j=0;j<=(2*n-1);j++){
     if(j<=i && j<n){
    cout<<(j+1);
     }
     else if(i>=(2*n-1-j) && j>=n) 
     {
    cout<<(2*n-j);
     }
     else{
      cout<<" ";
     }
     

    }
    cout<<endl;
 
  }
}