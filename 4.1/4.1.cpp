#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	N = 20;
	S = 0;
	i = N;
	while (i <= N)
	{
		S += (cos(1. * i) + sin(1. * i))/(1+(cos(1. * i)*sin(1. * i)));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = N;
	do {
		S += (cos(1. * i) + sin(1. * i)) / (1 + (cos(1. * i) * sin(1. * i)));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = N; i <= N; i++)
	{
		S += (cos(1. * i) + sin(1. * i)) / (1 + (cos(1. * i) * sin(1. * i)));
	}
	cout << S << endl;

	S = 0;
	for (i = N; i >= N; i--)
	{
		S += (cos(1. * i) + sin(1. * i)) / (1 + (cos(1. * i) * sin(1. * i)));
	}
	cout << S << endl;
	return 0;
}