#include<stdio.h>
int u;
float five(int u,int f);
float fif(int u,int f);
float ft(int u);
main()
{
	int w,x,o,y,z,f,m;
	float n,sum;
	printf("In this program if you want to answer\n'YES' you type 1\n'NO' type 0\n");
	do{
	printf("Are you using a 5 ampere or 15 ampere?\n");
	scanf("%d",&x);
	if(x==5) 
	{
		printf("Do you use more than 150 unit?\n");
		scanf("%d",&y);
		if(y==1)
		{
			printf("Have you used more than 3 months in a row?\n");
			scanf("%d",&z);
			if(z==1) 
			{
				printf("Enter unit of electicity :");
				scanf("%d",&u);			
				sum = fif(u,f)+ft(u)+38.22;
				n = sum+(sum*0.07);
				printf("Net total of electricity bill is %.4f baht\n",n);
					printf("Do you want to do it again?\n");
					scanf("%d",&m);
			}//use function sum = fif(u,f)+ft(u,f)+38.22;
			else if(z==0) 
			{
				printf("Enter unit of electicity :");
				scanf("%d",&u);
				sum = five(u,f)+ft(u)+8.19;
				n = sum+(sum*0.07);
				printf("Net total of electricity bill is %.4f baht\n",n);
				printf("Do you want to do it again?\n");
					scanf("%d",&m);
			}//use function sum = five(u,f)+ft(u,f)+8.19;
		}
		else if(y==0) 
		{
			printf("Did you use less than 50 unit for 3 month in a row?\n");
			scanf("%d",&w);
			if(w==1)
			{
			printf("Did you use more than 50 units this month?\n");
			scanf("%d",&o);
			if(o==1)
			printf("Congratulations!!,your electricity bill this month is FREE\n");
			else if(o==0)
			{
				printf("Enter unit of electicity :");
				scanf("%d",&u);
				sum = five(u,f)+ft(u)+8.19;
				n = sum+(sum*0.07);
				printf("Net total of electricity bill is %.4f baht\n",n);
				printf("Do you want to do it again?\n");
					scanf("%d",&m);
			}
			}
			if(w==0)
			{
				printf("Enter unit of electicity :");
				scanf("%d",&u);			
				sum = fif(u,f)+ft(u)+38.22;
				n = sum+(sum*0.07);
				printf("Net total of electricity bill is %.4f baht\n",n);
				printf("Do you want to do it again?\n");
					scanf("%d",&m);
		}
		}//use function sum = five(u,f)+ft(u,f)+8.19;
	}
	else if(x==15)
	{
			printf("Enter unit of electicity :");
			scanf("%d",&u);
			sum = fif(u,f)+ft(u)+38.22;
			n = sum+(sum*0.07);
			printf("Net total of electricity bill is %.4f baht\n",n);
			printf("Do you want to do it again?\n");
			scanf("%d",&m);
	}//use function sum = fif(u,f)+ft(u,f)+38.22;
}while (m == 1);
}
float five(int u,int f)
{
	float s;
	if(u>=0 && u<=15)
	{
	s = u*2.3488;
	printf("Base of electricity is %.4f baht\n",s);
	}
	else if(u>=16 && u<=25)
	{
	f = u - 15;
	s = (f*2.9882)+(15*2.3488);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	else if(u>=26 && u<=35)
	{
	f = u - 25;
	s = (f*3.2405)+(15*2.3488)+(10*2.9882);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	else if(u>=36 && u<=100)
	{
	f = u - 35;
	s = (f*3.6237)+(15*2.3488)+(10*2.9882)+(10*3.2405);
	printf("Base of electricity is %.4f baht\n",s);
	}
	else if(u>=101 && u<=150)
	{
	f = u - 100;
	s = (f*3.7171)+(15*2.3488)+(10*2.9882)+(10*3.2405)+(65*3.6237);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	else if(u>=151 && u<=400)
	{
	f = u - 150;
	s = (f*4.2218)+(15*2.3488)+(10*2.9882)+(10*3.2405)+(65*3.6237)+(50*3.7171);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	else if(u>=401)
	{
	f = u - 400;
	s = (f*4.4217)+(15*2.3488)+(10*2.9882)+(10*3.2405)+(65*3.6237)+(50*3.7171)+(250*4.2218);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	return (s);
}
float fif(int u,int f)
{
	float s;
	if(u>=0 && u<=150)
	{
	s = u*3.2484;
	printf("Base of electricity is %.4f baht\n ",s);
	}
	else if(u>=151 && u<=400)
	{
	f = u - 150;
	s = (f*4.2218)+(150*3.2484);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	else if(u>=401)
	{
	f = u - 400;
	s = (f*4.4217)+(150*3.2484)+(250*4.2218);
	printf("Base of electricity is %.4f baht\n ",s);
	}
	return(s);
}
float ft(int u)
{
	float ft;
	ft = u*(0.0139);
	printf("Variable Electricity is : %.4f baht\n",ft);
	return(ft); 
}
