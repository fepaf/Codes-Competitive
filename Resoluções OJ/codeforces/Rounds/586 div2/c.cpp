#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

using namespace std;

string s;
set<char> cj;

int main(){_
	while (cin >> s){
		for (char c : s){
			if (sz(cj) && *cj.begin() < c){
				cout << "Ann" << endl;
			}
			else {
				cout << "Mike" << endl;
			}
			cj.insert(c);	
		}
		cj.clear();
	}
	return 0;
}
