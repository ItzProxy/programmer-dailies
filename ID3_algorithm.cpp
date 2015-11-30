#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float entropy(int a, int b){
   float l = log2((float)a/(float)b);
   printf(":%f\n",l);
   float entropy = -1*((float)a/(float)b)*l;
   return entropy;
}
void entropyFinderMode(){
  int a,b,d;
  float* c;
  float total = 0;
  printf("how many...\n");
  cin >> d;
  c = new float[d];
  for(int i = 0;i < d; i++){
    printf("%d:enter a and b\n",i);
    cin >> a >> b;
    c[i] = entropy(a,b);
    total += c[i];
  }
 for(int i = 0; i < d; i++){
   printf("%d = %f\n", i, c[i]);
 }
  printf("total = %f\n", total);
}
int main(){
  int mode;
  do{
    printf("Select mode:");
    cin >> mode;
    switch(mode){
      case 1:
          entropyFinderMode();
          break;
      case 2:
          printf("hello\n");
          break;
      case 0:
          printf("Exiting...\n");
          exit(0);
      default:
        printf("invalid command\n");
    }
    
  }while(mode != 0);
  return 0;
}
