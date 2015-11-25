#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<time.h>

float calc(int, int, int, float*);
bool inThresh(float, int);
void main(){
    float w[3];//weight
    float wo[3];//original wieghts
    int x0,x1,x2,y;
    
    cin >> x0 >> x1 >> x2 >> y;
    
    srand((float)time(NULL));
    for(int i = 0; i < 3; i++){
        w[i] = ((double)rand() / RAND_MAX) + 1; //gives a random weight, 0 <= x < 1
        wo[i] = w[i];//gets the original weight
    }
    
    float learning_rate = 0.01; //b 
    bool notInThresh = true; //compares so as long as the output is close to y it will break
    while(notInThresh){
        if(calc(x0,x1,x2,w) < y){
            for(int i = ; i < 3; i++)
                w[i] += learning_rate;
        }
        else{
            for(int i = ; i < 3; i++)
                w[i] -= learning_rate;
        }
        if(inThresh(calc(x0,x1,x2,w), y){
            notInThresh = false;
        }
    }
    float w0C = w[0] - wo[0];
    float w1C = w[1] - wo[1];
    float w2C = w[2] - wo[2];
    printf("changes in w0: %f, w1: %f, w2: %f\n",w0C,w1C,w2C);
}

float calc(int x0, int x1, int x2, float* w){
    float a,b,c;
    a = x0 * w[0];
    b = x1 * w[1];
    c = x2 * w[2];
    
    return a + b + c;
}

bool inThresh(float a, int b){
    float threshhold = 0.05;
    float c = a - float(b);
    if(abs(c) < threshhold){
        return true;
    }
    else{
        return false;
    }
}
