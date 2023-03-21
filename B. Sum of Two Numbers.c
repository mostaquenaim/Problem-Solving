#include <bits/stdc++.h>
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
for (int i = 1; i <= n / 2; i++) {
    x = i;
    y = n - i;

    if (abs(digits(x) - digits(y)) < 2) {
        cout << x << " " << y << endl;
        return;
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
