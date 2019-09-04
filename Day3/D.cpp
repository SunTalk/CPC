#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 1000

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("D.in", "r", stdin);
	freopen("D.out", "w", stdout);
	#endif

	int kase;
	scanf("%d",&kase);

	int table[MAXN+5];
	int num;

	while( kase-- ){
		
		scanf("%d",&num);
		memset(table,0,sizeof(table));
		for(int i = 0 ; i < num ; i++ )
			scanf("%d",&table[i]);
		sort(&table[0],&table[num]);
		
		int ans = -1;
		for(int i = 0 ; i <= num/2 ; i++ ){
			if( table[i] == table[i+num/2] )
				ans = table[i];
		}

		printf("%d\n",ans );

	}

	return 0;
}