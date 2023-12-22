#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ld double
#define vi  vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define ff first
#define ss second
#define vpii vector<pair<int,int>>
#define all(v) v.begin(),v.end()
#define eb emplace_back
#define endl '\n'
const int M=1e9+7;
const ld eps = 1e-9;
const int N=200200;
void solve(){// a(n) = (n - 1)*(n + 4)*(n^2 - 3*n + 4)/2[derived from oeis.org]
    int n;
    cin>>n;
    cout<<0<<'\n';
    for(int i=2;i<=n;i++){
        int ans=(i-1)*(i+4)*(i*i-3*i+4)/2;
        cout<<ans<<'\n';
    }
     
}	
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	// sieve();
	int t=1;
	// std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}