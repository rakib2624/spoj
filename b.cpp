#include<bits/stdc++.h>
using namespace std;

void solve () {
	int n; cin >> n;
	if (n%2 ==1) {
		if (n == 1) {
			cout << "1\n";
			return;
		}
		cout << "-1\n";
		return;
	}
	vector<int>v(n+1);
	for (int i = 1, k = 0, j = 2; i < n, j <= n; i+=2, j+=2, k+=2) {
		v[j] = i;
		v[i] = n-k;
	}
	for (int i = 1; i <= n; i++)
		cout << v[i] << ' ';
	cout << endl;

}
int main ()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}