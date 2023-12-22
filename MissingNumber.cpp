#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    //given all distinct numbers(except one)between 1 to n, we have to find the missing number 
    
    long long int available_sum=0,total_sum=0;
    //we know, sum of all numbers from 1 to n= n*(n+1)/2
    //so if we simply subtract the available sum from the total sum, we will get our requird number

    total_sum=n*(n+1)/2;
    n-=1;//since we will be given a stream of (n-1) numbers
    while(n--){
        int x;
        cin>>x;
        available_sum+=x;
    } 

    cout<<total_sum-available_sum<<'\n';

    return 0;
}