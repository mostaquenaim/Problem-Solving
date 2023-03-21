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
    ll dcnt=0,pcnt=0;

    int need=0,maxi=0,rn=0,temp=0;
    fr0n{
    cin>>arr[i];
    if(arr[i]==1){
        need++;
       // rn++;
    }
    if(arr[i]==2){
        rn+=need;
        maxi=max(maxi,rn);

        temp+=need;
        if(rn)
        rn=temp/2+1;
              ///10->6
        need=0;
    }
        }

        rn+=need;
        maxi=max(maxi,rn);

        temp+=need;
        if(rn)
        rn=temp/2+1;
              ///10->6
        need=0;

        cout<<maxi<<endl;







}










int main(){
	int t;
	cin>>t;
  //  t=1;
	while(t--){
		solve();
}
}
