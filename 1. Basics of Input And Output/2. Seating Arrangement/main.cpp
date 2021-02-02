#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string seat[6] = {"WS", "MS", "AS", "AS", "MS", "WS"};
	int T, n, sep, upper, res, mult;
	scanf("%i", &T);
	while(T--) 
	{
		scanf("%i", &n);
		mult = n/12;
		if(mult==0){mult=1;}
		
		//cout<<"mult: "<<mult<<endl;
		sep = n%(mult*12);
		if(sep==0){sep=12;}
		

		if(sep<=6){
			upper = 6 - sep;
			res = n + (upper * 2) +1;
		}else{
			upper = sep - 7;
			res = n - (upper * 2) - 1;
		}
		if(sep>6){
			sep -= 6;
		}
		printf("%i ", res);
		cout<<seat[sep-1]<<endl;
	}
	return 0;
}