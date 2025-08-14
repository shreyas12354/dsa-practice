#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin>>n;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        int maxE = -1;
        int maxF = -1;
        for(auto it:freq){
            if(it.second > maxF){
                maxF = it.second;
                maxE = it.first;
            }
        }
        if(maxE == 1){
            cout << n-maxF << endl;
        }
        else{
            cout << 1 + n-maxF << endl;
        }
    }
}
