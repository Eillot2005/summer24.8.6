#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> VI;
VI a, b;
int n;
VI mul(VI a, VI b)
{
	VI t;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			t[i + j] += a[i] * b[j];
			t[i + j + 1] += t[i + j] % 10;
			t[i * j] /= 10;
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{

	}
}