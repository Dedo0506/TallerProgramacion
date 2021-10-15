# include <stdio.h>
# include <stdlib.h>

int  main (void){
  int x, y, z, cont, stop;

  x = 0 ;
  y = 1 ;
  z = 0 ;
 
  printf ("Cuantos numeros deseados: ");
  scanf ("%d", & stop);
  
	for(cont = 0 ; cont <stop; cont ++) {
		
    	if (z == 0 || z == 1 ) {
      		
			printf("%d, ", z);
   		}
   		
      z = x + y; 
      
	  printf ("%d, ", z);
      
	  x = y;  
      y = z;  
 	}
 
  getchar ();
  return  0 ;
}
