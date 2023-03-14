tests: basic_stats.c tests/basic_tests.c 
	gcc -o tests_exec tests/basic_tests.c basic_stats.c gen_rand.c