#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<long long >a(n);
    for(auto&i:a)cin>>i;

    //since we want each of our array elements to be >= the previous element, it is meaningless to start from the first position

    long long int ans=0;//stores the minimum number of modifications needed
    for(int i=1;i<n;++i){//working greedily   
        if(a[i-1]>a[i]){
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }

    cout<<ans;
    return 0;
}