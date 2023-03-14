#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#include "basic_stats.h"

float mean_1d_array(int size, const float *array){
	float total = 0;
	for(int i = 0; i < size; i++){
		total += array[i];
	}
	return total / size;
}

float variance_1d_array(int size, const float *array){
	float mean = mean_1d_array(size, array);
	float total = 0;
	for(int i = 0; i < size; i++){
		total += (array[i] - mean) * (array[i] - mean);
	}
	return total / size;
}

float sd_1d_array(int size, const float *array){
	return sqrt(variance_1d_array(size, array));
}