#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a[100], n, cnt = 0, t;
	cin >> n;
	t = n;
	while(n != 0){
		a[cnt] = n%10;
		n /= 10;
		cnt++;
	}
	int cnt2 = 0;
	for(int  i = cnt-1; i >= 0; i--){
		if(a[i] != 0){
			cnt2++;
		}
	}
	int z = cnt;
	if(cnt2 == 1){
		cout << 1 << "\n" << t;
	} else{ 
		cout << cnt2 << "\n";
		for(int i = cnt-1; i >= 0; i--){
			if(a[i] != 0){
				cout << a[i];
				for(int j = 0; j < z-1; j++){
					cout << 0;
				}	
				cout << " ";	
			}
			z--;
		}
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}