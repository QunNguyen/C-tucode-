int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, x, y;
		cin >> a>>x>> y;
		 long long s = gcd(x,y); 
		 for (int i = 0; i < s ; i++)
		 { 
		     cout << a; 
		 } 
		 cout << endl; 
	}
}
