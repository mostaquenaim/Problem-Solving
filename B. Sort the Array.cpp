#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ul;
typedef long long ll;

void solve(){
    int n,a[100001],firsti=-1,lasti=-1;
    bool flag=true;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            firsti=i;
            lasti=i-1;


            while(1){
                i++;
                if(i>=n) break;
                else if(a[i]<a[i-1]){
                    firsti=i;
                }
                else if(a[i]>a[lasti]){

                    while(1){
                        i++;
                        if(i>=n) break;
                        else if(a[i]<a[i-1]){
                            flag=false;
                            break;
                        }
                    }
                }
                else {
                    flag=false;
                    break;
                }
            }
        }
    }

    if(lasti!=0 && a[firsti]<a[lasti-1]) flag=false;


    if(!flag ) cout<<"no";
    else if(firsti==-1) cout<<"yes"<<endl<<"1 1";
    else cout<<"yes"<<endl<<lasti+1<<" "<<firsti+1;


}

int main(){
	int t;
	//cin>>t;
    t=1;
	while(t--){
		solve();
}
}
