#include <bits/stdc++.h>
using namespace std;
void egyptianFraction(int n, int d)
{

	if (d == 0 || n == 0)
		return;
	if (d % n == 0) {
		cout << d / n;
		return;
	}
	if (n % d == 0) {
		cout << n / d;
		return;
	}
	if (n > d) {
		cout << n / d << endl;
		egyptianFraction(n % d, d);
		return;
	}
	int x = d / n + 1;
	cout << x <<endl;
	egyptianFraction(n * x - d, d * x);
}
int main()
{

        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
	int numerator, denominator;
    cin>>numerator>>denominator;

	egyptianFraction(numerator, denominator);
	return 0;
}
                                                                                                                            