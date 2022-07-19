// #pragma comment(linker, "/stack:20000000")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

#include <bits/stdc++.h>
// #include <x86intrin.h>
// #include <ext/pb_ds/assoc_container.hpp>

using namespace std;
// using namespace __gnu_pbds;

#define updmin(a,b) b > a ? a = b, true : false
#define updmax(a,b) b < a ? a = b, true : false

// template<typename T>
// using ordered_set = tree <T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template<typename T1, typename T2>
// using ordered_map = tree <T1, T2, less<T1>, rb_tree_tag, tree_order_statistics_node_update>;

const int oo = 0x7fffffff;

int solve() {
	int n, m;
	scanf("%d%d", &n, &m);
	vector<vector<int>> dp(n + 3, vector<int>(m + 3, 0));
	dp[0][0] = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			dp[i + 2][j + 1] += dp[i][j];
			dp[i + 1][j + 2] += dp[i][j];
		}
	}
	return printf("%d\n", dp[n - 1][m - 1]), 0;
}

int main() {
	// ios_base::sync_with_stdio(false);
	// cin.tie(nullptr);
	// cout.tie(nullptr);
	#ifdef local
		freopen("stdin", "r", stdin);
		// freopen("stdout", "w", stdout);
	#endif
	// freopen("stderr", "w", stderr);
	int tests = 1;
	// scanf("%d", &tests);
	for (int i = 1; i <= tests; ++i) {
		// printf("Case %d#: ", i);
		solve();
	}
	return fprintf(stderr, "%.9lf\n",  clock() * 1.0 / CLOCKS_PER_SEC), 0;
}