#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 1000

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("A.in", "r", stdin);
	freopen("A.out", "w", stdout);
	#endif

	int table[MAXN+5];
	memset(table,0,sizeof(table));
	for(int i = 1 ; i < MAXN+5 ; i++ ){
		for(int j = i ; j < MAXN+5 ; j++ ){
			for(int k = j ; k < MAXN+5 ; k++ ){
				if( k >= i+j )
					break;
				if( i+j+k < MAXN+5 )
					table[(i+j+k)]++;
				else
					break;
			}
		}
	}

	int kase;
	scanf("%d",&kase);
	int num;

	while( kase-- ){
		scanf("%d",&num);
		printf("%d\n",table[num] );
	}

	return 0;
}