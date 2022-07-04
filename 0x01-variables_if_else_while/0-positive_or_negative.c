1 #include <stdlib.h>
2 #include <time.h>
3 #include <studio.h>
4
5 /**
6 *Main ->assign a random to the variable n each time it is excuted and printed out
7 *based on conditon
8 *Return always 0
9 */
10 int main(void)
11 {
12 int n;
13
14 stand(time(0));
15 n = rand() - RAND_MAX / 2;
16 if (n>0)
17       printf("%d is positive\n", n);
18 if (n==0)
19	printf("%d is zero\n", n);
20 if (n<0)
21 {	
22	printf("%d is negative\n", n);
23 }
24 return (0)
25 }
