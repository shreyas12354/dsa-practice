#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> ans;
    int i = low, j = mid + 1;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            ans.push_back(arr[i]);
            i++;
        } else {
            ans.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        ans.push_back(arr[i]);
        i++;
    }

    while (j <= high) {
        ans.push_back(arr[j]);
        j++;
    }

    for (int k = 0; k < ans.size(); ++k) {
        arr[low + k] = ans[k];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return; // ✅ base case

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
