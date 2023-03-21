#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,k,k2=0,sum=0,mini=0,i=1,sum2=0,ans=1,i2;
    cin>>n>>k;

    ll h[n+1];
    k2=k;

    while(k2--){

        cin>>h[i];
        sum+=h[i++];
    }
    mini=sum;
    n-=k;
    sum2=sum;

    while(n--){

    sum2=0;
    cin>>h[i];
    i2=i;
    k2=k;
    while(k2--){
       sum2+=h[i2--];
    }
    mini=min(sum2,sum);

    if(sum!=mini){
        ans=i2+1;
        sum=mini;
    }

    i++;

    }

    cout<<ans;


}
