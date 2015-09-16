#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
// test phabricator
// test3 test4
const int MAX = 20;
const int INF = 1<<23;

int n, l, r, x, result;
int num[MAX];

void dfs(int i, int sum, int MaxNum, int MinNum, int cnt) {

	if (i == n) {
		if (cnt >=2 && sum >= l && sum <= r && (MaxNum - MinNum >= x)) {
			result ++;
		}
		return;
	}
	dfs(i+1, sum, MaxNum, MinNum, cnt);
	dfs(i+1, sum + num[i], max(MaxNum, num[i]), min(MinNum, num[i]), cnt+1);
}

int main() {

	while(cin >> n >> l >> r >> x) {
		result = 0;
		for (int i = 0; i < n; i ++) cin >> num[i];
		dfs(0, 0, -1*INF, INF, 0);
		cout << result << endl;
	}

	return 0;
}
