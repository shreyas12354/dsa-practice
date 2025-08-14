#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int maxE = -1;
        int maxI = 0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x>maxE){
                maxE = x;
                maxI = i;
            }
        }
        cout << maxI+1 << endl;
    }
}
