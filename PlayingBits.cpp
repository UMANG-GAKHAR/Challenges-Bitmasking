#include<iostream>
using namespace std;
int count_bitsEfficient(int n)
{
	int c = 0;
	while (n > 0)
	{
		n = n & n - 1;
		c++;
	}
	return c;
}
int main()
{
	int q, a, b, bits = 0;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		bits = 0;
		cin >> a >> b;
		for (int j = a; j <= b; j++)
		{
			bits += count_bitsEfficient(j);
		}
		cout << bits << endl;
	}
	return 0;
}
