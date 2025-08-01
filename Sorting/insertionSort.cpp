#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        int cnt = i;
        while(j>=0 && temp<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertionSort(arr);
    cin.ignore(); // ignore leftover input
    cin.get();    // wait for Enter
    return 0;
}