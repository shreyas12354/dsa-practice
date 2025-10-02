// 01 Game --- deleting adjacent 01 or 10 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int count0=0;
        int count1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') count0++;
            else count1++;
        }
        if(min(count0,count1)%2==1){
            cout << "DA" << endl;
        }
        else{
            cout << "NET" << endl;
        }
    }
}