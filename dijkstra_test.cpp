///*�_�C�N�X�g���@*/
///*�O������K�v�Ȃ���
//	�v�f��N
//	�}��root
//	�}�̗��_distance
//	�R�X�gcost
//	�X�^�[�g�_�ƃS�[���_start,goal
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
//		//�v�f�̌���
//		/* ���m��̒����狗�����ł��������n�_(a)��I��ŁA���̋����� ���̒n�_�̍ŏ������Ƃ��Ċm�肵�܂� */
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
//		}/* �S�Ă̒n�_�̍ŒZ�o�H���m�� */
//
//		/*�R�X�g�̏���*/
//		for (int root = 0; root < N; root++) {
//			/*�^�[�Q�b�g-0~N�̏d�݂ƃ^�[�Q�b�g�܂ł̃R�X�g�̏d�݂��ŒZ�_�R�X�g��0~N���傫�����㏑������*/
//			if (*(cost+root) >(*(*(distance + target) + root)) + *(cost + target)) {
//				
//				*(cost + root) = ( *(*(distance+target)+root) ) + *(cost + target);
//
//				*(rooter+root) = target;
//				printf("\nrooter:%d", *(rooter+root) );
//			}
//
//		}//for (int root�����
//
//	*(alused+target) = TRUE;	//�ŒZ�R�X�g�ł�
//
//	}//while(1)�����
//
//}
//
//int main(void) {
//	int r;
//	int one, two, this_cost;
//	int start, goal;
//
//	/*������*/
//
//	for (int i = 0; i < SIZE; i++) {
//		*(cost+i) = MAX_VALUE;	//�ő剻
//		*(alused+i) = FALSE;	//�g�p�ς݂ł͂Ȃ�
//		*(rooter+i) = -1;
//		//
//		for (int j = 0; j < SIZE; j++) { *(*(distance + i) + j) = MAX_VALUE; }
//	}
//
//	/* ���� */
//	scanf("%d %d", &N, &r);		
//	for (int i = 0; i < r; i++) {
//		scanf("%d %d %d", &one, &two, &this_cost);
//		distance[one][two] = this_cost;
//	}
//	scanf("%d %d", &start, &goal);
//
//	printf("distance:%d\n", dijkstra(start, goal));
//
//	/*�ŒZ�o�H�̏ڍ�*/
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
