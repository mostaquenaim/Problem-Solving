#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;

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
    int n;
    cin>>n;
    int a,b,c;
    if(n>=24){
  //  if(!isPrime(n) && !isPrimeSqrOrDblSqr(n) ){
       //     cout<<"!"<<endl;
        int i=2;
        bool flag=true;
        while(flag){
        //    cout<<"@"<<endl;
                if(n%i==0){ //n=162,i=2
                 //   cout<<"#"<<endl;
                //    if(!isPrimeOrSqr(n/i)){ //81
                   //     cout<<"$"<<endl;
                            a=i; //2
                            n/=i; //81
                            i++;
                            while(flag){
                             //   cout<<"%"<<endl;
                                if(n%i==0){
                                    b=i; //3
                                    c=n/i; //27
                                    if(b==c || a==c)
                                    {
                                        cout<<"NO"<<endl;
                                        return;
                                    }
                                    cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
                                    return;
                                }
                                i++;
                                if(i>sqrt(n)){
                                    cout<<"NO"<<endl;
                                    return;
                                }
                            }
                   // }

                }
                i++;

                if(i>cbrt(n)) {
                    cout<<"NO"<<endl;
                    return;
                }

        }


  //  }

    }
    else{
        cout<<"NO"<<endl;
        return ;
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
