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

//简单插入排序
void insert_sort(JD r[], int n);
//希尔排序，分组插入排序
void shell_sort(JD r[], int n, int d[], int T);
//简单选择排序 O(n^2) 不稳定
void sele_sort(JD r[], int n);
//冒泡排序
void bubble_sort(JD r[], int n);
//快速排序
void qk_sort(JD r[], int t, int w);