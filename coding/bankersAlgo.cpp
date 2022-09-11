#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll process,resource;
    cin>>process>>resource;
    ll req[process+1][resource+1];
    ll allo[process+1][resource+1];
    ll need[process+1][resource+1];
    vector<ll> avail(resource);
    for (ll i=0;i<process;i++){
        for(ll j=0;j<resource;j++)
        {
            cin>>req[i][j];
        }
    }
    for (ll i=0;i<process;i++){
        for(ll j=0;j<resource;j++)
        {
            cin>>allo[i][j];
        }
    }
    for(ll i=0;i<resource;i++)
        cin>>avail[i];
    for (ll i=0;i<process;i++){
        for(ll j=0;j<resource;j++)
        {
            need[i][j]=req[i][j]-allo[i][j];
        }
    }
    return 0;
}
