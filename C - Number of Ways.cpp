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

    ll arr[n+1],sum[n+1],s=0;
    sum[0]=0;

    fr1n{
        cin>>arr[i];
        sum[i]=sum[i-1]+arr[i];

    }

    if(sum[n]%3!=0) cout<<"0"<<endl;

    else{
            int check=0,check2=0;
        fr1n{
            if(sum[i]==sum[n]/3){
                check=i; break;
            }
        }

        cout<<"check "<<check<<endl;

    frn1{
        cout<<"i "<<i<<endl;
        if(sum[i]!=sum[n]){
            check2=i+1;
            break;
        }
    }

    cout<<"check2 "<<check2<<endl;


    int count=0;
    bool flag=true;
    for(int i=check+1;i<check2;i++){
            if(flag){
        if(sum[i]==2*sum[n]/3){
            count++;
            flag=false;
        }
            }
            else if(sum[i]==2*sum[n]/3)
    }

    cout<<"s "<<s<<" count "<<count<<endl;

    cout<<s-(count*(count+1)/2)<<endl;
    }

}










int main(){
	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}
