#include "main1.h"

extern u32 slot[5][2] ;
void print_list(void)
	{patient *current=NULL ; 
       
		current = head ; 
		while (current !=NULL)
		{
			printf("patient ID %d \n",current->id);
			printf("patient name  :");
			for (int i = 0 ; i<11;i++)
			{printf(" %c",current->name[i]);}
				printf("patient age : %d \n",current->age);
				printf("patient gender:  %d\n",current->gender);
			printf("_ _ _ _ _ _ _ _ _ _ _ _\n");
			current = current->next;
		}
	}
		
void view_record()
{ u32 your_id ;
	patient *current=NULL ;
do {
		printf("enter patient id\n");
		scanf("%d",&your_id);
		current = GetPatientPtr(your_id) ; 
		
		if (current==NULL)
		{
			printf("ID doesn`t exist ");
		}
		else 
		{
			printf("patient ID %d \n",current->id);
			printf("patient name  :");
			for (int i = 0 ; i<11;i++)
			{
				printf(" %c",current->name[i]);
			}
			printf("patient age : %d \n",current->age);
			printf("patient gender:  %d\n",current->gender);
				break;
		}
	}
while(1);
}


void view_reservation()
{
	u16 i ; 
		for (i = 0 ; i<5;i++)
					 {
						 
						 if (slot[i][0]==0)
						 {
							printf("slot number %d is reserved by ID number %d\n",i+1,slot[i][1]);
						 }
					}
					
}