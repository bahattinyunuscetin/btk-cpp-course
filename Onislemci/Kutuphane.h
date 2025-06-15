#include "test.h"

#ifndef _KUTUPHANE
    #include "test.h"
	int topla(int a,int b);
#endif  //debug
#define _KUTUPHANE	


class Mat {
	private:
		int a{};
		int b{};

	public:
		Mat(int a,int b);

		int topla();
};

/*
Topla fonksyonu 2 adet al�r ...
*/
int topla(int a, int b);