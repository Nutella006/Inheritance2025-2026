#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  char ch='A';
 char chnew;
  for(int i=0;i<=(n-1);i++){
    for(int j=0;j<=(2*n-2);j++){
      if(j>=(n-1-i) && j<=(n-1+i)){
       if(j<=3){
      int k1=(j+i-(n-1));
      
       chnew=ch+k1;
       cout<<chnew;
       }
       else{
        int k2=((n-1)-(j-i));
        
        chnew=ch+k2;
        cout<<chnew;


       }
      }
    
      else{
        cout<<" ";
      }
      
     
    }
    cout<<endl;
  }
}