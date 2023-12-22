#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>possibleAns;
    int currentElement=2;//greedy approach which stores all the odd elements first,and then the even elements
    while(currentElement<=n){
        possibleAns.push_back(currentElement);
        currentElement+=2;
    }

    currentElement=1;
    while(currentElement<=n){
        possibleAns.push_back(currentElement);
        currentElement+=2;
    }

    bool flag=1;
    for(int i=1;i<n;++i){
        if(abs(possibleAns[i]-possibleAns[i-1])==1)flag=0;
    }

    if(flag){
        for(auto i:possibleAns)cout<<i<<' ';
    }else{
        cout<<"NO SOLUTION";
    }
    return 0;
}