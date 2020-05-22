#pragma once
#include <iostream>
#include <opencv2\opencv.hpp>
using namespace std;
using namespace cv;

class MyClass
{
public:
	MyClass();
	~MyClass();

private:
	
};

typedef struct
{
	int key;
	float info;
}JD;

//�򵥲�������
void insert_sort(JD r[], int n);
//ϣ�����򣬷����������
void shell_sort(JD r[], int n, int d[], int T);
//��ѡ������ O(n^2) ���ȶ�
void sele_sort(JD r[], int n);
//ð������
void bubble_sort(JD r[], int n);
//��������
void qk_sort(JD r[], int t, int w);