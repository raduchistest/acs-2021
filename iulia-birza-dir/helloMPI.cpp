#include <iostream>
#include <mpi.h>

using namespace std;
int main(int argc, char** argv){
	int myid, numprocs;
	
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	
	cout<<numprocs<<" "<<myid<<" Hello World! "<<endl;
	MPI_Finalize();
}
