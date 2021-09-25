#include<stdio.h>
#include<string.h>

typedef struct mobile_info
{
	char name[50];
	int quan;
	double price;
} mob_data;
mob_data read_info()
{
	mob_data a;
	printf("\n ENTER THE MOBILE BRAND NAME : ");
	scanf("%s",a.name);
	printf("\n ENTER THE QUANTITY OF MOBILE : ");
	scanf("%d",&(a.quan));
	printf("\n ENTER THE PRICE OF EACH MOBILE : ");
	scanf("%lf",&(a.price));
	
	return a;
}

void display(mob_data b)
{
	printf("\n\n MOBILE BRAND NAME : %s", b.name);
	printf("\n STOCK IN HAND : %d ", b.quan);
	printf("\n TOTAL COST OF INVENTORY (Rs) : %6.2lf",(b.price)*(b.quan));
	
	printf("\n");
}

int main()
{
	printf("\n NAME - BINAY KUMAR LOHANI ");
	
	mob_data obj[100];
	int ch, j=0;
	
	printf("\n 1. STORING \n\n 2. SEARCHING \n\n 3.EXIT");
	while(1)
	{
		printf("\n ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			obj[j]=read_info();
			j++;
		}
		else if(ch==2)
		{
			char s[50];
			printf("\n ENTER THE NAME OF THE ITEM TO BE SEARCHED :");
			scanf("%s",s);
			
			for(int i=0;obj[i].name!='\0';i++)	
			if(strcmp(s,obj[i].name)==0)
			{
				display(obj[i]);
				break;
				}	}
	
	else
	{
		printf("\n\n EXIT ");
		break;
	}

	printf("\n");
} 
return 0;
}
