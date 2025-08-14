#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    cin >> a >> b;
    cout << max((b-1)*a, (a-1)*b) << endl;
}
