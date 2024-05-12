
#include <bits/stdc++.h>
using namespace std;

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







ll arr[1000006];
ll cumulative_sum[1000006];

int main(){

    ll n;
    cout<< "Enter the number of array elements: ";
    scl(n);

    cout<< "Enter the array elements: ";
    for(int i = 1; i <=n; i++){

        scl(arr[i]);
    }


    for(int i = 1; i<= n; i++){

        cumulative_sum[i] = cumulative_sum[i -1] + arr[i];
    }



   /* 0  2 5 8 10 22
      0  2 7 15 25 47  */

    cout<< "Enter the number of queries you want to do: ";
    ll q;
    scl(q);


    while(q--){

        cout<< "Enter the array left and right value: ";
        ll left, right;
        scl(left);
        scl(right);

        ll sum = cumulative_sum[right] - cumulative_sum[left -1];

        printf("Sum from %lld to %lld is: %lld\n",left, right, sum);
    }
}








