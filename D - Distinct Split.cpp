#include<bits/stdc++.h>

using namespace std;
typedef unsigned long int ul;
typedef long long ll;

int main() {


    int tt;
    cin>>tt;

    while(tt--) {
        int ans=0;
        int n;
        cin>>n;
        string s;
        cin>>s;
      //  vvi c(n, vi(26, 0));
        for (int i=0; i < s.size(); i++) {
            if (i>0)
                c[i]=c[i-1];
            c[i][s[i] -'a']++;
        }
        vi total= c.back();

        for (int i=0;i<s.size()-2+1;i++)
        {
        vi t =total;

        for (int j=0; j < 26; j++) {
            t[j]-=c[i][j];
        }

        int current =0;
        for (int j=0; j < 26; j++)
        {

            if (c[i][j]) {
                current++;
            }

            if (t[j]) {

                current++;
            }
    }
    ans = max(ans, current);
}
cout << ans << endl;
    }

