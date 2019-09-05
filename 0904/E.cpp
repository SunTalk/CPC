#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 500

struct people{
	int tall,like;
	bool operator<(const people &rhs) const{
		if(tall == rhs.tall)
			return like < rhs.like;
		return tall < rhs.tall;
	}
};

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("E.in", "r", stdin);
	freopen("E.out", "w", stdout);
	#endif

	int kase;
	scanf("%d",&kase);

	int num;
	people table[MAXN+5];
	int LB[MAXN+5];
	int RW[MAXN+5];

	while( kase-- ){

		scanf("%d",&num);
		for(int i = 0 ; i < num ; i++ )
			scanf("%d %d",&table[i].tall,&table[i].like);
		sort(&table[0],&table[num]);

		memset(LB,0,sizeof(LB));
		memset(RW,0,sizeof(RW));
		for(int i = 0 ; i < num ; i++ ){
			if( table[i].like == 1 )
				LB[i]++;
			if( i != 0 )
				LB[i] += LB[i-1];
		}
		for(int i = num-1 ; i >= 0 ; i-- ){
			if( table[i].like == 0 )
				RW[i]++;
			if( i != num-1 )
				RW[i] += RW[i+1];
		}

		int ans = 0;
		for(int i = 1 ; i < num ; i++ ){
			if( table[i-1].tall != table[i].tall ){
				int tmp = LB[i-1]+RW[i];
				tmp = max(tmp,num-tmp);
				ans = max(ans,tmp);
			}
		}

		printf("%d\n",ans );

	}

	return 0;
}