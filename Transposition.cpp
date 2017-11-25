/**
* Created by Ryan Rupert
* Date: 2017-11-07
* Source: Sources in line
* This will encode and decode using a transposition cipher
*/
#include "Transposition.h"

int *Trasposition::Encode(int plain[], int i_max)
{
	if(!m_i_max)
		this -> clear();
	m_i_max = i_max;
	bool max = false;
	//index
	int index = 0;
	//find the length of the array
	int length = sizeof(plain);
	//find the number of column's needed
	int j_max = ceil(length / i_max);
	//output
	int output[length];
	//create new 2 dem int arrays
	//Source: https://www.tutorialcup.com/cplusplus/dynamic-memory.htm
	table = new int*[i_max];
	for (int i = 0; i < i_max; i++) 
	{
		table[i] = new int[j_max];
	}
	for (int i = 0; i < i_max; i++) 
	{
		for (int j = 0; j < j_max; j++) 
		{
			if (index == length) 
			{
				max = true;
				break;
			}
			table[i][j] = plain[index];
			index++;
		}
		if (max) 
		{
			break;
		}
	}
	index = 0;
	max = false;
	for (int j = 0; j < j_max; j++) 
	{
		for (int i = 0; i < i_max; i++) 
		{
			if (index == length) 
			{
				max = true;
				break;
			}
			output[index] = table[i][j];
			index++;
		}
		if (max) 
		{
			break;
		}
	}
	return output;
}

int *Transposition::Decode(int cipher[], int i_max)
{
	if(!m_i_max)
		this -> clear();
	m_i_max = i_max;
}

void Transposition::clear()
{
	for (int i = 0; i < m_i_max; i++)
	{
		delete[] table[i];
	}
	delete[] table;
	table = NULL;
}
