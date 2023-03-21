#include <bits/stdc++.h>
using namespace std;
typedef long long                        ll;


void solve(){
    int n;
    cin>>n;
    char s[n+1];

    int i=0;
    int uniqueFirst[n+1]={0},uniqueSecond[n+1]={0};
    int cntLetter[30]={0};

   // uniqueFirst[-1]=0;
    int n2=n;


    while(n--){
        cin>>s[i];
        if(cntLetter[s[i]-97]==0) {
                if(i==0) uniqueFirst[i]=1;
        else uniqueFirst[i]=uniqueFirst[i-1]+1;

        }
        else uniqueFirst[i]=uniqueFirst[i-1];
        cntLetter[s[i]-97]++;
        i++;
    }

    n=n2;

    for(int i=0;i<30;i++){
        cntLetter[i]=0;
    }


    for(int i=n-1;i>0;i--){
        if(cntLetter[s[i]-97]==0) {
            uniqueSecond[i]=uniqueSecond[i+1]+1;
        }
        else uniqueSecond[i]=uniqueSecond[i+1];
        cntLetter[s[i]-97]++;
    }

    int maxi=0;
    for(int i=0;i<n-1;i++){

            maxi=max(uniqueSecond[i+1]+uniqueFirst[i],maxi);

    }

    cout<<maxi<<endl;

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
