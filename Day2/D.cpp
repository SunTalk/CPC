#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100
// Not Finish
int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("D.in", "r", stdin);
	freopen("D.out", "w", stdout);
	#endif

	int kase;
	scanf("%d",&kase);
	int num,tmp;
	string str;
	int table[10];// 0 1 2 3 -1 -2 -3

	while( kase-- ){
		scanf("%d\n",&num);
		int ans = 0;
		memset(table,0,sizeof(table));

		getline(cin,str);
		for(int i = 0 ; i < str.size() ; i++ ){
			if( '1' <= str[i] && str[i] <= '3' ){
				if( str[i-1] == '-' )
					table[(str[i]-'0')]--;
				else
					table[(str[i]-'0')]++;
			}
		}
		// printf("%d %d %d\n",table[1],table[2],table[3] );
		while( table[1] > 0 && table[3] < 0 && table[2] > 0 ){
			table[1]--;
			table[2]--;
			table[3]++;
		}
		while( table[1] < 0 && table[3] > 0 && table[2] < 0 ){
			table[1]++;
			table[2]++;
			table[3]--;
		}
		// printf("%d %d %d\n",table[1],table[2],table[3] );
		ans = table[1]*1 + table[2]*2 + table[3]*3;
		if( ans < 0 || ans > 3 )
			printf("NO\n");
		else if( table[1] == 0 && table[2] > 0 && table[3] < 0 )
			printf("NO\n");
		else if( table[1] == 0 && table[3] > 1 && table[2] < 0 )
			printf("NO\n");
		else
			printf("YES\n");

	}

	return 0;
}