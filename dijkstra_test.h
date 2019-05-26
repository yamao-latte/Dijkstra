#pragma once
#include <stdio.h>

#define MAX_VALUE 1111111
#define SIZE 1000
#define TRUE 1
#define FALSE 0
int distance[SIZE][SIZE];	//枝の重み
int cost[SIZE];				//点の最短経路のコスト
int rooter[SIZE];			//goalまでの最短経路
int N;						//点の数
char alused[SIZE];			//x点の最短経路が出たか銅か