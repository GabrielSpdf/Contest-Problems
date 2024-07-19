//Accepted

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const long long LLINF = 4e18;
const double EPS = 1e-9;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	for(int _=1; _<=t; _++){
		vi r(10), ans;
		vector<string> vs(10);
		int maior=INT_MIN;

		for(int i=0; i<10; i++){
			cin >> vs[i] >> r[i];
		}

		for(int i=0; i<10; i++){
			if(r[i] == *max_element(r.begin(), r.end())) ans.push_back(i);
		}

		cout << "Case #" << _ << ":\n";
		for(int i=0; i<(int)ans.size(); i++) cout << vs[ans[i]] << "\n";
	}


    return 0;
}
