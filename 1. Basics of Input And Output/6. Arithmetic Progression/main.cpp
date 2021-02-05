#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c, T;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d %d", &a, &b, &c);
		int sol = abs(2*b-(a+c));
		sol = (sol+1)/2;
		printf("%i\n", sol);
	}
	
	return 0;
}