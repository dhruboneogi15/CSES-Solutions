#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    
    while(tc--){
        long long r,c;
        cin>>r>>c;
        if(r<c){
            if(c%2){
                cout<<c*c-r+1<<'\n';
            }else{
                cout<<(c-1)*(c-1)+r<<'\n';
            }
        }else{
            if(r%2==0){
                cout<<r*r-c+1<<'\n';
            }else{
                cout<<(r-1)*(r-1)+c<<'\n';
            }
        }
    }


    return 0;
}