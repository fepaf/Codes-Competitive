#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, pai[MAX], tam[MAX];

void init(int n){
    for (int i=0; i<=n; ++i){
        pai[i] = i;
        tam[i] = 1;
    }
}

int find(int u){// retorna representante do conjuinto do u
    if (u == pai[u]) return pai[u];
    return (pai[u] = find(pai[u])); //path compression
}

void join(int u, int v){// "union" une conjunto do u com conjunto do v
    u = find(u);
    v = find(v);
    if (tam[v] >= tam[u]) swap(u, v);
    pai[v] = u; // u eh o novo representante de todos
    tam[u] += tam[v];
}

int x, y, ans, m;

int main(){_
    cin >> n >> m;
    init(n);
    ans = n;
    while (m--){
        cin >> x >> y;
        ans -= (find(x) != find(y));
        join(x, y);
    }
    cout << ans << endl;
    return 0;
}
