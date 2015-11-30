#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;
float entropy(int a, b){
   float entropy = (-1)*((a/b)log2(a/b));
}
int main(){
  int a,b,d;
  float* c;
  float total = 0;
  printf("how many...");
  cin >> d;
  c = new float[d];
  for(int i = 0;i < d; i++){
    printf("%d:enter a and b",i);
    cin >> a >> b;
    c[d] = entropy(a,b);
    total += c[d];
  }
 for(int i = 0; i < d; i++){
   printf("%d = %f\n", c[i]);
 }
  printf("total = %f\n", total);
  
  return 0;
}
