#pragma once
#include <stdio.h>

#define MAX_VALUE 1111111
#define SIZE 1000
#define TRUE 1
#define FALSE 0
int distance[SIZE][SIZE];	//�}�̏d��
int cost[SIZE];				//�_�̍ŒZ�o�H�̃R�X�g
int rooter[SIZE];			//goal�܂ł̍ŒZ�o�H
int N;						//�_�̐�
char alused[SIZE];			//x�_�̍ŒZ�o�H���o��������