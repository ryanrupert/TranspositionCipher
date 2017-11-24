/**
* Created by Ryan Rupert
* Date: 2017-11-07
* Source: None
* This will encode and decode using a transposition cipher
*/
#include "Transposition.h"

int *Trasposition::Encode(int plain[], int i_max)
{
	//index
	int index = 0;
	//find the length of the array
	int length = sizeof(plain);
	//find the number of column's needed
	int j_max = ceil(length / i_max);
	//output
	int output[length];
	//create new 2 dem int arrays
	table = new int*[5];
	for (int i = 0; i < 5; i++) 
	{
		table[i] = new int[7];
	}
	for (int i = 0; i < i_max; i++) 
	{
		for (int j = 0; j < j_max; j++) 
		{
			table[i][j] = plain[index];
			index++;
		}
	}
	for (int j = 0; j < j_max; j++) 
	{
		for (int i = 0; i < i_max; i++) 
		{
			output = table[i][j];
		}
	}
	return output;
}
