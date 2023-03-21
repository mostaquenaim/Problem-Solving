#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrimeSqrOrDblSqr(int n)
{
    int x=sqrt(n); ///eg. n=81,x=9
    if(x*x==n) {
        if(isPrime(x)){
            return true;
        }
        else { ///9 is not prime
            int y=sqrt(x); ///y=3,x=9
            if(y*y==x && isPrime(y)){
                return true;
            }
            else return false;
        }
    }
    else return false;

}

bool isPrimeOrSqr(int n){
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if(n/i==i && isPrime(i))
            return true;
            else return false;
        }
    }

    return true;


}



void solve(){
    int n,k;
    cin>>n>>k;

    if(n>k){
           if( isPrime(n) ) {
            cout<<n<<endl;
            return;
           }
        int i=2;
        while(i<=(n+1)/2 && i<=k ){
            if(n%i==0) {
                    if(n/i<=k){
                        cout<<i<<endl;
                        return;
                    }
        }
        i++;
    }
    cout<<n<<endl;
    return;
    }
    else cout<<"1"<<endl;

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
