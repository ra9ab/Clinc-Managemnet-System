#include "main1.h"

u32 slot[5][2]={
	{SLOT_AVAILABLE , DEFAULT_ID},
    {SLOT_AVAILABLE , DEFAULT_ID},
	{SLOT_AVAILABLE , DEFAULT_ID},
	{SLOT_AVAILABLE , DEFAULT_ID},
	{SLOT_AVAILABLE , DEFAULT_ID}
					};
 
 void add_patient( ) 
 {  patient *temp ; 
	patient *current=NULL ;
		u32 your_id ; 
		
					printf("\n ***************************Adding  **********************\n");

		temp = (patient*)malloc(sizeof(patient));
			
		
		do{
				printf("enter patient id\n");
				scanf("%d",&your_id);
				if (GetPatientPtr(your_id)== NULL)
				{
					break ;
				}
				
				else  
				{
					printf("ID is already exist\n");
				}
			}
			while (1);
		
		
			
			temp->id= your_id ; 
		printf("enter patient name\n");
		for(u8 i = 1 ; i<11;i++)
		{scanf("%c",&(temp->name[i]));}
		printf("enter patient age\n");
		scanf("%d",&(temp->age));
		printf("enter patient gender\n");
		scanf("%d",&(temp->gender));
			 if (head==NULL)
			{
				head = temp ; 
				tail = temp ;	
				tail->next = NULL ; 
			}
			else 
			{
				tail->next=temp;
				tail = tail->next ; 
				tail->next = NULL ; 
		 
		 
			}
			
			printf("\n ***************************Adding DOne **********************\n");

	}

 

 
 void edit_patient () 
 
 { patient *current =NULL ;  
	u32 your_id ; 	 
		 	 printf("\n ***************************edit_patient **********************\n");

		do{
				printf("enter patient id\n");
				scanf("%d",&your_id);
				current = GetPatientPtr(your_id) ;

				if (current== NULL)
				{
					printf("ID doesn`t exist ");
					
				}
				else 
				{	
					printf("enter patient name\n");
					for(u8 i = 1 ; i<11;i++)
					{scanf("%c",&(current->name[i]));}
					printf("enter patient age\n");
					scanf("%d",&(current->age));
					printf("enter patient gender\n");
					scanf("%d",&(current->gender));
					
					printf("\n ***************************Editing  DOne **********************\n");

					break ; 
				}
			}
	 while(1);
 }
 
 
 void reservation()
 { 
	 patient *current =NULL ; 
	 u32 your_id ; 
	 u8  your_slot  ; 
	 	 printf("\n ***************************reservation **********************\n");

	 for(u8 i=0;i<5;i++)
	{
		if (slot[i][0]==1 ) 
		{
			printf(" slot number %d is available \n ",i+1);
		}
		else  
		{
			printf(" slot number %d is not  available\n ",i+1);
		}
	}
	 
	 do{
				printf("enter patient id\n");
				scanf("%d",&your_id);
				current = GetPatientPtr(your_id) ;

				if (current== NULL)
				{
					printf("ID doesn`t exist \n");
				}
				else 
				{	do {
							printf("pick one of the available slot \n");
							scanf("%d",&your_slot);
							if(your_slot<1 ||your_slot>5)
								{
								printf("wrong slot number\n"); 
								}
							else if (slot[your_slot-1][0]==0)
								{
								printf("slot is not available pick anther one\n"); 
								}
							else
								{
								slot[your_slot -1][0]=SLOT_NOTAVAILABLE;
								slot[your_slot -1][1] = current->id ; 
															printf("\n ***************************reservation DOne **********************\n");

								break ; 
								}			
						}
					while(1);
					break ;
				}
			}
		while(1);
 }
 
 void cancel()
  {  
	 patient *current =NULL ; 
	 u32 your_id ; 
	 u16 your_slot  ; 
	 u16 i =0;
	 u16 flag = 0 ;
	 
	 printf("\n ***************************CANCEL **********************\n");
	  do{
				printf("enter patient id\n");
				scanf("%d",&your_id);
				current = GetPatientPtr(your_id) ;

				if (current== NULL)
				{
					printf("ID doesn`t exist \n");
				}
				else 
				{	
			
					for (i = 0 ; i<5;i++)
					 {
						 
						 if (slot[i][1]==current->id)
						 {
							slot[i][0] = SLOT_AVAILABLE;
							 slot [i][1] = DEFAULT_ID ;
							 flag =  1 ;
							printf("\n ***************************CANCELtion DOne **********************\n");

							 break ;
						 }
						 else if (i==4)
						 {
							 printf("ID doesn`t have a slot ");
						 }
						 else
						 {}
					 }	
				 }
									
			}
		while(flag==0);
	  
	  
  }	