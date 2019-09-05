#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100000

int table[MAXN+5];

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("D.in", "r", stdin);
	freopen("D.out", "w", stdout);
	#endif

	int cut,num,ans;
	vector <int> after;

	while( ~scanf("%d %d",&cut,&num) ){

		for(int i = 0 ; i < num ; i++ )
			scanf("%d",&table[i]);
		sort(&table[0],&table[num]);

		if( cut > num ){
			printf("0\n");
			continue;
		}

		after.clear();
		for(int i = 1 ; i < num ; i++ )
			after.push_back(table[i]-table[i-1]);
		sort(after.begin(), after.end());

		ans = 0;
		for(int i = 0 ; i < num-(cut-1)-1 ; i++ )
			ans += after[i];
	
		printf("%d\n", ans);
	}

	return 0;
}