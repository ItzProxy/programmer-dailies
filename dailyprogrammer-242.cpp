#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
using namespace std;

struct show{
  int time_start;
  int time_end;
  char show_name[40];
};

int main(){
  FILE *inFile;
  int p, q;
  char r[40];
  show show_time[20];
  bool start = true;
  int counter = 0;
  
  inFile = fopen("test","r");
  
  while(fscanf(inFile, "%d %d %s", &p, &q, r) != EOF){
      show_time[counter].time_start = p;
      show_time[counter].time_end = q; 
      strcpy(show_time[counter].show_name,r);
      printf("%d %d %s\n",show_time[counter].time_start,show_time[counter].time_end,show_time[counter].show_name);
      counter++;
  }
  fclose(inFile);
  int current_end = show_time[0].time_end;
  printf("Name of shows recorded: %s ", show_time[0].show_name);
  for(int i = 1; i < counter; i++){
    if(current_end <= show_time[i].time_start){
      current_end = show_time[i].time_end;
      printf("%s ",show_time[i].show_name);
    }
  }
  printf("\n");
}
