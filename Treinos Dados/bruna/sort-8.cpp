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

int n;
vector< pair<int, int> > a;
// vii a;

/*Só dois campos, crescente pelo primeiro, crescente pelo segundo*/

int x, y;

int main(){_
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> x >> y;
        // a.pb({x,y});
        a.eb(x,y);
    }

    sort(a.begin(), a.end()); //nao-descrescente 

    for (int i=0; i<n; ++i){
        cout << a[i].first << ' ' << a[i].second << endl;;
    }
    
    cout << endl;
    return 0;
}
