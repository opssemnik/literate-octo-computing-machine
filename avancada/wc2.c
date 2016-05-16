#include <stdio.h>

int main(int argc, char *argv[]) {  		
	if(argc < 2) return 1;			// caso número de argumentos seja < 2 retornará a 1.
	FILE *arquivo;				
	int c;

    int cl = 0;
    int cb = 0;
    int cp = 0;
    char ch;

	arquivo = fopen(argv[1], "r");		

	c = getc(arquivo);
    while( c != -1 )
    {
        cb++;
        if (c == '\n')
            cl = cl + 1;
        if (c == ' ' && c != ch){
            cp = cp + 1;
	}
         ch = c;	
		printf("%i %c %x\n", c, c, c);
		c = getc(arquivo);
	}

    printf("L=%i P=%i B=%i\n", cl, cp, cb);


	fclose(arquivo);


	return 0;
}
