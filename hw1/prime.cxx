/****************************************************************
 ****
 **** This program file is part of the book 
 **** `Parallel programming for Science and Engineering'
 **** by Victor Eijkhout, eijkhout@tacc.utexas.edu
 ****
 **** copyright Victor Eijkhout 2020
 ****
 **** MPI Exercise  using MPL
 ****
 ****************************************************************/

#include <iostream>
#include <sstream>
using namespace std;
#include <mpl/mpl.hpp>

int main() {

  const mpl::communicator &comm_world = mpl::environment::comm_world();
  int nprocs, procno;
  nprocs = comm_world.size();
  procno = comm_world.rank();
  int bignum = 2000000111, maxfactor = 45200;
  stringstream proctext;
  
  // Exercise:
  // -- Parallelize the do loop so that each processor
  //    tries different candidate numbers.
  // -- If a processors finds a factor, print it to the screen.

  // 1. Set loop bounds
  int div = ceil(maxfactor/nprocs);
/**** your code here ****/
  // 2. Fill in loop header
  for ( int myfactor=1+procno*div; myfactor <(procno+1)*div; myfactor ++
       ) {
    if (bignum%myfactor==0) {
      proctext << "Processor " << procno << " found factor " << myfactor << endl;
      proctext << "Processor " << procno << " found factor " << bignum/myfactor << endl;
      cerr << proctext.str(); proctext.clear();
    }
  }

  return 0;
}
