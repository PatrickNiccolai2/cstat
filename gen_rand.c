#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#include "gen_rand.h"

/*
Box-Muller transform
*/
void gen_normal_dist(int num, float *ret){
	for(int i = 0; i < num; i+=2){
		float r0 = (float) rand() / (float) RAND_MAX;
		float r1 = (float) rand() / (float) RAND_MAX;

		float z0 = sqrt((0-2) * log(r0)) * cos(2 * M_PI * r1);
		float z1 = sqrt((0-2) * log(r0)) * sin(2 * M_PI * r1);
		ret[i] = z0;
		ret[i+1] = z1;
	}
}