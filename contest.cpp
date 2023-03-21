#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solution(){
    int n,m,d,i=0;
    cin>>n>>m>>d;
    int p[n+1],a[m+1],arr[n+1];
    bool flag=false;
    int mini=100001;
    int n2=n;
    while(n--){
        cin>>p[i++];
        arr[p[i-1]]=i;
    }
    n=n2;
    i=0;
    cin>>a[i++];
    m--;
    while(m--){
        cin>>a[i++];

        if(arr[a[i-1]]-arr[a[i-2]]>d || arr[a[i-1]]<arr[a[i-2]]) {
            flag=true;
        }
        else if(d+2>n){
            mini=min(mini,arr[a[i-1]]-arr[a[i-2]]);
        }
        else{
                mini=min(mini,d+1-(arr[a[i-1]]-arr[a[i-2]]));
            mini=min(mini,arr[a[i-1]]-arr[a[i-2]]);
        }

    }

    if(flag) cout<<"0";
    else cout<<mini;
    cout<<endl;




}

int main(){
	int x,n;
	cin>>x;

	while(x--){
		solution();
}
}

