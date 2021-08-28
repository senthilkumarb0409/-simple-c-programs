//ARRAY IMPLEMENTATION OF LIST ADT
#include <stdio.h>
int list[5],n=0,i;

void create();
void insert(int x,int p);
void delete(int p);
void display();

 
void main()
{
	int ch,x,p;
	while(1)
	{
		printf("The operations are:");
		printf("\n 1.Create \n2.Insert \n3.Delete \n4.display\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				create();
				break;
				
			case 2:
			    printf("Enter the element and its position: ");
			    scanf("%d%d", &x ,&p);
			    insert(x,p);
			    break;
			    
			case 3:
				printf("Enter the position to be deleted:");
				scanf("%d",&p);
				delete(p);
				break;
				
			case 4:
				display();
				break;
				
			
				
			default:
			    printf("Enter the valid option !!!");
				break;	
			
		}
	}
}
void create()
{
	int i,e;
	printf("Enter the number of elements");
	scanf("%d",&e);
	printf("Enter the array elements:");
	for(i=0;i<e;i++)
	{
		scanf("%d",&list[i]);
	}
	n=e;
	}
	void insert(int x,int p)
	{
		if(n==5)
		printf("There is mo space.");
		else if((p<0)||(p>n))
		printf("The positon is not valid.");
		else
	{
		for(i=n-1;i>=p;i--)
		{
			
		     list[i+1]=list[i];
		}
		list[p]=x;
		n++;
	}
    }
	void delete(int p)
	{
	  if(n==0)
	  printf("The list is empty.");
	  else if((p<0)||(p>(n-1)))
         printf("the position is not valid.");
	  else
	{
		for(i=p;i<n;i++)
		{
			
			list[i]=list[i+1];
		}
		n--;
	}
}

	void display()
	{
		int p;
		if(n==0)
		{
			printf("The list is empty.");
		}
		else
		{
			printf("The list is\n Elements \t\t\t\t Position");
			for(p=0;p<n;p++)
			{
				printf("\n %d \t\t\t\t%d\n",list[p],p);
			}
		}
	}
	
	

