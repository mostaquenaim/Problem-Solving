#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,a,count=1,i=1;
    bool flag=false;
    cin>>n>>t;
    n--;
    while(n--){

    cin>>a;
    i--;
    if(i==0) {
            i=i+a;
            count=count+a;
    }
    if(count==t) flag=true;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";

}
