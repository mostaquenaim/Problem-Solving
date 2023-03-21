#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,i;
    cin>>t;

    while(t--){
    i=0;
    int odd1=0,odd2=0,odd3=0,even1=0,even2=0;

        cin>>n;
        while(n--){
        i++;
        cin>>a;
         if(a%2==0 && even1==0) even1=i;
         else if(a%2==0 && even2==0) even2=i;
         else if(a%2!=0 && odd1==0) odd1=i;
         else if(a%2!=0 && odd2==0) odd2=i;
         else if(a%2!=0 && odd3==0) odd3=i;



        }
        if(odd1!=0 && odd2!=0&& odd3!=0) cout<<"YES"<<endl<<odd1<<" "<<odd2<<" "<<odd3<<endl;
        else if(odd1!=0 && even1!=0 && even2!=0) cout<<"YES"<<endl<<odd1<<" "<<even1<<" "<<even2<<endl;
        else cout<<"NO"<<endl;
    }
}
