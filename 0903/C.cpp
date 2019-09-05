#include <bits/stdc++.h>

using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
#define MAXN 100

int table[15][8];
long long ans[15][8];

void set_ans(){
	ans[ 1][1]=     3,ans[ 1][2]=       6,ans[ 1][3]=         12,ans[ 1][4]=            24,ans[ 1][5]=               48,ans[ 1][6]=                 96;
	ans[ 2][1]=     6,ans[ 2][2]=      18,ans[ 2][3]=         54,ans[ 2][4]=           162,ans[ 2][5]=              486,ans[ 2][6]=               1458;
	ans[ 3][1]=    12,ans[ 3][2]=      54,ans[ 3][3]=        246,ans[ 3][4]=          1122,ans[ 3][5]=             5118,ans[ 3][6]=              23346;
	ans[ 4][1]=    24,ans[ 4][2]=     162,ans[ 4][3]=       1122,ans[ 4][4]=          7812,ans[ 4][5]=            54450,ans[ 4][6]=             379602;
	ans[ 5][1]=    48,ans[ 5][2]=     486,ans[ 5][3]=       5118,ans[ 5][4]=         54450,ans[ 5][5]=           580986,ans[ 5][6]=            6204438;
	ans[ 6][1]=    96,ans[ 6][2]=    1458,ans[ 6][3]=      23346,ans[ 6][4]=        379602,ans[ 6][5]=          6204438,ans[ 6][6]=          101596896;
	ans[ 7][1]=   192,ans[ 7][2]=    4374,ans[ 7][3]=     106494,ans[ 7][4]=       2646540,ans[ 7][5]=         66274542,ans[ 7][6]=         1664748270;
	ans[ 8][1]=   384,ans[ 8][2]=   13122,ans[ 8][3]=     485778,ans[ 8][4]=      18451530,ans[ 8][5]=        707982258,ans[ 8][6]=        27284864220;
	ans[ 9][1]=   768,ans[ 9][2]=   39366,ans[ 9][3]=    2215902,ans[ 9][4]=     128643282,ans[ 9][5]=       7563227466,ans[ 9][6]=       447232269654;
	ans[10][1]=  1536,ans[10][2]=  118098,ans[10][3]=   10107954,ans[10][4]=     896895828,ans[10][5]=      80796885414,ans[10][6]=      7330916855718;
	ans[11][1]=  3072,ans[11][2]=  354294,ans[11][3]=   46107966,ans[11][4]=    6253122402,ans[11][5]=     863143206558,ans[11][6]=    120167900345196;
	ans[12][1]=  6144,ans[12][2]= 1062882,ans[12][3]=  210323922,ans[12][4]=   43596523890,ans[12][5]=    9220857727842,ans[12][6]=   1969792468989480;
	ans[13][1]= 12288,ans[13][2]= 3188646,ans[13][3]=  959403678,ans[13][4]=  303953253948,ans[13][5]=   98505357616986,ans[13][6]=  32288891319485190;
	ans[14][1]= 24576,ans[14][2]= 9565938,ans[14][3]= 4376370546,ans[14][4]= 2119150161594,ans[14][5]= 1052321399885238,ans[14][6]= 529280670290557896;
}

// void build(int a,int b,int X,int Y){
// 	if( b > Y ){
// 		ans[X][Y]++;
// 		return;
// 	}
// 	else{
// 		for(int i = 1 ; i <= 3 ; i++ ){
// 			if( table[a-1][b] != i && table[a][b-1] != i ){
// 				table[a][b] = i;
// 				if( a == X )
// 					build(1,b+1,X,Y);
// 				else
// 					build(a+1,b,X,Y);
// 				// table[a][b] = 0;
// 			}
// 		}
// 	}

// }

int main(int argc, char const *argv[])
{
	#ifdef DBG
	freopen("C.in", "r", stdin);
	freopen("C.out", "w", stdout);
	#endif

	// memset(ans,0,sizeof(ans));
	// for(int i = 1 ; i <= 6 ; i++ ){
	// 	for(int j = 1 ; j <= 6 ; j++ ){
	// 		memset(table,0,sizeof(table));
	// 		build(1,1,i,j);
	// 	}
	// }

	// for(int i = 1 ; i <= 14 ; i++ ){
	// 	for(int j = 1 ; j <= 6 ; j++ ){
	// 		printf("ans[%2d][%d]=%10lld,",i,j,ans[i][j] );
	// 	}
	// 	printf(";\n");
	// }
	set_ans();
	// for(int i = 1; i <= 14 ; i ++ ){
	// 	for(int j = 1; j <= 6 ; j++ ){
	// 		if( j > 3 )
	// 			printf("%20lld",ans[i][j]*6 );
	// 		else
	// 			printf("%12lld",ans[i][j]*6 );
	// 	}
	// 	printf("\n");
	// }

	int kase;
	scanf("%d",&kase);

	int H,W,C;
	while( kase-- ){
		scanf("%d %d %d",&H,&W,&C);
		if( C == 1 ){
			printf("0\n");
			continue;
		}
		if( C == 2 ){
			printf("2\n");
			continue;
		}

		printf("%lld\n", ans[H][W] );

	}

	return 0;
}