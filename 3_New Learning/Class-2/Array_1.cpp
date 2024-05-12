#include <bits/stdc++.h>
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



/* 6 90 56 88 44 29

   0 1  2   3  4  5
*/

/*Give a array size then input the array element after that give your query and calculate the queried sum*/


using namespace std;

int main() {

    ll n;
    scl(n);

    ll arr[n+1];

    for(int i = 1; i <=n; i++){

        scl(arr[i]);
    }

    // Take query
    ll q;
    scl(q);

    while(q--){

        ll left, right;
        scl(left);
        scl(right);
        ll sum = 0;

        // constraints check if user give left value bigger than right
        if(left > right){
            int temp  = left;
            left = right;
            right = temp;
        }


        for(int i = left; i<= right; i++){

            sum = sum + arr[i];
        }

        printf("Sum is: %d\n" , sum);
    }

}
















