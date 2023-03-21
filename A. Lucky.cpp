#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        if(n/100000+n/10000-(n/100000)*10+n/1000-(n/10000)*10==n/100-(n/1000)*10+n/10-(n/100)*10+n-(n/10)*10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
