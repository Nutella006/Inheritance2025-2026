#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int side;
    cin >> side;

    for(int i = 0; i < (2*side-1); i++){
        for(int j = 0; j < (2*side-1); j++){
            int top = i;
            int left = j;
            int right = (2*side-2) - j;
            int down = (2*side-2) - i;

            cout << (side - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}
