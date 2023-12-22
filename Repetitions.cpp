#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=(int)s.size();//find the longest repetition of 'A','C','G' or 'T' in the given string

    int bestAns=0,i=0;
    while(i<n){
        int j=i;//
        char c=s[i];
        while(j<n&&c==s[j]){//trying to find the longest sequence of same characters staring from position 'i'
            ++j;
        }
        bestAns=max(bestAns,(j-i));//comparing and if required, updating the value of the longest sequence
        i=j;
    }

    cout<<bestAns;
    return 0;
}