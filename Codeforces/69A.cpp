#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    int x_tot=0,y_tot=0,z_tot =0;
    
    for(int i=0;i<n;i++){
        int x,y,z;
        cin >> x >> y >> z;
        x_tot+=x;
        y_tot+=y;
        z_tot+=z;
    }
    if(x_tot == 0 && y_tot == 0 && z_tot == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
