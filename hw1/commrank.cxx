/****************************************************************
 ****
 **** This program file is part of the book 
 **** `Parallel programming for Science and Engineering'
 **** by Victor Eijkhout, eijkhout@tacc.utexas.edu
 ****
 **** copyright Victor Eijkhout 2020
 ****
 **** MPI Exercise for the use of Comm_rank/size
 ****
 ****************************************************************/

#include <iostream>
#include <sstream>
using namespace std;
#include <mpl/mpl.hpp>

int main(int argc,char **argv) {
  const mpl::communicator &comm_world = mpl::environment::comm_world();
  int nprocs, procno;
 
  // Exercise part 1:
  // -- Use the 
  //    `size' and `rank' methods
  // -- Let each processor print out a message like
  //    "Hello from processor 7 out of 12"
  //    reporting its number and the total number.
  stringstream proctext;
/**** your code here ****/
//MPI_Init(&argc,&argv);
  nprocs = comm_world.size();
  procno = comm_world.rank();
  proctext << "Hello from processor " << procno << " out of " << nprocs << endl;
  cerr << proctext.str(); proctext.clear();

  // Exercise part 2:
  // -- let only processs zero print out
  //    "There are 16 processes"
  //    reporting only the total number
/**** your code here ****/
  if (procno==0){
	  cout << "There are " << nprocs << " processors" << endl;
  } 
  return 0;
}
