#include<bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(vector<int>&arr,int idx, int n){
    int temp = arr[idx];
    for(int i=idx;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1] = arr[i];
        }
        arr[]
    }

}

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    recursiveInsertionSort(arr, 0, n);
    //Print 

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cin.ignore(); // ignore leftover input
    cin.get();    // wait for Enter
    return 0;
}