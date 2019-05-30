#include "serach.h"

Serach::Serach() :rooter(SIZE,-1),cost(SIZE,MAX_VALUE),alused(SIZE,FALSE),distance(SIZE,SIZE,MAX_VALUE)
{
};

Serach::~Serach() {
	//cout << "Serachクラスのデストラクタ" << endl;
}


void Serach::appendRoot() {
	int p, p2, cost;

	if (root_num == NULL) {
		cout << "ERROR::ルートの数が設定されていません。" << endl;
		return;
	}

	for (int i = 0; i < root_num; i++) {
		cin >> p >> p2 >> cost;

		distance[p][p2] = cost;
	}

}


/*スタート地点とゴール地点のセッター*/
void Serach::setStartGoal() {
	cout << "要素の数：　" << getN() << endl;
	cout << "スタート地点を設定してください(0から要素-1のパラメータ)>>";
	
	cin >> start ;
	
	cout << "ゴール地点を設定してください(0から要素-1のパラメータ)>>";
	cin >> goal;

}
/*点の数とルートの数のセッター*/
void Serach::setNandRnum() {

	cin >> N >> root_num;

}


/*テキストファイルから経路情報を読み込む*/
void Serach::readRootText(char* fileString) {

	ifstream fin("rootdata.txt");
	string str;
	if (fin.fail()) {
		cerr << "ERROR:ファイルが存在しません" << endl;
		exit(0);
	}

	getline(fin, str);
	int pNum = 0, nodeNum = 0;
	sscanf(str.data(), "%d,%d", &pNum, &nodeNum);
	setN(pNum);
	setRootNum(nodeNum);

	
	while (getline(fin, str)) {
		int p = 0, p2 = 0, cost = 0;
		sscanf(str.data(), "%d,%d,%d", &p, &p2, &cost);
		distance[p][p2] = cost;
	}


	return ;
}

