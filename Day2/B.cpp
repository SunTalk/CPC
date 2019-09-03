#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("B.in", "r", stdin);
	freopen("B.out", "w", stdout);
	#endif

	int kase;
	scanf("%d",&kase);
	int N,X,Y,M;
	int a,b;

	while( kase-- ){
		scanf("%d %d %d %d",&N,&X,&Y,&M);
		b = (N-M*X)/(Y-X);
		a = M-b;
		printf("%d %d\n",a,b );
	}

	return 0;
}