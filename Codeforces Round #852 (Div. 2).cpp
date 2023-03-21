#include<bits/stdc++.h>
#include <vector>
#define N 100001
#define bigN 1000000001


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

    int n,a[200001];
    cin>>n>>a[0];
    int mini=0,maxi=0;
    bool flagmin=true,flagmax=true;

    for(int i=1;i<n;i++){
        cin>>a[i];

        if(flagmin){
        if(a[i-1]<a[i]){
            if(mini==i-1){
                mini=i;
            }
            else flagmin=false;
        }
        }

    }

    maxi=n-1;

    for(int i=n-1;i>=mini;i--){
        if(a[i]<a[i-1]){
            maxi=i;
            break;
        }
    }

    if(mini!=maxi) cout<<mini+1<<" "<<maxi+1<<endl;
    else cout<<"-1"<<endl;










}

int main(){
	int t;
	cin>>t;
   // t=1;
	while(t--){
		solve();
}
}
