#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _SAMPLE_H_
#ifdef  _SAMPLE_H_
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include"UniqueArray.hpp"
using namespace std;
using namespace asc;
#define MAX_VALUE 1111111
#define SIZE 1000
#define TRUE 1
#define FALSE 0


class Serach {

protected:
	int start, goal;					//スタート地点、ゴール地点の点
	asc::unique_array_2d<int> distance; //枝のコスト
	vector<int> cost;					//点の最短経路のコスト
	vector<int> rooter;					//goalまでの最短経路
	int N;								//点の数
	int root_num;						//枝の数
	vector<int> alused;					//x点の最短経路が出たか銅か
public:
	

	Serach();
	virtual ~Serach();
	//virtual int serachRun();
	//virtual void setRoot(string);
	void setN(int num) { N = num; }
	void setRootNum(int num) { root_num = num; }
	void setNandRnum();
	void appendRoot();
	void setStartGoal();
	int getStart() const noexcept { return start; }
	int getGoal() const noexcept { return goal; }
	int getN() const noexcept { return N; }
	int getRootNum() const noexcept { return root_num; }
	vector<int> getRooter() const noexcept { return rooter; }
	void readRootText(char*);
	//int get();
};
#endif //  _SAMPLE_H_
