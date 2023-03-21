#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,r;
    cin>>t;

    while(t--){
        cin>>n;
        k=1;
        r=1;
        while(1){
        r+=pow(2,k++);
        if(n%r==0){
        cout<<n/r<<endl;
        break;
        }
        }

    }
}
