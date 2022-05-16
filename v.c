# include <stdio.h>

int main ()

{

int x=6, y=5;

float z;



if (x > 5) {

if (y > 5)
    z = x = y;

else if (y == 3) z = x - 2*y;

else

z = x + y; }

else if (y < x)

z = y; if (z < 0) x = x + z/2; if (z == 0) x = x - z/2; if (z > 0) x = z/2 + y;
printf("%d",x);
}
