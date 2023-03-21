#include<bits/stdc++.h>

#define N 100001
#define bigN 1000000001

#define fr0n for(int i=0;i<n;i++)
#define fr1n for(int i=1;i<=n;i++)
#define frn1 for(int i=n;i>0;i--)
#define frn0 for(int i=n-1;i>=0;i--)


#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;



using namespace std;
typedef unsigned long int ul;
typedef long long ll;

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

int binarySearch(int array[], int x, int low, int high) {

	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}



void solve(){
    int n;
    cin>>n;
    ll arr[n+1];

    ll cntZ=0,cntO=0;

    fr0n{
    cin>>arr[i];
    if(arr[i]==1) cntO++;
    else if(arr[i]==0) cntZ++;
        }

   // cout<<"cnt[0]="<<cntA[0]<<endl;
    if(cntZ>(n+1)/2){
        if(cntO>0 && cntZ+cntO==n){
            cout<<"2"<<endl;
        }
        else cout<<"1"<<endl;
    }
    else cout<<"0"<<endl;



}










int main(){
    //cout<<"test";
	int t;
	cin>>t;

//ll cntA[200001]={0};
  //  t=1;
	while(t--){
		solve();
}
}

