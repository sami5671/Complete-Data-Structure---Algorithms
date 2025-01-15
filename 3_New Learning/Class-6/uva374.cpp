#include <bits/stdc++.h>
using namespace std;

//Compilation time 0.005s
//Code submitted by Susobhan AKhuli

/*template */
#define ll                  long long
#define dd                  double
#define scl(n)              scanf("%lld",&n)
#define scd(n)              scanf("%lf",&n)
#define pi                  pair<ll,ll>
#define pb                  push_back
#define mp                  make_pair
#define uu                  first
#define vv                  second

#define FOR(i, n)           for(ll i = 1; i<=n; i++)
#define LOOP(i, n)          for(ll i = 0; i<n; i++)
#define FOOR(i, a, b)       for(ll i = a; i<=b; i++)
#define LOP(i, a, b)        for(ll i = a; i<b; i++)


#define sorted(s)           sort(s.begin(), s.end())
#define reversed(s)         reverse(s.begin(), s.end())
#define contains(a,b)       (find ((a).begin(), (a).end(), (b)) != (a).end())

#define MAXI                10004
#define pii                 3.1415926536
#define mod                 1000000007
#define eps                 0.0000000001
#define inf                 9000000000000000
#define mstt(a,b)           memset((a), (b), sizeof (a))

#define base1               1000002089
#define base2               1000003853
#define hashmod             1000002989


ll  power(ll a, ll b, ll m)
{
    // This is a function to find out a^b
    ll ans = 1;
    for(int i =1; i<=b; i++)
    {
        ans = (ans * (a % m)) % m;
    }
    return ans;
}

int main(){

    ll b,p, m;

    while(cin>> b>>p>>m){

         cout <<power(b,p,m);

    }

}

