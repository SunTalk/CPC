#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100000
int table[MAXN+5];
int l[MAXN+5];
int r[MAXN+5];

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("C.in", "r", stdin);
	freopen("C.out", "w", stdout);
	#endif

	int num,tmp,ans;
	while( ~scanf("%d",&num) ){
		
		for(int i = 0 ; i < num ; i++ )
			scanf("%d",&table[i]);
		
		if( num == 2 ){
			printf("%d\n", max(table[0],table[1]) );
			continue;
		}

		l[0] = table[0];
		for(int i = 1 ; i < num ; i++ )
			l[i] = __gcd(l[i-1],table[i]);
		r[num-1] = table[num-1];
		for(int i = num-2 ; i >= 0 ; i-- )
			r[i] = __gcd(r[i+1],table[i]);

		ans = max(r[1],l[num-2]);
		for(int i = 1 ; i < num-1 ; i++ ){
			int tmp = __gcd(l[i-1],r[i+1]);
			if( tmp > ans )
				ans = tmp;
		}

		printf("%d\n",ans );

	}

	return 0;
}