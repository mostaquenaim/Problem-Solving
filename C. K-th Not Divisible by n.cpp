#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;

    while(t--){
        cin>>n>>k;

        if(k%(n-1)==0){
            cout<<n*(k/(n-1))-1;
        }
        else{
            cout<<n*(k/(n-1))+k%(n-1);
        }
        cout<<endl;
    }
}
