#include<bits/stdc++.h>

#define N 100001
#define bigN 1000000001

#define fr0n for(int i=0;i<n;i++)
#define fr1n for(int i=1;i<=n;i++)
#define frn1 for(int i=n;i>0;i--)
#define frn0 for(int i=n-1;i>=0;i--)
#define frmn for(int i=m,i<n;i++)
#define frnm for(int i=n-1;i>=m;i--)


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
    char arr[n+1];

    bool flag=true;
    int i,j,k;

    if(n%2==0){
    for(i=0;i<n/2;i++){
        cin>>arr[i];
    }
    }

    else{
        for(i=0;i<=n/2;i++){
        cin>>arr[i];
    }

    }

    int count=1,count2=1,cnt=1;



    for(j=0;j<n/2;j++)
    {
        cin>>arr[j+i+1];

        if(count){
        if(arr[j+i+1]==arr[i-(j+1)]){
            continue;
        }
        else {
            count=0;
        }
        }
        else{
                if(count2){
            if(arr[j+i+1]!=arr[i-(j+1)]){
            continue;
            }
            else{
                count2=0;
            }
            }

            else{
                    if(cnt){
                if(arr[j+i+1]==arr[i-(j+1)]){
            continue;
        }
        else flag=false;
            }
            }

        }
    }




    if(!flag){
        pn;
    }
    else{
        py;
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
