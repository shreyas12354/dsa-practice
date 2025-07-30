#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        
        int oddC=0;
        for(int i=0;i<n;i++){
            int el;
            cin >> el;
            if(el%2==1) oddC++;
        }
        if(oddC == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
