#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a[i] = x%2;
        }
        int maxL = 1;
        int last = a[0];
        for(int i=1;i<n;i++){
            if(a[i]!=last){
                maxL++;
                last = a[i];
            }
        }
        cout << maxL << endl;
    }
}
