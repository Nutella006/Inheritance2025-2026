#include<iostream>
using namespace std;

class Solution {
public:
    void whichWeekDay(int day) {
        if(day>7 || day<1)
        {
            cout<<"Invalid"<<endl;
        }
        else{
            switch(day)
            {
                case 1:
                cout<<"Monday"<<endl;
                break;
                case 2:
                cout<<"Tuesday"<<endl;
                break;
                case 3:
                cout<<"Wednesday"<<endl;
                break;
                case 4:
                cout<<"Thursday"<<endl;
                break;
                case 5:
                cout<<"Friday"<<endl;
                break;
                case 6:
                cout<<"Saturday"<<endl;
                break;
                default:
                cout<<"Sunday"<<endl;
                
            }
        }
    }
};
int main(){
  Solution s;
  int day;
  cin>>day;
  s.whichWeekDay(day);
}