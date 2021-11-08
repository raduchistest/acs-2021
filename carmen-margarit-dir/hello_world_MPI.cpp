#include <iostream>
#include <mpi.h>
using namespace std;
int main(int argc, char** argv)
{
	int id, proc;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &proc);

    MPI_Comm_rank(MPI_COMM_WORLD, &id);

    // Print off a hello world message
    cout<<"HELLO WORLD "<< id<<endl;

    // Finalize the MPI environment.
    MPI_Finalize();

}
