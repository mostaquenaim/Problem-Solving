#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t=1; cin >> t;

	while(t--){
		ll n;	cin >> n;
		vector<ll> v[n];
		for(ll i=0; i<n; i++){
			ll x;	cin >> x;
			for(ll j=0; j<x; j++){
				ll y;	cin >> y;
				v[i].push_back(y);
			}
		}

		bool a[50000 + 5]={false};
		vector<ll> ans;

		for(ll i=n-1; i>=0; i--){
			bool found=false;
			for(auto l:v[i]){
				if(!found && !a[l]){
					found =true;
					ans.push_back(l);
					a[l]=true;
				}
				else a[l]=true;
			}
		}

		if(ans.size() == n){
			reverse(ans.begin(), ans.end());
			for(auto l:ans)	cout << l << " ";
		}else cout << "-1";
		cout << "\n";
	}
}
