#include <iostream>
#include <mpi.h>

int main(int argc, char** argv){
	int myid, num_of_procs;
	
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&num_of_procs);
	MPI_Comm_rank(MPI_COMM_WORLD,&myid);
	
	std::cout << "Hello straight out of " << myid << " id" << std::endl;
	MPI_Finalize();
}
