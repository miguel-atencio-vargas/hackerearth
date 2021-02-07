#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int l, r, k, c=0;
	scanf("%d %d %d", &l, &r, &k);
	for(int i=l; i<=r; i++ ){
		if(i%k==0){
			c++;
		}
	}
	printf("%d\n", c);

	return 0;
}