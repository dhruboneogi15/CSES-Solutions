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
    /*
        we are interested in the number of trailing zeroes in the number, which implies that we need the number of 2's and 5's
        so we need to check how many times each number from 1 to n contributes 2 and 5...
        (essentially, we need only the min of these 2 values)

        every no div by 5 contributes once to the ans
        every no div by 25 contributes twice to the ans
        every no div by 125 contributes thrice to the ans
        . 
        .
        . 
    */
    //ans is simply (n/5)+(n/25)+(n/125)+....
    int ans=0;
    for(int i=5;i<=n;i*=5){
        ans+=n/i;
    }
    cout<<ans;
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