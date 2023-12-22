#include<bits/stdc++.h>


using namespace std;


int main(){
    long long int n;//initialising with long long so as to avoid cases of overflow
    cin>>n;//taking the number as input 

    while(n!=1){
        cout<<n<<' ';//print the current number
        if(n%2==0){//if current 'n' is even
            n/=2;//divide it by 2
        }else{// if odd
            n=n*3+1;
        }
    }
    cout<<1<<'\n';//printing 1 as the last number

    return 0;
}