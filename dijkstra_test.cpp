///*ダイクストラ法*/
///*外部から必要なもの
//	要素数N
//	枝数root
//	枝の両点distance
//	コストcost
//	スタート点とゴール点start,goal
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include"dijkstra_test.h"
//
//int dijkstra(int start, int goal)
//{
//	int min, target;
//
//	 *(cost+start) = 0;
//
//	while(1){
//
//		min = MAX_VALUE;
//		//要素の個数分
//		/* 未確定の中から距離が最も小さい地点(a)を選んで、その距離を その地点の最小距離として確定します */
//		for (int i = 0; i < N; i++) {
//
//			if ( ((*(alused+i) )==FALSE) &&  min>(*(cost+i)) ) {
//				min = *(cost + i);
//				target = i;
//				printf("\nmin:%d	target:%d", min,target);
//			}
//		}
//
//		if (target == goal) { 
//			printf("\n%d", *(cost + goal));
//			return *(cost+goal); 
//		}/* 全ての地点の最短経路が確定 */
//
//		/*コストの処理*/
//		for (int root = 0; root < N; root++) {
//			/*ターゲット-0~Nの重みとターゲットまでのコストの重みより最短点コストの0~Nが大きい時上書きする*/
//			if (*(cost+root) >(*(*(distance + target) + root)) + *(cost + target)) {
//				
//				*(cost + root) = ( *(*(distance+target)+root) ) + *(cost + target);
//
//				*(rooter+root) = target;
//				printf("\nrooter:%d", *(rooter+root) );
//			}
//
//		}//for (int rootおわり
//
//	*(alused+target) = TRUE;	//最短コストでた
//
//	}//while(1)おわり
//
//}
//
//int main(void) {
//	int r;
//	int one, two, this_cost;
//	int start, goal;
//
//	/*初期化*/
//
//	for (int i = 0; i < SIZE; i++) {
//		*(cost+i) = MAX_VALUE;	//最大化
//		*(alused+i) = FALSE;	//使用済みではない
//		*(rooter+i) = -1;
//		//
//		for (int j = 0; j < SIZE; j++) { *(*(distance + i) + j) = MAX_VALUE; }
//	}
//
//	/* 入力 */
//	scanf("%d %d", &N, &r);		
//	for (int i = 0; i < r; i++) {
//		scanf("%d %d %d", &one, &two, &this_cost);
//		distance[one][two] = this_cost;
//	}
//	scanf("%d %d", &start, &goal);
//
//	printf("distance:%d\n", dijkstra(start, goal));
//
//	/*最短経路の詳細*/
//	int node = goal;
//	printf("%d", node);
//	while (1) {
//		node = *(rooter+node);
//		printf(" << %d", node);
//		if (node == start) break;
//	}
//
//	return 0;
//}
