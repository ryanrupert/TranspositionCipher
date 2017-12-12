/**
* Created by Ryan Rupert
* Date: 2017-11-24
* Source: None
* This is the header for the Transposition cipher class
*/
#pragma once
#include <cmath>
#include <cstddef>

class Transposition
{
	public:
		int *Encode(int plain[], int length, int i_max);
		int *Decode(int cipher[], int length, int i_max);
		void clear();
	private:
		int **table = NULL;
		int m_i_max = 0;
};
