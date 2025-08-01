#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr, int low, int mid, int high){
    vector<int>ans;
    while(low<=mid && mid<=high){
        if(arr[low]<=arr[high]){
            ans.push_back(arr[low]);
            low++;
        }
        else{
            ans.push_back(arr[high]);
            mid++;
        }
    }
    while(low<=mid){
        ans.push_back(arr[low]);
        low++;
    }
    while(mid<=high){
        ans.push_back(arr[mid]);
        mid++;
    }
}

void mergeSort(vector<int>&arr, int low, int high){
    int mid = (low+high)/2;

    mergeSort(arr, low, mid);

    mergeSort(arr,mid+1,high);

    merge(arr, low, mid, high);
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin.ignore(); // ignore leftover input
    cin.get();    // wait for Enter
    return 0;
}