#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solution(){
    int n,sum=0;
    bool flag=false,flag2=false,flag3=false;
    cin>>n;
    int a[n];
    cin>>a[0];
    sum+=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==-1 && a[i-1]==-1 && !flag){
            flag=true;
            sum+=4;
        }
        else if(!flag2 && ((a[i]==1 && a[i-1]==-1) || (a[i]==-1 && a[i-1]==1)) ){
            flag2=true;
        }
    }

    if(!flag && !flag2) sum-=4;
    cout<<sum<<endl;
}

int main(){
	int x,n;
	cin>>x;

	while(x--){
		solution();
}
}
