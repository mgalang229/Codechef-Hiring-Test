#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		// create a 'verdict' variable to store the resulting sequence
		string verdict = "";
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			int full = 0;
			int partial = 0;
			for (int j = 0; j < (int) s.size(); j++) {
				if (s[j] == 'F') {
					// if the character is equal to 'F', then increment 'full'
					full++;
				} else if (s[j] == 'P') {
					// otherwise, if the character is equal to 'P', then increment 'partial'
					partial++;
				}
			}
			if ((full >= x) || (full >= (x - 1) && partial >= y)) {
				// if 'full' is greater than or equal to 'x' OR
				// 'full' is greater than or equal to 'x' - 1 and
				// 'partial' is greater than or equal to 'y',
				// then concatenate '1' in the 'verdict' variable
				verdict += "1";
			} else {
				// otherwise, concatenate '0'
				verdict += "0";
			}
		}
		cout << verdict << '\n';
	}
	return 0;
}
