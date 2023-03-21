
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;


    ll a[n+1];
    ll sum=0,count=0;
    ll maxi;
    bool flag=true,zFlag=true;


    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]!=0) zFlag=false;

    }
//    ll l=sizeof(a)/sizeof(a[0]);
    //sort(a,a+l);
    ll zCount=0;
    if(zFlag) count=(n-1)*(n-2)/2;

    else if(sum%3==0){


        for(ll i=0;i<n;i++){
            ll check=0;
            while(1){

                check+=a[i];

               // if(check!=sum/3 && i+1==n) {flag=false; break;}

                if(check==sum/3) break;

                else i++;

        }

        if(flag){
        count++;



            if(count==3){
             //   cout<<"count 3"<<endl;
                while(a[++i]==0){
                    i++;
                }
                if(i<n) {
                    count=0; break;
                }
                else{
                //    cout<<"2"<<endl;
                    if(zCount==0) {
                        count=1; break;
                    }
                    else{
                        count=2*zCount;
                    }
                }
            }
            else{
              //  cout<<"4"<<endl;

            while(a[i+1]==0){
                if(sum==0 && i+1==n-1) break;
                zCount++;
              //  cout<<"5"<<endl;
                i++;
            }
            }


       // cout<<"index=" <<i<< "count="<<count;

    }
        }


    }
    else {
        count=0;
    }

    cout<<count<<endl;
}
