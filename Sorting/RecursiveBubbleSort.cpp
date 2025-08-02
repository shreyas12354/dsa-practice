#include<bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int>&arr,int high){
        if(high == 1) return;
            for(int j=0;j<high-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
            recursiveBubbleSort(arr, high-1);
        }

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    recursiveBubbleSort(arr, n);
    //Print 

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cin.ignore(); // ignore leftover input
    cin.get();    // wait for Enter
    return 0;
}