#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,t,i=0,j=0,sum=0,count=0,maxB=0;
    cin>>n>>t;
    int a[n];





    while(n--){
        cin>>a[i];
//cout<<"a="<<a[i]<<" sum="<<sum<<" count="<<count<<" max="<<maxB<<endl;
        if(sum+a[i]<=t){
            sum+=a[i];

            count++;
            maxB=max(maxB,count);

        }

        else if(a[i]<=a[i-count]){
            sum+=a[i]-a[i-count];
        }
        else{
            const int fixA=maxB;
        }
        i++;
    }

    const int fixA=maxB;

    cout<<fixA;
}
int main()
{
    int t;
    t=1;

    while(t--){

        solve();
    }



}
