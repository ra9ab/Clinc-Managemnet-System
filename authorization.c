#include "authorization.h"


u8 authorization()
{u16 i= 3 ;
  u32 pass = 0 ; 
  u8 flag =0 ; 
 
 do {
			printf("enter password\n ");
			scanf("%d",&pass);
				
			if (pass == 1234)
			{
				printf("correct password\n");
				flag  =1 ; 
			}	 
			else 
			{
					printf("wrong password \t \t");
					i--;
			}
	 
 }while (flag ==0 &&  i >0);
	 
if (flag ==0)
		{printf("good bye");}
			
return flag ; 
}


