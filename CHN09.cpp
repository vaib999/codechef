#include<iostream>
#include<cstring>
using namespace std;
int main() 
{
	int t, n;
	int a, b;
	char s[101];
	cin >> t;
	while(t--) 
	{
		a = 0;
		b = 0;
		cin >> s;
		n = strlen(s);
		while(n--) 
		{
			if(s[n] == 'a') a++;
			else b++;
		}
		if(a == 0 || b == 0) cout << "0\n";
		else cout << (a < b ? a : b) << "\n";
	}
}	
		 
