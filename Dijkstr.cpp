#include"Dijkstra.h"


#define _CRT_SECURE_NO_WARNINGS
#include"dijkstra_test.h"

Dijkstra::~Dijkstra()
{
	//cout <<endl<< "Dijkstra�N���X�̃f�X�g���N�^" << endl;
}


int Dijkstra::serachRun()
{
	int min, target;
	cout << "�X�^�[�g�n�_: " << start;
	cout << "		�S�[���n�_: " << goal << endl;
	//*(cost + start) = 0;
	cost.at(start) = 0;

	while (1) {

		min = MAX_VALUE;
		//�v�f�̌���
		/* ���m��̒����狗�����ł��������n�_(a)��I��ŁA���̋����� ���̒n�_�̍ŏ������Ƃ��Ċm�肵�܂� */
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
			cout << "�T�����I�����܂�" << endl;
			//return *(cost + goal);
			return cost.at(goal);
		}/* �S�Ă̒n�_�̍ŒZ�o�H���m�� */

		 /*�R�X�g�̏���*/
		for (int root = 0; root < N; root++) {
			//uniquearray�d�l
			 if ((cost.at(root) > (distance[target][root]) + cost.at(target))) {
					cost.at(root) = distance[target][root] + cost.at(target);
					rooter.at(root) = target;
					cout << endl << "rooter: " << rooter.at(root);
				}

		}//for (int root�����

		//*(alused + target) = TRUE;	//�ŒZ�R�X�g�ł�
		alused.at(target) = TRUE;
	}//while(1)�����

}

