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
    string s;
    cin>>s;
    
    vi cnt(26,0);
    for(auto c:s)cnt[c-'A']++;
    char prob='*';
    for(int i=0;i<26;++i){
        if(cnt[i]%2==0)continue;
        if(prob=='*'){
            prob=(char)(i+'A');
        }else{
            cout<<"NO SOLUTION\n";
            return;
        }
    }
    
    // for(auto el:cnt)cout<<el<<' ';
    deque<char>ans;
    if(prob!='*'){
        while(cnt[prob-'A']){
            ans.push_front(prob);
            cnt[prob-'A']--;
        }
    }

    for(int i=0;i<26;++i){
        if(cnt[i]){
            int x=cnt[i],y=x/2;
            while(y--)ans.push_front((char)(i+'A'));
            y=x/2;
            while(y--)ans.push_back((char)(i+'A'));
        }
    }

    while(ans.size()){
        cout<<ans.front();
        ans.pop_front();
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