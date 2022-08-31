#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
void Imprimir_Suma_Matriz(int m,int n, int *matriz){
    int sumatoria = 0;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            sumatoria = matriz[i*m + j] + sumatoria;
        }
    }
    printf("%i",sumatoria);
}
/*void *thread_routine(void *arg){
  printf("ejecutando hilo...\n");
  
}

int main(int argc, char *argv[]){
  pthread_t thread1;
  int value;
  if (pthread_create (&thread1,NULL, thread_routine,&value)!=0){
    return -1;
  }
    ;
  return 0;
}*/
int main() {
    srand(time(NULL)); 
    int m = (rand() % 10)+1;
    int n = (rand() % 10)+1;
    int * intMatrix = (int *)malloc(m * n * sizeof(int)); 
    printf("m: %i n: %i \n",m,n);
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            intMatrix[i*m + j] = (rand() % 11);
            printf("%d ",intMatrix[i*m + j]);
        }
        printf("\n");
    }
    Imprimir_Suma_Matriz(m, n, intMatrix);
    
    free(intMatrix);
 
  return 0;

}