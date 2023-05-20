#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve () {
	int n; cin >> n;
	int a; cin >> a;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	vector<int>::iterator l, u;
	l = lower_bound(v.begin(), v.end(), a);
	u = upper_bound(v.begin(), v.end(), a);
	cout << l - v.begin() << endl;
	cout << u - v.begin() << endl;
}

int main ()  
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve ();
	}
}	