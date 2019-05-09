#ifndef  node_h
#define node_h

#include "std_types.h"
#define size 10

typedef struct mystruct patient ; 
struct mystruct {
	u8 age ;
	u8 gender ; 
	u16 name[size] ; 
	u32 id ; 
	patient *next ;
};

extern patient *head; 
extern patient *tail;

 patient * GetPatientPtr(u32 ID);


#endif