// Gravity Flip -- Just sort
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}