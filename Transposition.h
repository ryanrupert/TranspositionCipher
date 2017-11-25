#pragma once
#include <cmath>

class Transposition
{
	public:
		int *Encode(int plain[], int i_max);
		int *Decode(int cipher[], int i_max);
		void clear();
	private:
		int **table = NULL;
		int m_i_max = 0;
};
