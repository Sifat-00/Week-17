#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
    cin >> n >> x;
 
    vector<int> ar(n+1);
ar[0] = 0;
    for(int i = 1;i<=n; i++)
    {
        cin >> ar[i];
    }
 
    int ans = 0;
    
    for(int i = 1; i<=n; i++)
    {
        ans = max(ans,ar[i]-ar[i-1]);
    }
 
    ans= max(ans,2*(x-ar[n]));
 
    cout <<ans << endl;
    	
    }
 
    return 0;
}
