#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap(arr[j], arr[i]);
            }
        }
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
    selectionSort(arr);
    cin.ignore(); // ignore leftover input
    cin.get();    // wait for Enter
    return 0;
}