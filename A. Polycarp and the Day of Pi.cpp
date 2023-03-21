#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;


void solve(){
    int n;
   // cin>>n;

    string pi="3141592653589793238462643383279502884197A";
    string s;
    cin>>s;
    int count=0;

    for(int i=0;i<s.length();i++){
        if(s[i]!=pi[i]) break;
        else count++;
    }
    cout<<count<<endl;
}

int main(){

   // ll test=2,product=0;
//    ll arr[1000000001];

	int t;
	cin>>t;
  //  t=1;
	while(t--){
		solve();
}
}
