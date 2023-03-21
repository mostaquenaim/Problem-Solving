#include<bits/stdc++.h>
#include <vector>
#define N 1000000000
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solve(){

    ll n,mini=1,maxi=1,count=0;


    cin>>n;
    int b[n];

    for(int i=0;i<n;i++){
        cin>>b[i];
    }




    int l=sizeof(b) / sizeof(b[0]);

    sort(b,b+l);
   // cout<<b[0]<<" "<<b[n-1]<<endl;
    int i=0;

    if(b[0]==b[n-1]){
        if(n==2) count=1;
        else count=(n-1)*n/2;
    }
    else{
    while(1){
            i++;

            if(i>=n || b[i]!=b[0]) break;
        else mini++;

    }

    i=n-1;
    while(1){
            i--;
        if(i<0 || b[i]!=b[n-1]) break;
        else maxi++;
    }
    if(count==0)
    count=maxi*mini;
    }

    cout<<b[n-1]-b[0]<<" "<<count;


}

int main(){
	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}
