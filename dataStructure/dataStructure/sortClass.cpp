#include "sortClass.h"

MyClass::MyClass()
{
	
}

MyClass::~MyClass()
{
	
}

//简单插入排序 O(n^2) 稳定
void insert_sort(JD r[], int n)
{
	int i, j;
	for (i = 2; i <= n; i++)
	{
		r[0] = r[i];
		j = i - 1;
		while (r[0].key < r[j].key)
		{
			r[j + 1] = r[j];
			j--;
		}
		r[j + 1] = r[0];
	}

}

//希尔排序，分组插入排序, O(nlogn)~O(n^2) 不稳定
void shell_sort(JD r[], int n, int d[], int T)
{
	int i, j, k;
	JD x;
	k = 0;
	//循环每一趟进行分组
	while (k < T)
	{
		for (i = d[k] + 1; i < n; i++)
		{
			x = r[i];
			j = i - d[k];
			while (j > 0 && x.key < r[j].key)
			{
				r[j + d[k]] = r[j];
				j = j - d[k];
			}
			r[j + d[k]] = x;
		}
		k++;
	}

}

//简单选择排序 O(n^2) 不稳定
void sele_sort(JD r[], int n)
{
	int i, j, k;
	JD x;
	for (i = 1; i < n; i++)
	{
		k = i;
		for (j = i + 1; j <= n; j++)
		{
			if (r[j].key < r[k].key) k = j;
		}

		if (i != k)
		{
			x = r[i];
			r[i] = r[k];
			r[k] = x;
		}
	}

}


//冒泡排序改进 O(n^2)
void bubble_sort(JD r[], int n)
{
	int m, j, flag = 1;
	JD x;
	m = n;
	while (m > 1 && flag == 1)
	{
		flag = 0;  //记录本趟有没有交换
		int lastExchange = 0;
		for (j = 1; j < m; j++)
		{
			if (r[j].key > r[j + 1].key)
			{
				flag = 1;
				x = r[j];
				r[j] = r[j + 1];
				r[j + 1] = x;
				lastExchange = j;
			}
		}
		m= lastExchange;
	}

}

//快速排序  平均O(nlogn) 不稳定
void qk_sort(JD r[], int t, int w)
{
	int i, j, k;
	JD x;
	if (t >= w) return;
	i = t, j = w, x = r[i];
	while (i < j)
	{
		while ((i < j) && (r[j].key >= x.key)) j--;

		if (i < j)
		{
			r[i] = r[j];
			i++;
		}

		while ((i < j) && (r[i].key <= x.key)) i++;

		if (i < j)
		{
			r[j] = r[i];
			j--;
		}
	}
	r[i] = x;
	qk_sort(r, t, j - 1);
	qk_sort(r, j + 1, w);
}