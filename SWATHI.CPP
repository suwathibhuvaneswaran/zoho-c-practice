#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int n1,n2,t=1,count=0,sum=0,rem,temp,flag=0,temp1,i;
	clrscr();
	printf("enter value n : ");
	scanf("%ld",&n1);
	printf("\n enetr the sum value : ");
	scanf("%ld",&n2);
	for(i=0;i<n1;i++)
	{
		t=t*10;
	}
	temp1=t;
	printf("\n %ld",t);
	while(temp1>=0)
	{       t=temp1;
		sum=0;
		count=0;
		while(t>0)
		{
			rem=t%10;
			t=t/10;
			count++;
			sum=sum+rem;
		}
		if(count==n1 && sum==n2)
		{
			flag=1;
			break;
		}
		temp1--;
		//printf("\n %d",temp1);
	}



	printf("\n %ld",temp1);

	getch();
	return 0;
}