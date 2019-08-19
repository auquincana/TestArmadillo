// TestArmadillo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <armadillo>
#include <numeric>

using namespace std;
using namespace arma;

int main()
{
	size_t n = 5;
	
	// Vector
	vec v(n);
	vec w(n);
	// Completitud del vector
	iota( begin(v), end(v), 1) ;
	iota (begin(w), end(w), 6);
	
	cout << v << endl;
	cout << w << endl;
	// Calcula producto punto
	cout << " El producto escalar es: "<< dot(v, w) << endl;

	mat AA(2, n);
    iota(begin(AA), end(AA), 1);

	cout <<" \n" << AA << endl;
	cout << "La traspuesta de la matriz es: \n"<< AA.t() << endl;

	mat A = randu<mat>(4, n);
	mat B = randu<mat>(4, n);

	//cout << A * B.t() << endl;

	return 0;
}

