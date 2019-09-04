#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100
struct ku{
	int id,x,y;
};

// not complete
int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("B.in", "r", stdin);
	freopen("B.out", "w", stdout);
	#endif

	int kase;
	scanf("%d",&kase);

	int N,M,K;
	vector < ku > total;
	vector <int> table[MAXN+5];
	bool check[MAXN+5];
	queue<int> Q;

	while( kase-- ){

		scanf("%d %d %d",&N,&M,&K);
		total.clear();

		ku tmp;
		for(int i = 0 ; i < N ; i++ ){
			tmp.id = i;
			scanf("%d %d",&tmp.x,&tmp.y);
			total.push_back(tmp);
			table[i].clear();
		}

		for(int i = 0 ; i < N ; i++ ){
			for(int j = i+1 ; j < N ; j++ ){
				int tmp = (total[i].x-total[j].x)*(total[i].x-total[j].x) + (total[i].y-total[j].y)*(total[i].y-total[j].y); 
				if( tmp <= K*K ){
					table[total[i].id].push_back(total[j].id);
					table[total[j].id].push_back(total[i].id);
				}
			}
		}
		
		while( !Q.empty() )
			Q.pop();
		memset(check,0,sizeof(check));
		for(int i = 0 ; i < M ; i++ )
			Q.push(i);

		int TMP,ans =0;
		while( !Q.empty() ){

			TMP = Q.front();
			Q.pop();

			if( !check[TMP] ){
				check[TMP] = 1;
				ans++;
				for(int i = 0 ; i < table[TMP].size() ; i++ )
					Q.push(table[TMP][i]);
			}

		}

		printf("%d\n",ans );

	}

	return 0;
}