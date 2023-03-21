#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,arr[200];
    cin>>t;
    string s;
    bool flag;

    while(t--){
        cin>>n;
        //cout<<"n="<<n;

        i=0;
      //  cout<<"asche2";

      //  cout<<"asche3 n="<<n;
      cin>>s;

        for(int i=0;i<n;i++)
        {



        arr[int(s[i])]=1;
       // cout<<"arr["<<int(s[i])<<"]="<<arr[int(s[i])];


        }



        if(n==5 && arr[84]==1 && arr[105]==1 && arr[109]==1 && arr[117]==1 && arr[114]==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;

        arr[84]=0;
         arr[105]=0;
          arr[109]=0;
           arr[117]=0;
            arr[114]=0;

    }


}

