#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#include "../basic_stats.h"
#include "../gen_rand.h"

int main(){
	printf("hello\n");

	float arr[3] = {0.0,1.0,2.0};
	float x = mean_1d_array(3, arr);
	printf("%f\n", x);

	int num_rands = 10000;
	float *rands = (float *) malloc(num_rands*sizeof(float));
	gen_normal_dist(num_rands, rands);
	printf("rands at %p\n", rands);

	float mean = mean_1d_array(num_rands, rands);
	float sd = sd_1d_array(num_rands, rands);
	printf("mean = %f sd = %f", mean, sd);

	free(rands);

	return 0;
}