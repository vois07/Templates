#include <stdio.h>
#include <stdlib.h>

/*

 Matrix multiplication

*/

int main(int argc, int* argv[])
{
  
  int nA,mA,nB,mB,i,j,it;
  //C[nA][mB]


//wczytywanie
  printf("Liczby wierszy i kolumn pierwszej macierzy\n");
  scanf("%d",&nA);
  scanf("%d",&mA);
  float *A[nA];
  for (i=0;i<nA;i++) A[i] = (float *)malloc(mA * sizeof(float));
  for(i=0;i<nA;i++)
    for(j=0;j<mA;j++)
      scanf("%f",&(A[i][j]));


  printf("Liczby wierszy i kolumn drugiej macierzy\n");
  scanf("%d",&nB);
  scanf("%d",&mB);  
  float *B[nB];
  for (i=0;i<nB;i++) B[i] = (float *)malloc(mB * sizeof(float));
  for(i=0;i<nB;i++)
    for(j=0;j<mB;j++)
      scanf("%f",&(B[i][j]));
  

//liczenie
  if (mA != nB) {printf("math err: brak wyniku\n"); return 1;}
  float *C[nA];
  for (i=0;i<nA;i++) C[i] = (float *)malloc(mB * sizeof(float));
  for(i=0;i<nA;i++)
    for(j=0;j<mB;j++)
      C[i][j] = 0;

  for(i = 0; i < nA; i++)
  {
    for(j = 0; j < mB; j++)
    {
      for (it = 0; it < mA; it++)
        C[i][j] += A[i][it]*B[it][j];
    }
  }   


//wyswietlanie
  printf("A:\n");
  for(i=0;i<nA;i++)
  {
    for(j=0;j<mA;j++)
      printf("%f ",A[i][j]);
    printf("\n");
  }
  printf("\nB:\n");
  for(i=0;i<nB;i++)
  {
    for(j=0;j<mB;j++)
      printf("%f ",B[i][j]);
    printf("\n");
  }
  printf("\nC:\n");
  for(i=0;i<nA;i++)
  {
    for(j=0;j<mB;j++)
      printf("%f ",C[i][j]);
    printf("\n");
  }

  return 0;
}
