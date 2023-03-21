#include <bits/stdc++.h>
#include<sstream>
using namespace std;
typedef long long                        ll;



int digits(int n) {
int sum = 0;

while (n > 0) {
    sum += n % 10;
    n /= 10;
}

return sum;


}

void solve() {
int n, x, y;
cin >> n;

    if(n%2==0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;

        if(n/2%2==0){
             //   cout<<"ekahne"<<endl;
            int i=1;
            int j=n*2-((n/2)-1);

            for(int k=0;k<n/2;k++){
            cout<<i<<" "<<j<<endl;
            i++;j++;
        }
        for(int k=n+1;k<=n+(n/2+1);k++){
            cout<<i<<" "<<k<<endl;
            i++;
        }

        }

        else{
        int i=1;
        int j=n*2-((n/2)-1);
        for(int k=0;k<n/2;k++){
            cout<<i<<" "<<j<<endl;
            i++;j++;
        }
        for(int k=n+1;k<=n+n/2+1;k++){
            cout<<i<<" "<<k<<endl;
            i++;
        }
        }
    }
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
