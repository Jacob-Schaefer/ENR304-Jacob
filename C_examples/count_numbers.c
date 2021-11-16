#include <stdio.h>
#include <stdlib.h>


int usage(char *name);

int main(int argc, char **argv){

int i, min, max, step=1;
int loop = 1;


if(argc == 2){
	min = 1;
  max = atoi(argv[1]);
}
else if(argc == 3){
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	if(min > max){
		for(i=min;i>=max;i-=step){
			printf("%d ", i);
		}	
	loop--;
	}
}
else if(argc > 3){
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	step = atoi(argv[3]);
	if(min > max && step < 0){
		step = -step;
		for(i=min;i>=max;i-=step){
			printf("%d ", i);
		}	
	loop--;
	}
	else if(min > max && step > 0){
		for(i=min;i>=max;i-=step){
			printf("%d ", i);
		}
	loop--;
	}
}
else {
	return usage(argv[0]);
}

if(loop == 1){
	for (i=min;i<=max;i+=step){
		printf("%d ", i);
	}
}
	printf("\n");

return 0;
}

int usage(char *name){
	fprintf(stderr,"Usage: %s [start] end [increment]\n", name);
	return 1;
}
