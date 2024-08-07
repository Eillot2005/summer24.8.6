#include<iostream>
using namespace std;
typedef long long ll;
ll a[10];
ll b[10];
int N;
ll sum = 1;
ll extend_gcd(ll a, ll b, ll &x, ll &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	else
	{
		ll r=extend_gcd(b, a % b, x, y);
		ll temp = x;
		x = y;
		y = temp - a / b * y;
		return r;
	}
}
ll china(ll m[], ll n[])
{
	ll ans = 0;
	for (int i = 0; i < N; i++)
	{
		ll t = sum / m[i];
		ll x, y;
		extend_gcd(t, m[i], x, y);
		ans = (ans + n[i] * t * x % sum) % sum;
	}
	return (ans%sum+sum) % sum;
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i] >> b[i];
		sum *= a[i];
	}
	cout << china(a, b) << endl;
	return 0;
}