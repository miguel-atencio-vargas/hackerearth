#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, P, cheap, expansive;
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &cheap, &expansive);
		scanf("%d", &P);
		int a=0, b=0, i, j, totalA, totalB;
		if(cheap > expansive){
			int aux = cheap;
			cheap = expansive;
			expansive = aux;
		}
		while(P--){
			scanf("%d %d", &i, &j);
			a+=i; b+=j;
		}
		if(a>b){
			totalA = a * cheap;
			totalB = b * expansive;
		}else{
			totalB = b * cheap;
			totalA = a * expansive;
		}
		printf("%d\n", totalA + totalB);
	}
	return 0;
}