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

bool finding(int arr[],int target){


    int n = sizeof(arr) / sizeof(*arr);

    bool exists = std::find(arr, arr + n, target) != arr + n;
    if (exists) {
        return true;
    } else {
        return false;
    }



    }

void solve(){
    int n;
    cin>>n;

    int a[n+1],b[n+1];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

     for(int i=0;i<n;i++){
        cin>>b[i];
    }

    bool flag=true;

    for(int i=0;i<n;i++){
        if((a[i] <= a[n-1] && b[i] <= b[n-1]) || (b[i]<=a[n-1] && a[i]<=b[n-1])){
            continue;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        py;
    }
    else{
        pn;
    }






}

int main(){
	int t;
	cin>>t;
  //  t=1;
	while(t--){
		solve();
}
}
