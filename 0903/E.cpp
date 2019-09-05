#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 10000
long long table[MAXN+5];

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("E.in", "r", stdin);
	freopen("E.out", "w", stdout);
	#endif

	int kase;
	scanf("%d",&kase);
	int way,score,tmp;

	while( kase-- ){
		
		memset(table,0,sizeof(table));
		table[0] = 1;
		scanf("%d %d",&way,&score);

		for(int i = 0 ; i < way ; i++ ){
			scanf("%d",&tmp);
			for(int j = tmp ; j <= score ; j++ )
				table[j] = table[j]+table[j-tmp];
		}

		printf("%lld\n", table[score]);

	}

	return 0;
}