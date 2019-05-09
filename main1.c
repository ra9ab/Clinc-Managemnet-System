#include "authorization.h"
void main (void)
{ u8 user_choice ;
	u8 flag =0 ;
	
	
	while (1)
	{
			printf("\n**********************welcome to user panel**********************\n");
			printf("1-View record \n2-view reservation \n3- to join admin panel \n ");
			scanf("%d",&user_choice);
							
			switch(user_choice)
			{
				
				
				
				case 1 : 
				
							view_record();
							break ;
				
				case 2 : 
							view_reservation();
							 break ;
				
				case 3 : 
							if(authorization())
							{
								printf("\n**********************welcome to admin panel**********************\n");
								do{
									printf("1-Add new patient record\n2-Edit patient record\n3-Reserve a slot with the doctor\n4-Cancel reservation\n0-back to user mode \n ");
									scanf("%d",&user_choice);
									switch(user_choice)
										{
											case 1 : 
											
														add_patient();
														
														break;
											
											case 2 : 
														edit_patient () ;
														break ;
											
											case 3 : 
														reservation();
														break ;
											
											case 4 : 
														cancel();
														break ;
											
											case 0 : 
														flag = 1 ; 
														break ;
											
											default : 
														printf("wrong input");
														break ;
						
										}
				
									}	
								while (flag==0);
							}
							break ; 
				default : 
							printf("wrong input");
							break ;						
					
		
			}
	}
	
}