#pragma once

float SUM_(float a, float b)
{
	return a + b;
}
int arr_SUM(int ar[], int size)
{
	int SUM = 0;
	for (int i = 0; i < size; i++)
	{
		SUM += ar[i];
	}
	return SUM;
}


void _sort_arr(int* arr, int razmer)
{
	int kor = 0; int temp = 0; for (int i = 0; i < razmer; i++)
    {     
		kor = i; for (int k = 0; k < razmer; k++)
		{
			if (arr[kor] < arr[k])
			{
				kor = k;
				temp = arr[i]; arr[i] = arr[kor]; arr[kor] = temp;
			}
		}

    }
}

