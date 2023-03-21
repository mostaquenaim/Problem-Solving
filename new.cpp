#include<bits/stdc++.h>

#define N 100001
#define bigN 1000000001

#define fr0n for(int i=0;i<n;i++)
#define fr1n for(int i=1;i<=n;i++)
#define frn1 for(int i=n;i>0;i--)
#define frn0 for(int i=n-1;i>=0;i--)


#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;



using namespace std;
typedef unsigned long int ul;
typedef long long ll;


void solve(){

   // cout<<"ok"<<endl;
    int n;
    cin>>n;
    string arr[2*n];

    for(int i=0;i<2*n-2;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<2*n-(2+1);i++){
        for(int j=i+1;j<2*n-2;j++){
            if(arr[i].length()<arr[j].length())
            {
                string temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    bool flag=true;

    string s1=arr[0];
    string s2=arr[1];

    if(arr[0][n-2]==arr[1][n-3]){
        arr[0]+=arr[1][n-2];

     cout<<arr[0]<<endl;

        for(int i=0;i<arr[0].length()/2;i++){
            if(arr[0][i]==arr[0][n-(i+1)])
            {
                continue;
            }
            else{
                flag=false;
                break;
            }
        }
    }

    else{
        arr[1]+=arr[0][n-2];

        cout<<arr[1]<<endl;

        for(int i=0;i<arr[1].length()/2;i++){
            if(arr[1][i]==arr[1][n-(i+1)])
            {
                continue;
            }
            else{
                flag=false;
                break;
            }
        }
    }

    if(flag){
        py;
    }
    else{
        pn;
     //   cout<<"not ok"<<endl;
    }

   // cout<<"ok"<<endl;

}

int main(){
	int t;
	cin>>t;
  //  t=1;
	for(int i=0;i<t;i++){
    solve();
}

}
