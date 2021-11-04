#include <iostream>
#include <omp.h>

using namespace std;

int main (void)
{
# pragma omp parallel num_threads(6)
{
    int id = omp_get_thread_num();
    cout << "Hello! This is thread " << id << endl;
}
  return 0;
}
