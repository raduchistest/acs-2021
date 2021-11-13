#include <iostream>
#include <mpi.h>

using namespace std;
int main(int argc, char** argv)
{
int myid, numproc;
MPI_Init(&argc,&argv);
MPI_Comm_size(MPI_COMM_WORLD,&numproc);
MPI_Comm_rank(MPI_COMM_WORLD,&myid);

cout<<"Hello world! by "<<myid<<endl;
MPI_Finalize();
}
