#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	ifstream citeste("rotiremat.in");
	ofstream scrie("rotiremat.out");
	int n;
	citeste >> n;
	int a[n][n],
	    A[2*n-1][2*n-1],
	    linie = 0,
	    coloana = (2*n-1)/2,
	    i,
	    j;
	memset(A, 0, sizeof(A));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			citeste >> a[i][j];
			A[linie + j][coloana + j] = a[i][j];
		}
		linie++;
		coloana--;
	}
	citeste.close();
	for (i = 0; i < 2*n-1; i++)
	{
		for (j = 0; j < 2*n-1; j++)
		{
			scrie << A[i][j] << ' ';
		}
		scrie << endl;
	}
	scrie.close();
	return 0;
}

