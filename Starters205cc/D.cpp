// Unreachable

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        bool evenHasOne=false,oddHasOne = false;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(i%2==0 && x==1){
                evenHasOne = true;
            }
            else if(i%2==1 && x==1){
                oddHasOne = true;
            }
        }
        if(evenHasOne && oddHasOne) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}
