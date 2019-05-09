#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
void pixelMean(float *r, float *g, float *b);

int main() 
{
float image[5][5][3];
int x, y;
//float a, b, c;
// Don’t change this srand() line!
srand(0);

for(y = 0; y < 2; y++) 
{
    for(x = 0; x < 5; x++) 
    {
        printf("%d %d: ", x, y);
        image[x][y][0] = (float)rand()/(float)INT_MAX;
        image[x][y][1] = (float)rand()/(float)INT_MAX;        
        //b= &image[x][y][1];
        image[x][y][2] = (float)rand()/(float)INT_MAX;
        //c= &image[x][y][2];
        //avg=(a+b+c)/3;
        //image[x][y][0]=avg;
        //image[x][y][1]=avg;
        //image[x][y][2]=avg;
        pixelMean(&image[x][y][0], &image[x][y][1], &image[x][y][2]);
        
        printf("%f %f %f\n", image[x][y][0], image[x][y][1], image[x][y][2]);
    }
} 
return 0;
}

void pixelMean(float *r, float *g, float *b)
{
    float avg, sum;
    sum= *r+*g+*b;
    avg = (sum)/3;
    //printf("%f\n", avg);
    *r=avg;
    *g=avg;
    *b=avg;
}