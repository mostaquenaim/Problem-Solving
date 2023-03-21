#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solve(){
    int n,count=0,check=0;
    char bracketi;
    cin>>n;
    bool flag=false;

    while(n--){
        cin>>bracketi;
        if(bracketi==')'){
            if(check<1) count++;
             else check--;
        }
        else if(bracketi=='(') check++;
    }

    cout<<count<<endl;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		solve();
}
}
