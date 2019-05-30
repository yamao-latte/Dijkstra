#include"Dijkstra.h"


#define _CRT_SECURE_NO_WARNINGS
#include"dijkstra_test.h"

Dijkstra::~Dijkstra()
{
	//cout <<endl<< "Dijkstraクラスのデストラクタ" << endl;
}


int Dijkstra::serachRun()
{
	int min, target;
	cout << "スタート地点: " << start;
	cout << "		ゴール地点: " << goal << endl;
	//*(cost + start) = 0;
	cost.at(start) = 0;

	while (1) {

		min = MAX_VALUE;
		//要素の個数分
		/* 未確定の中から距離が最も小さい地点(a)を選んで、その距離を その地点の最小距離として確定します */
		for (int i = 0; i < N; i++) {
			if ((min > cost.at(i)) && (alused.at(i) == FALSE)) {
				min = cost.at(i);
				target = i;
				cout << endl << "min: " << min << "		target: " << target;
			}

		}

		if (target == goal) {
			//printf("\n%d", *(cost + goal));
			cout << endl << cost.at(goal)<<endl;
			cout << "探索を終了します" << endl;
			//return *(cost + goal);
			return cost.at(goal);
		}/* 全ての地点の最短経路が確定 */

		 /*コストの処理*/
		for (int root = 0; root < N; root++) {
			//uniquearray仕様
			 if ((cost.at(root) > (distance[target][root]) + cost.at(target))) {
					cost.at(root) = distance[target][root] + cost.at(target);
					rooter.at(root) = target;
					cout << endl << "rooter: " << rooter.at(root);
				}

		}//for (int rootおわり

		//*(alused + target) = TRUE;	//最短コストでた
		alused.at(target) = TRUE;
	}//while(1)おわり

}

