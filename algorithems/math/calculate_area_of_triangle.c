#include <stdio.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;

int get_area(triangle tr);

int main() {

    triangle tr;
    tr.a = 3;
    tr.b = 4;
    tr.c = 5;
    printf("%d\n", get_area(tr));

    return 0;
}

int get_area(triangle tr) {
    int p = (tr.a+tr.b+tr.c)/2;
    int S = (p*(p-tr.a)*(p-tr.b)*(p-tr.c));

    int result = sqrt(S);

    return result;
}