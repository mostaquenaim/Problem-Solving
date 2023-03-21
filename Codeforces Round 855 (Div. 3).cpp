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
    int n,k;
    cin>>n;

    ll arr[n+1],zrr[n+1],zcnt=0,total=0;



    fr0n{
        cin>>arr[i];

        if(arr[i]==0){
            zrr[zcnt]=i;
            zcnt++;
        }
    }

    ll maxi[zcnt+1]={0},lrg=0;

    if(zrr[0]!=0){
        sort(arr,arr+zrr[0]);
        total+=arr[zrr[0]-1];
        maxi[0]++;
    }


    for(int i=1;i<zcnt-1;i++){
        sort(arr+zrr[zcnt-1],arr+zrr[zcnt]);
        for(int j=0;j<=i;j++){
                if(zrr[j]-(1+maxi[j])>=0)
                {
                    if(zrr[j]-(1+maxi[j])>lrg)
                    lrg=zrr[j]-(1+maxi[j]);
                    ll temp=j;
                }
                maxi[j]++;
                total+=lrg;

        }
    }

    cout<<total<<endl;

}










int main(){
	int t;
	cin>>t;
  //  t=1;
	while(t--){
		solve();
}
}
