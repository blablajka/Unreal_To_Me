#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t, chet = 0;
	cin >> n >> t;
	vector<int>a(n);
	vector<int>prefixsum(n + 1);
	for (auto& i : a)
		cin >> i;
	partial_sum(a.begin(), a.end(), prefixsum.begin() + 1);
	for (int l = 0; l < prefixsum.size(); l++) {
		for (int r = l + 1; r < prefixsum.size(); r++) {
			if (prefixsum[r] - prefixsum[l] < t)
				chet++;
		}
	}
	cout << chet++;
}

// провал на восьмом тесте по времени, нужно использовать метод двух указателей (но никто так в комментах не решает)
// нужно знать дерево фенвика или дерево сегментов
// https://codeforces.com/contest/1042/problem/D
