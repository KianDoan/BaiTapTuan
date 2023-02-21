#include<iostream>

#include<math.h>

using namespace std;

bool isPrime(int n) 
{
	if (n == 1)
		return false;
	if(n>3)
		for (int i = 2; i <= sqrt(n); i++) 
		{
			if (n % i == 0)
			{
				return false;
				break;
			}
		}
	return true;
}

int main()
{
	int n;
	cin >> n;
	bool b = isPrime(n);
	if (b == true)
		cout << "yes";
	else
		cout << "no";
	return 0;
}