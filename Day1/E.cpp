#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("E.in", "r", stdin);
	freopen("E.out", "w", stdout);
	#endif

	long long num,tmp,mmin,ans;

	while( ~scanf("%lld",&num) ){
		int check = 1;
		mmin = INT_MAX;
		ans = 0;
		for(int i = 0 ; i < num ; i++ ){
			scanf("%lld",&tmp);
			if( abs(tmp) < mmin )
				mmin = abs(tmp);
			ans += abs(tmp);
			if( tmp < 0 )
				check *= -1;
		}

		if( check == -1 )
			ans -= (2*mmin);

		printf("%lld\n",ans );

	}


	return 0;
}