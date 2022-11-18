#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d %d %d %d %d",&a,&b,&x,&y,&n);
	  i=b-a;
    if(i>=x*n && i<=y*n)
      printf("1\n");
    else 
      printf("0\n");
	}
	return 0;
}
