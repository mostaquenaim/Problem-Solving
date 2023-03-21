#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,angle,arr[181]={0};
    cin>>t;

    /*for(int i=3;i<=10;i++){

        angle=180*(i-2);
    // cout<<"angle="<<angle<<", "<< endl;
        arr[angle/i]=1;
    }*/

    while(t--){
        cin>>a;

        if(a>=60 && 360%(180-a)==0) cout<<"YES";

        else cout<<"NO";
        cout<<endl;
    }
}
