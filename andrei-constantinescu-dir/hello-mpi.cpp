#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char** argv)
{
	int myId;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &myId);

	cout << myId << " Hello World!" << endl;

	MPI_Finalize();
}
