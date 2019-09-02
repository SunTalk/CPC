#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 30

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("A.in", "r", stdin);
	freopen("A.out", "w", stdout);
	#endif

	int people,food;
	int table[MAXN+5];
	int kind,tmp;

	while( ~scanf("%d %d",&people,&food) ){
		memset(table,0,sizeof(table));
		for(int i = 0 ; i < people ; i++ ){
			scanf("%d",&kind);
			for(int j = 0 ; j < kind ; j++ ){
				scanf("%d",&tmp);
				table[tmp]++;
			}
		}
		int ans = 0;
		for(int i = 1 ; i <= food ; i++ )
			if( table[i] == people )
				ans++;
		printf("%d\n",ans );
	}

	return 0;
}