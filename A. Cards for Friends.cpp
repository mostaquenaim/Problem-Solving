#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solve(){
    int w,h,n,count=1;
    cin>>w>>h>>n;



    while(1){
        if(w%2==0){
            count*=2;
            w/=2;
        }
        else break;
    }
    while(1){
          //  cout<<h<<endl;
        if(h%2==0){
            count*=2;
            h/=2;
           // cout<<count<<endl;
        }
        else break;
    }


    if(n<=count) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}

int main(){
	int t;
	cin>>t;

	while(t--){
		solve();
}
}
