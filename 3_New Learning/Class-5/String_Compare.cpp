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






int main(){

    char s1[] = "Hello";
    char s2[] = "Hello";

    int flag = 0;

    for(int i = 0; i < strlen(s1); i++){

        if(s1[i] != s2[i])

            flag = 1;
    }

    if(flag == 0){

        printf("String matched\n");

    }else{

        printf("String did not matched\n");
    }


    // simplified version

    int observe = strcmp(s1, s2);

    if(observe == 0){

        printf("String matched\n");

    }else{

        printf("String did not matched\n");
    }

}






