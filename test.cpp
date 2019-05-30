/*ダイクストラ法による最短経路探索
テキストデータのから点の数、枝の数を読み込んでいる。
コンソール上でスタート地点とゴール地点をキーボード入力で読み込む。

*/

#include<iostream>
#include<string>

#include"Dijkstra.h"
using namespace std;

 int main(int argc,char* argv[]) {
	Dijkstra* dij_solver;
	dij_solver = new Dijkstra();
	

	dij_solver->readRootText(argv[1]);

	dij_solver->setStartGoal();

	cout << "distance: " << (dij_solver->serachRun()) << endl;


	/*最短経路の詳細*/
	int node = dij_solver->getGoal();
	vector<int> rooterP = dij_solver->getRooter();
	cout << "最短経路のルート:";
	cout << node;
	while (1) {
		//node = *(rooter + node);
		node = rooterP.at(node);
		cout << " << " << node;
		//printf(" << %d", node);
		if (node == dij_solver->getStart() ) break;
	}
	delete dij_solver;
	return 0;


}