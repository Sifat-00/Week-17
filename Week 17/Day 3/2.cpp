#include <bits/stdc++.h>
using namespace std;

int main()
{
   
   int t;
cin>>t;
   while(t--){
      int n;
cin>>n;
      int k;
cin>>k;
      vector<int> a(n);
      for(int i=0;i<n;i++)
{
         cin>>a[i];
      }

      vector<int> suff(n,0);
      suff[n-1]=1;
      for(int i=n-2;i>=0;i--)
{
         suff[i]=suff[i+1]+(a[i]==a[n-1]);
      }

      if(a[0]==a[n-1])
{
         if(suff[0]%k==0 or suff[0]>=k)
{
            cout<<"YES"<<endl;
            continue;
         }
      }

      bool ok=false;
      int cnt=0;
      for(int i=0;i<=n-2;i++)
{
         cnt+=(a[i]==a[0]);
         if(cnt%k==0 and suff[i+1]>=k)
{
            ok=true;
            break;
         }
      }

      if(ok)
{
         cout<<"YES"<<endl;
      }
      else
{
         cout<<"NO"<<endl;
      }


   }
   return 0;
}
