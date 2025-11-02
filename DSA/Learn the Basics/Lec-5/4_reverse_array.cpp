#include<iostream>
using namespace std;

class Solution{
public:
    int start = 0;
    int end;

    void reverse(int arr[], int n){

       end = n - 1;  

       swap(arr, n);
    }

    void swap(int arr[], int n) {
        if(start >= end) return;

        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;

        start++;
        end--;

        swap(arr, n);
    }
};

int main(){
    Solution s;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    s.reverse(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
