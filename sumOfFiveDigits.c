#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int i=0;
    int d, sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    do{
        d = n%10;
        sum = sum + d;
        n = n/10;
    }while(n>0);
    printf("%d", sum);
    return 0;
}
