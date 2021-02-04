#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T, call, liftA = 0, liftB=7, cost, cost2;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &call);
		
		cost = abs(liftA - call);
		cost2 = abs(liftB - call);
		if(cost <= cost2){
			printf("%s\n", "A");
			liftA = call;
		}else{
			printf("%s\n", "B");
			liftB = call;
		}
	}
	return 0;
}