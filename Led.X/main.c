/*
 * File:   main.c
 * Author: 19180060
 *
 * Created on 9 de Março de 2020, 09:21
 */


#include <xc.h>
#include "config.h"

void main(void) 

{ PORTDbits.RD0 = 0 ;
  TRISDbits.TRISD0 = 0 ;
  
  {
       while( 1 )
           
      PORTDbits.RD0 = 0;
      __delay_ms(500);
      PORTDbits.RD0 = 1;
      __delay_ms(500);
  }
              
    return;
}
