#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) cin >> ar[i];
 
    int cnt = 0;
    bool possible = true;
 
    for(int i = 0;i<n-1; i++)
    {
		if(ar[i + 1] < ar[i])
		{
			if(((i + 1) & i) != 0)
			{
				cout << "NO" << endl;
				return;
			}
		}
	}
 
	cout << "YES" << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}