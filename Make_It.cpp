#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dp[N];
bool reachValue(int cur, int n) {
    if (cur == n) {
        return true;
    }
    if (cur > n) {
        return false;
    }
    if(dp[cur] != -1) return dp[cur];
    bool op1 = reachValue(cur + 3, n);
    bool op2 = reachValue(cur * 2, n);
   return dp[cur] = op1 || op2;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

         for (int i = 0; i <= n; i++)
            {
                dp[i] = -1;
            }

        if (reachValue(1, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}