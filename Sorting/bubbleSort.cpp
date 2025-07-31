#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        bool swapped = false;
        for(int j=0;j<n-i-1; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1], arr[j]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    //Print 

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubbleSort(arr);
    cin.ignore(); // ignore leftover input
    cin.get();    // wait for Enter
    return 0;
}