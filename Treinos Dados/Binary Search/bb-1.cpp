#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20) 
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int lo, hi, md, a[MAX], n, x;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    cin >> x;
    lo = 0, hi = n-1;
    while (lo <= hi){
        md = (lo+hi)/2;
        W(md)
        if (x == a[md]){
            cout << "achei " << x << " na posicao  " << md << endl;
            break;
        } else if ( x < a[md]){
            hi = md-1;
        } else if (a[md] < x){
            lo = md + 1;
        }
    }
    if (a[md]!=x){
        cout << "nao achou" << endl;
    }
    return 0;
}
