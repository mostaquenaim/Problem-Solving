
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s[10];

    while(t--){
        for(int i=0;i<9;i++){
            cin>>s[i];
        }
        cout<<s[8][0];
        for(int i=1;i<9;i++) {
            cout<<s[0][i];
        }
        cout<<endl;
        for(int i=1;i<8;i++){
            cout<<s[i-1][0];
            for(int j=1;j<9;j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }

        cout<<s[8][1];
        for(int i=1;i<9;i++) cout<<s[8][i];
        cout<<endl;
    }
}
