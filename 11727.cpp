#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n,kase=0;
	cin >> n;
	int a[3];
	while (n--) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		cout << "Case " << ++kase << ": " << a[1] << endl;
	}
	//system("PAUSE");
	return 0;
}