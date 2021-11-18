#include <iostream>
#include <omp.h>
using namespace std;
int main()
{  
    int n=0;
    int i=0;
    cout<<"Enter n=";
    cin >> n;
    if(n>0)
    {
          #pragma omp parallel for
          for(i=0;i<n;i++)
           {
              cout <<"Hello("<< i <<") ...from thread=" << omp_get_thread_num()<<"\n" ; 
           }
     }else cout <<"You entered a negative number!\n";
}

   

