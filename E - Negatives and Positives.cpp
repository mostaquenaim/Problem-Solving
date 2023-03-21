#include<bits/stdc++.h>

using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solve(){
    ll n;

    cin>>n;

    bool flag=false,negflag=false;
    ll a[n+1],minNeg=1000000001,NegCount=0,sum=0;

    int i=0;
    while(n--){
        cin>>a[i];

        if(abs(a[i])<minNeg){
                if(flag){
                sum+=2*abs(minNeg);
            }
            minNeg=abs(a[i]);
            sum-=abs(a[i]);
            flag=true;

           // cout<<sum<<endl;
        }

        else{

        sum+=abs(a[i]);
        }

        if(a[i]<0)
        {
            NegCount++;
            negflag=true;
        }



        i++;
    }

    if((flag && NegCount==0) || (negflag&&NegCount%2==0)) sum+=2*abs(minNeg);

    cout<<sum<<endl;




}

int main(){
	int t;
	cin>>t;
   // t=1;
	while(t--){
		solve();
}
}
