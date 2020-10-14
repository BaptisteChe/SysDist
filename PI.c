#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mpi.h>

int experience(int nbtirage)
{
  int circle_count = 0;
  for (int i=1;i<nbtirage;i++)
  {
    double x =  (double)rand()/RAND_MAX*2.0-1.0;//float in range -1 to 1
    double y =  (double)rand()/RAND_MAX*2.0-1.0;

    if( (x*x + y*y) <= 1)
    {
      circle_count += 1;
    }
  }

  return circle_count;
}

int main() {

  srand( time( NULL ) );

  int nbpoints = 1000000;
  float average_pi =0.0;

  float *score = null;
  

/*
  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD , &numPross);
  int MPI_Gather(nbpoints, int MAX_INT,MPI_Datatype float,
  void* 0, int &nbpoints, MPI_Datatype float, int 0, MPI_COMM_WORLD)
  */

  printf("%d\n",number);
  score = experience(nbpoints);


  //MPI_Finalize();

  average_pi= 4 * (score / nbpoints);

  printf("%f \n", average_pi );



}
