#pragma once

class Transposition
{
	public:
		int Encode(int plain[]);
		int Decode(int cipher[]);
		void clear();
	private:
		int *p = NULL;
};
