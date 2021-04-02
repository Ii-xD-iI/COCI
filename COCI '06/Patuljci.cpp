#include "bits/stdc++.h"

#define len(Z) (int)(Z).size()
#define elif else if

#define all(Z) (Z).begin(), (Z).end()
#define ceil(X,Y) (X + Y-1)/Y
#define test(A) int A;cin>>A;while(A-->0)

using namespace std;

const int MAXN=1e2+7, INF = 2e9+7, MOD = 1e9+7;//check the limits u dum dum
const long long INFLL = 2e18+7;

void IO(string Bessie);

void Moo(){
    int n = 9;
    vector<int> v(n);
    long long sum{0};
    for(int i {};i<n;++i) {
        cin>>v[i]; 
        sum += v[i];
    }
    sort(all(v));

    int target = sum-100;
    //find a pair of number from v whose sum adds up to target
    int l=0,r = 8;
    while(l < r) {
        if(v[l] + v[r] > target) --r;
        elif(v[l] + v[r] < target) ++l;
        elif(v[l] + v[r] == target) break;
    }


    for(int i {};i<n;++i) {
        if(i == l or i == r) continue;

        cout << v[i] << '\n';
    }
}

int32_t main() {
    IO("");
        
    // test(Dolphin_OTZ)
        Moo();
    return 0;
}

void IO(string Bessie = "") {   
    ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
            cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
    } 
}
// taskkill /IM "USACO.exe" /F
