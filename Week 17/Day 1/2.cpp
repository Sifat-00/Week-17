#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n;  
        cin >> n;
        string str1, str2;  
        cin >> str1 >> str2;
        
        int one = 0, count = 0, one2 = 0;
        
        for (int i = 0; i < n; i++) 
        {
            if (str1[i] == '1') one++;
            if (str2[i] == '1') one2++;
            if (str2[i] != str1[i] && str2[i] == '1') count++;
        }
        
        int ans = count;
        
        if (one > one2) ans += (one - one2);
        
        cout << ans << endl;
    }
}