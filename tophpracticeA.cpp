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
                if(flag){ ///প্রথমবার যাতে না হয়
                sum+=2*abs(minNeg); ///আগে বিয়গ করা হয়েছে তাই ডাবল যোগ করব
            }
            minNeg=a[i]; ///সবচেয়ে ছোট হবে a[i]
            sum-=abs(a[i]); ///সবচেয়ে ছোট টা বিয়গ করা হয়েছে
            flag=true; ///প্রথম্বার ডান
        }

        else{
                ///যদি সবচেয়ে ছোট না হয় তাহলে যোগ

        sum+=abs(a[i]);
        }

        if(a[i]<0)
        {
            ///যদি ঋণাত্মক হয় তাহলে কাউন্ত বাড়বে
            NegCount++;
            negflag=true;
        }

        i++;
    }

    if((flag && NegCount==0)  /* সব যদি পজিটিভ হয় তাহলে যেটা মাইনাস হইসে ঐটা আবার অ্যাড হবে */ || (negflag&&NegCount%2==0) /* যদি জোড় সংখ্যক ঋণাত্মক থাকে তাহলেও ডাবল হবে  */) sum+=2*abs(minNeg);

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
