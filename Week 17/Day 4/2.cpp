#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
{
        int n,k;
        cin>>n>>k;
        if(n==1)
{
            cout<<1<< endl <<1 << endl;
        }
        else if(k==1 || n==k)
{
            cout<< -1 << endl;
        }
        else
{
            if(k%2==0)
{
                cout<<3<< endl;
                cout<<1<<" "<<k<<" "<<k+1<< endl;
            }
            else{
                cout<<5<< endl;
                cout<<1<<" "<<k-1<<" "<<k<<" "<<k+1<<" "<<n<< endl;
            }
        }
    }
    return 0;
}