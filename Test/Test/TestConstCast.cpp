#include <iostream>
using namespace std;
void main()
{
	const int ica = 100;
	int * ia = const_cast<int *>(&ica);
	*ia = 200;
	const int * pica = &ica;
	cout << *ia << ica << endl;   //200 100   
}