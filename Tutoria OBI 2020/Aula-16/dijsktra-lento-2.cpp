#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
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

/*
lista adjacencia
nao direcionado
1 - indexado
*/

int n;
int m;
int s;
int u, v, w;
vvii adj;
vi dist; // dist[u] guardar menor caminho de S até U
vi proc;// pproc[u] diz se U ja foi processado
vi ult; // ult[u] diz qual ultimo vértice anterior a U no menor caminho de S até U

void dijkstra(int s){
    dist = vi(n+1,INF);
    proc = vi(n+1,0);
    ult = vi(n+1,-1);
    dist[s] = 0;

    for (int i=1; i<=n; ++i){
        u = 0;//nunca usado
        for (int j=1; j<=n; ++j){
            if (!proc[j] && dist[j] <= dist[u]){
                u = j;
            }
        }
        proc[u] = 1;

        for (auto [v,w] : adj[u]){
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                ult[v] = u;
            }
        }
    }
}

int main(){_
    cin >> n >> m;

    adj = vvii(n+1);

    for (int i=0; i<m; ++i){
        cin >> u >> v >> w;
        adj[u].eb(v,w);
        adj[v].eb(u,w);        
    }

    cin >> s;

    dijkstra(s);

    for (int i=1; i<=n; ++i){
        cout << i << " " << dist[i] << "\n";
    }
    
    return 0;
}