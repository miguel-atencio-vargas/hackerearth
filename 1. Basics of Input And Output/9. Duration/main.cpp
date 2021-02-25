#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, sh, sm, eh, em;
	scanf("%d", &N);
	while(N--){
		int t=0;
		scanf("%d %d %d %d", &sh, &sm, &eh, &em);
		while(sh < eh){
			t+=60-sm;
			sh++;
			sm=0;
		}
		t+=em;
		int h=0;
		while(t>=60){
			t-=60;
			h++;
		}
		printf("%d %d\n", h, t);
	}
	return 0;
}
