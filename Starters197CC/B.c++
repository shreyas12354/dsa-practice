#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n,x,y;
        cin >> n >> x >> y;
        int ans=0;
        
        for(int i=0;i<n;i++){
            int el;
            cin >> el;
            if(el>=x && el<=y) ans++;
        }
        cout << ans << endl;
    }
}
