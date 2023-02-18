/** ========================================**
 ** @Author: Kareem Taha Abdelfatah
 ** @Category: Codeforces problems solutions
 ** @brief: Problem Solving solutions
/** ========================================**/

#include<bits/stdc++.h>
#include<iterator>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define LightOn(n, k)       (n | (1<<k))
#define Lightoff(n, k)      (n & (~(1<<k)))
#define IsOn(n, k)          ((n>>k)&1)
const long long N = 2e5 + 5;
const double PI = 3.14;
const double Prox = 1e-7;
map<char, ll>mp1, mp2;
ll a[N], b[N];
set<ll>s;

ll GCD(ll a, ll b){
    return (__gcd(a, b));
}

ll LCM(ll a, ll b){
    return ((a * b) / (GCD(a, b)));
}
// right shift n = num / pow(2, n);
// left shift n = num * pow(2, n);
// sleep(micro second); for slow execution
ll rec(ll a1[100][100], ll a2[100][100], ll r, ll c, ll fr, ll fc);
int main()
{
    IO
    ll r, c; cin >> r >> c;
    ll a1[100][100], a2[100][100];
    for(ll i = 0; i < r; i++) for (ll j = 0; j < c; j++) cin >> a1[i][j];
    for(ll i = 0; i < r; i++) for (ll j = 0; j < c; j++) cin >> a2[i][j];
    rec(a1, a2, r, c, 0, 0);
    return 0;
}

ll rec(ll a1[100][100], ll a2[100][100], ll r, ll c, ll fr, ll fc){
    if(fr == r) return 0;
    if(fc == c){
        cout << "\n";
        return rec(a1, a2, r, c, fr + 1, 0);
    }
    cout << a1[fr][fc] + a2[fr][fc] << " ";
    return rec(a1, a2, r, c, fr, fc + 1);
}



