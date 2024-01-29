/****************************************************************
 ****
 **** This program file is part of the book 
 **** `Parallel programming for Science and Engineering'
 **** by Victor Eijkhout, eijkhout@tacc.utexas.edu
 ****
 **** copyright Victor Eijkhout 2012-2020
 ****
 **** MPI Exercise using MPL
 ****
 ****************************************************************/

#include <iostream>
using namespace std;
#include <mpl/mpl.hpp>

int main(int argc,char **argv) {

/**** your code here ****/
	cout << "before init" << endl;
	
	MPI_Init(&argc, &argv);
	cout << "inside" << endl;
	MPI_Finalize();

	cout << "after init" << endl;

  return 0;
}
