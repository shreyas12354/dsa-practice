//A
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,a,b;
    cin >> n >> a >> b;
    
    cout << n-(a*b) << endl;
}

// B
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >> k;
        vector<int>c(n);
        for(int i=0;i<n;i++) cin >> c[i];
        
        sort(c.begin(), c.end(), greater<int>());
        int ans=0;
        
        for(int i=0;i<k;i++){
            ans+=c[i];    
        }
        cout << ans << endl;
    }
}
//C
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = a[i] + a[j];
                if(sum == 2 || sum == 3 || sum == 5){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    } 
}
//D
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int ans = n-2;
        cout << ans << " " << (ans*ans+ans)/2 << endl;
    }
}
