#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;
#define N 100000
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
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
    ll q,x[200002];
    char plusOrQstn[200002];
    cin>>q;

    for(int i=0;i<q;i++){
        cin>>plusOrQstn[i]>>x[i];
        if(plusOrQstn[i]=='?'){
            int j=0;
            ll sum=1;
            bool flag=true;
            ll temp=x[i];
            x[i]=0;
         //   cout<<"asche"<<endl;
            sort(x,x+i);

        //    cout<<endl<<"sorted array-"<<endl;
          //  for(int k=0;k<i;k++){
             //   cout<<x[k]<<" ";
            //}
           // cout<<endl<<"sorted array-"<<endl;
           // cout<<"ekhaneo"<<endl;
           ll check[200001]={0},count=1;
           while(x[j]==0) j++;
            while(flag){


                    if(j==i || x[j]>temp*count){
                        cout<<temp*count<<endl;
                        break;

                }
                  else if(x[j]%temp==0)
                    {
                        if(count==x[j]/temp){
                        count++;
                    }
                    else
                    {
                        cout<<temp*count<<endl;
                        break;
                    }
                    }

            //        cout<<"x[j]="<<x[j]<<endl;

                j++;
            }
        }
    }

}

int main(){

 //   int arr[N+1],b=1;
  //  for(int i=1;i<=N;i++){
    //    arr[i]=b;
      //  b+=i+1;
    //}



   // ll test=2,product=0;
//    ll arr[1000000001];

	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}
