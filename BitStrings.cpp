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

int binpow(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }

    return ans;
}

void solve(){
    int n;
    cin>>n;
    cout<<binpow(2,n)<<'\n';
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