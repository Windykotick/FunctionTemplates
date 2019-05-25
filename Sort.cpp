#include "Function.h"

template<typename T>
void Sort(T Arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Arr[j] < Arr[i])
			{
				T Buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Buffer;
			}
		}
	}
}