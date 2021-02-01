#include <bits/stdc++.h>


using namespace std;


int main()
{
	int n;
	char line[20];
	scanf("%i", &n);
	scanf("%s", line);
	bool notHache = true, si = true;
	
	for (int i = 0; i < strlen(line); i++) {
		if (notHache || line[i]=='.'){
			if (line[i]=='H') {
				notHache = false;
			} else {
				notHache = true;
				line[i]='B';
			}
		}else{
			si = false;
			printf("%s\n", "NO");
			break;
		}
	}
	
	if (si){
		printf("%s\n", "YES");
		printf("%s\n", line);
	}
	return 0;
}
