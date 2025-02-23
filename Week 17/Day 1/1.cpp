#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
 
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
 
        string s;
        char x = 97 ;
        while(k--)
        {
            s+=x;
            x++;
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            ans+=s;
        }
        cout << ans << endl;
    }
 
    return 0;
}
