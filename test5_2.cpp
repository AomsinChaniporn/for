#include<iostream>
using namespace std;
int main() 
{
	int n, character;
	cout << "Input number line : ";
	cin >> n;
	cout << "Input character : ";
	cin >> character;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= i; j++)
			cout << "@";
		cout << endl;
	}
	return(0);
}