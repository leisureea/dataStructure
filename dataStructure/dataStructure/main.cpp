#include "sortClass.h"







void main()
{

	double sta = (double)getTickCount();
	int d[] = { 5,1 };
	JD r[] = { {0,0},{44,23},{22,1},{11,1},{33,1},{55,1},{77,23},{88,1},{66,1},{99,1} };

	//shell_sort(r, sizeof(r) / sizeof(r[0]) - 1, d,2);
	qk_sort(r, 1,9);
	cout << "Time:  " << ((double)getTickCount() - sta) * 1000 / getTickFrequency() << "ms" << endl;

	for (size_t i = 1; i < sizeof(r) / sizeof(r[0]); i++)
	{
		cout << r[i].key << endl;
	}
	
	
}