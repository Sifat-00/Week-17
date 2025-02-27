#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,even = 0;
        cin >> n >> k;
        int ans = k;
        for(int i=0;i<n;i++)
        {
            int val;;
            cin >> val;
            if(val%2==0) even++;
            if(val%k==0) ans = 0;
            ans = min(ans,k-val%k);
        }
        
        if(k==4)
        {
            if(even >= 2) ans = 0;
            else if(even == 1) ans = min(ans,1);
            else ans = min(ans,2);
        }
     
        cout << ans << endl;
    }
 
    return 0;
}