#include<bits/stdc++.h>
using namespace std;
int randomPartition(int arr[], int l, int h){
    int p = l + rand() % (h-l+1);
    swap(arr[p],arr[h]);
    int pivot = arr[h], i=l;

    for(int j=l;j<h;j++){
        if(arr[j]<=pivot) swap(arr[i++],arr[j]);
    }
    swap(arr[h],arr[i]);
    return i;
}

void randomizedQuickSort(int arr[], int l, int h){
    if(l<h){
        int p = randomPartition(arr,l,h);
        randomizedQuickSort(arr,l,p-1);
        randomizedQuickSort(arr,p+1,l);
    }
}

int main(){
    int arr[] = {10, 7, 8, 9, 1, 5, 2, 6, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    randomizedQuickSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << "\n";

}