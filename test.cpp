/*�_�C�N�X�g���@�ɂ��ŒZ�o�H�T��
�e�L�X�g�f�[�^�̂���_�̐��A�}�̐���ǂݍ���ł���B
�R���\�[����ŃX�^�[�g�n�_�ƃS�[���n�_���L�[�{�[�h���͂œǂݍ��ށB

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


	/*�ŒZ�o�H�̏ڍ�*/
	int node = dij_solver->getGoal();
	vector<int> rooterP = dij_solver->getRooter();
	cout << "�ŒZ�o�H�̃��[�g:";
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