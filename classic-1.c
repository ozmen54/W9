#include<stdio.h>
#include<stdlib.h>

int read_input(int *inp);
int get_square(int inp);
void print_results(int inp);

int main()
{
	int inp, ret;	
	ret = read_input(&inp);
	if( ret < 0) {
		printf("Input value should be [0-50]\n");
		exit(-1);
	}	
	print_results(inp);	
	return 0;
}

int read_input(int *inp) {
	printf("Enter a number [0-50]: ");
	scanf("%d", inp);
	if ((*inp <= 0) || (*inp > 50)){
		return -1;
	}
	
	return 0;
}
int get_square(int s){
	return (s * s);
}

void print_results(int inp){
	int i, sq;
	printf("Numbers\t\tSquares\n");
	printf("-----------------------\n");
	for(i = 1; i < inp; i++){
		sq = get_square(i);
		printf("%d\t\t%d\n", i, sq);
	}
}