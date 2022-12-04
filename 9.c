#include <stdio.h> 
int main() 
{ 
int var; /*Suppose address of var is 2000 */
void *ptr = &var; 
*(int*)ptr = 5; 
printf("%d%d",var,*(int*)ptr); 			
return 0; 
}




















