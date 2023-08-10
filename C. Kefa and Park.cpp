#include<bits/stdc++.h>
#include <vector>
#define N 1000000000
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solve(){

    ll n,m,count=0,check=0;
    cin>>n>>m;

    ll ifCat[n+1],x[2*n],y[2*n];

    for(int i=1;i<=n;i++){
        cin>>ifCat[i];
    }

    bool flag[100001];

    ll vCnt[200002]={0};


    for(int i=1;i<2*n-1;i+=2){
        cin>>x[i]>>y[i];
        x[i+1]=y[i];
        y[i+1]=x[i];
        vCnt[x[i]]++;
        vCnt[x[i+1]]++;
    }


    for(int i=1;i<(2*n)-1;i++){
        for(int j=i+1;j<2*n;j++){
            if(x[i]>x[j]){
                ll temp=x[i];
                x[i]=x[j];
                x[j]=temp;

                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }

    for(int i=1;i<2*n;i++){
        cout<<x[i]<<" "<<y[i]<<endl;
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
