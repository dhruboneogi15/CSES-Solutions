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
void solve(){
    int a,b;
    cin>>a>>b;
    if((a+b)%3){
        cout<<"NO\n";
        return;
    }
    int x=min(a,b),y=max(a,b);
    cout<<(2*x>=y?"YES\n":"NO\n");
}	
 
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	// sieve();
	int t=1;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}