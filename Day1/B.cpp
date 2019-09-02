#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100

int f(int k){
	if( k%2 )
		return 3*k+1;
	else
		return k/2;
}

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("B.in", "r", stdin);
	freopen("B.out", "w", stdout);
	#endif	
	
	int num,check,ans;
	map <int,int> table;

	while( ~scanf("%d",&num) ){

		ans = 1;
		check = -1;
		table.clear();
		while( table.size() != check ){
			check = table.size();
			table[num] = 1;
			num = f(num);
			ans++;
		}

		printf("%d\n",ans-1 );

	}

	return 0;
}