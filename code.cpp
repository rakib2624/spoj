#include<bits/stdc++.h>
using namespace std;
// #include "dbg.h"

// 	const int N = 1e6 + 7;
// 	vector<bool>v(N, 0);
// 	vector<int> ans, nAfraid;
// 	set<int> not_afraid;
// 	set<int>s;
// // Two methods of deleting the fron digit of number starts
// int dropDigitFront (int n) {
// 	int div = 1;
// 	for (int i = n; i > 9; i /=10)
// 		div *= 10;
// 	return n % div;
// }

// int DropLeadingDigit(int number){
// 	return(number % (int) pow((double) 10, (double) floor(log((double) number) / log((double) 10))));
// }
// // methods end here

// void primeNumber () {

// 	v[0] = v[1] = 1;
// 	for (int i = 4; i <= N; i += 2) 
// 		v[i] = 1;
// 	for (int i = 3; i * i < N; i += 2) {
// 		if (v[i] == 0) {
// 			for (int j = i * i; j < N; j += 2 * i) 
// 				v[j] = 1;
// 		}
// 	}

// 	ans.push_back(2);
// 	for (int i = 3; i <= N; i += 2) {
// 		if (v[i] == 0) {
// 			ans.push_back(i);
// 		}
// 	}
// 	int len = ans.size();
// 	for (int i = 0; i < len; i++) {
// 		int x = ans[i];
// 		int y = ans[i];
// 		while ( x != 0) {
// 			if (x%10 == 0) {
// 				not_afraid.insert(ans[i]);
// 				break;
// 			}
// 			x = x / 10;
// 		}
		
// 	}
// 	for (int i = 0; i < len; i++) {
// 		int x = ans[i];
// 		int y = ans[i];
// 		x = dropDigitFront(x);

// 		while (x != 0) {
// 			if (v[x] == 1) {
// 				not_afraid.insert(ans[i]);
// 				break;
// 			}
// 			x = dropDigitFront(x);
// 		}
// 	}

// 	for (auto it:not_afraid) {
// 		nAfraid.push_back(it);
// 	}

// }

 
void solve() {
	// int n, cnt = 0; cin >> n;
	int cnt = 0;
	string s; cin >> s;
	string x = "0", y = "0";
	for (int i = 0; i < s.size(); i++) {
		int a = s[i] - '0';
		if (a%2 == 0) {
			int b = a/2;
			string k = to_string(b);
			x += k;
			y += k; 
		}
		else {
			int b = (a / 2) + 1;
			int c = a / 2;
			string e = to_string(b);
			string f = to_string(c);
			if (cnt % 2 == 0) {
				x += e;
				y += f;
				cnt++;
			}
			else {
				x += f;
				y += e;
				cnt++;
			}

		}
	}
	int k = stoi(x);
	int l = stoi(y);
	cout << k << " " << l << endl;
}

int main ()  
{
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

}