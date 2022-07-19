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
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n > m) {
		swap(n, m);
	}
	long long res = 0;
	while (n && m) {
		res += m / n;
		m %= n;
		swap(n, m);
	}
	return printf("%lld\n", res), 0;
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