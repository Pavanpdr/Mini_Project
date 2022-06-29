#include <stdio.h>
struct stud
{ int id;
  char name[20];
};
void pf(struct stud c)
{ printf("%s Belongs to L1 Section",c.name);}
int main()
{ struct stud j;
  int i,r=0;
  int stdid[25]={1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022};
  printf("------------------L1 Section Checker------------------\n");
  printf("Student Details:-\n");
  printf("Name : ");
  scanf("%s",j.name);
  printf("\nId(Last 4 digits) : ");
  scanf("%d",&j.id);
  printf("\n");
  for(i=0;i<22;i++)
  { if((stdid[i]/j.id)==1)
        r++;}
  if(r>=1)
    pf(j);
  else 
    printf("%d Id Dosen't Exist & %s Dosen't Belongs to L1 Section",j.id,j.name);
  
  return 0;}