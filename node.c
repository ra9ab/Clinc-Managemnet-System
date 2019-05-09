#include "node.h"
#include <stdio.h>
patient *head= NULL ; 
patient *tail = NULL;

patient * GetPatientPtr(u32 ID)
	{	
		patient *current = NULL ; 
		current = head ;
		do{
				
				if (current == NULL)
				{
					return current ; 
				}
				else if (current->id == ID)	
				{
					return current ; 
				}
				else 
				{
					current = current->next ;
				}
			}
			while (current != NULL);
	}
	

