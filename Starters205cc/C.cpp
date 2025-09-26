// triplet maximization

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int x,y;
        cin >> x >> y;
        if(y>=(x+y)/3){
            cout << 2*(x+y)/3 << endl;
        }
        else{
            cout << 2*y + x-(2*(x+y)/3) << endl;
        }
    }
}
