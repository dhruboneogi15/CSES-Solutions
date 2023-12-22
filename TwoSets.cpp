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
    int n;
    cin>>n;
    if(n*(n+1)/2%2){//if the sum to be divided is odd.... trivial case
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
    vi a(n);
    iota(all(a),0LL);//a->{0,1,2,3,....,n}

    if(n%4){//1,2,3
        vi b,c;
        b.eb(1);
        b.eb(2);
        c.eb(3);
        for(int i=3;i<n;i+=4){
            b.eb(a[i]);
            b.eb(a[i+3]);
            c.eb(a[i+1]);
            c.eb(a[i+2]);
        }
        cout<<b.size()<<'\n';
        for(int el:b) cout<<el<<' ';
        cout<<'\n'<<c.size()<<'\n';
        for(int el:c) cout<<el<<' ';
    }else{
        cout<<n/2<<'\n';
        for(int i=0;i<n/4;i++) cout<<a[i]<<' ';
        for(int i=n-1;i>=n-n/4;i--) cout<<a[i]<<' ';
        cout<<'\n'<<n/2<<'\n';
        for(int i=n/4;i<n-n/4;i++) cout<<a[i]<<' ';
        cout<<'\n';
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