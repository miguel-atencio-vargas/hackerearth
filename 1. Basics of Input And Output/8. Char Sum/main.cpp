#include <bits/stdc++.h>
using namespace std;

int main()
{
	int weight = 0;
	char S[100];
	
	scanf("%s", S);
	for (int i = 0; i < strlen(S); ++i)
	{
		//prinf("%c\n", S[i]);
		//printf("%i\n", S[i]-96); // print weights
		weight += S[i]-96;
	}
	printf("%i\n", weight);
	return 0;
}