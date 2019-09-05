#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("G.in", "r", stdin);
	freopen("G.out", "w", stdout);
	#endif

	int kase;
	scanf("%d\n",&kase);
	string str;
	stack <int> calculate;

	while( kase-- ){

		cin >> str;
		while( !calculate.empty() )
			calculate.pop();

		for(int i = 0 ; i < str.size() ; i++ ){
			if( '0' <= str[i] && str[i] <= '9' )
				calculate.push(str[i]-'0');
			else if( str[i] == '*' ){
				int tmp = calculate.top();
				calculate.pop();
				i++;
				calculate.push(tmp*(str[i]-'0'));
			}
		}

		int ans = 0;
		while( !calculate.empty() ){
			ans += calculate.top();
			calculate.pop();
		}

		printf("%d\n",ans );

	}

	return 0;
}