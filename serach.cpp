#include "serach.h"

Serach::Serach() :rooter(SIZE,-1),cost(SIZE,MAX_VALUE),alused(SIZE,FALSE),distance(SIZE,SIZE,MAX_VALUE)
{
};

Serach::~Serach() {
	//cout << "Serach�N���X�̃f�X�g���N�^" << endl;
}


void Serach::appendRoot() {
	int p, p2, cost;

	if (root_num == NULL) {
		cout << "ERROR::���[�g�̐����ݒ肳��Ă��܂���B" << endl;
		return;
	}

	for (int i = 0; i < root_num; i++) {
		cin >> p >> p2 >> cost;

		distance[p][p2] = cost;
	}

}


/*�X�^�[�g�n�_�ƃS�[���n�_�̃Z�b�^�[*/
void Serach::setStartGoal() {
	cout << "�v�f�̐��F�@" << getN() << endl;
	cout << "�X�^�[�g�n�_��ݒ肵�Ă�������(0����v�f-1�̃p�����[�^)>>";
	
	cin >> start ;
	
	cout << "�S�[���n�_��ݒ肵�Ă�������(0����v�f-1�̃p�����[�^)>>";
	cin >> goal;

}
/*�_�̐��ƃ��[�g�̐��̃Z�b�^�[*/
void Serach::setNandRnum() {

	cin >> N >> root_num;

}


/*�e�L�X�g�t�@�C������o�H����ǂݍ���*/
void Serach::readRootText(char* fileString) {

	ifstream fin("rootdata.txt");
	string str;
	if (fin.fail()) {
		cerr << "ERROR:�t�@�C�������݂��܂���" << endl;
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

