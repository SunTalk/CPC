#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 10

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("A.in", "r", stdin);
	freopen("A.out", "w", stdout);
	#endif

	int table[MAXN+5][MAXN+5];

	for(int i = 1 ; i < MAXN+5 ; i++ ){
		for(int j = 1 ; j < MAXN+5 ; j++ ){
			if( j == 1 || i == j )
				table[i][j] = 1;
			else if( i > j )
				table[i][j] = table[i-1][j]+table[i-1][j-1];
		}
	}

	int kase,a,b;
	scanf("%d",&kase);
	while( kase-- ){
		scanf("%d %d",&a,&b);
		printf("%d\n",table[a][b] );
	}

	return 0;
}