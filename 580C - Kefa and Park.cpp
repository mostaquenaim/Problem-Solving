#include<bits/stdc++.h>
#include <vector>
#define N 1000000000
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void makeFalse(bool arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = false;
    }
}

void solve(){

    int n,m;
    cin>>n>>m;

    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x[n+1],y[n+1];
    bool flag[n+1];
   // makeFalse(flag[], n+1);
   int count[n+1]={0};

    for(int i=0;i<n-1;i++){
        cin>>x[i]>>y[i];

        if(x[i]>y[i]){
            int temp=x[i];
            x[i]=y[i];
            y[i]=temp;
        }

        count[x[i]]++;
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(x[i]>x[j]){
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;

                if(y[i]>y[j]){
                    temp=x[i];
                    y[i]=y[j];
                    y[j]=temp;
                }
            }

        }
    }

    int cat[n+1]={0};
    for(int i=0;i<n-1;i++){

        if(a[x[i]-1]==1) {
            cat[x[i]]++;
        }

    }







   ///     flag[x[i]]=false;
   ///     flag[y[i]]=true;

       /// if(a[x[i]-1]==1) count[y[i]]++;
    ///    if(a[y[i]-1]==1) count[y[i]]++;



}

int main(){
	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}
