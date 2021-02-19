/*
 * File:   semaforosm.c
 * Author: 20185150
 *
 * Created on 19 de Fevereiro de 2021, 15:19
 */


#include <xc.h>


    void Semaforo_init (void)
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD1 = 1;

    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;


}

void verde (int x) // liga
{ 
    PORTDbits.RD6 = x ;
    
}
 
void amarelo (int x) // liga
{ 
    
    PORTDbits.RD5 = x ;
    
}
 
void vermelho (int x) // liga
{ 

    PORTDbits.RD7 = x ;
   
    
}
 

void verdedes (int x) // desligar
{ 
    PORTDbits.RD6 = x ;
    
}


void amarelodes (int x) // desligar
{ 
    PORTDbits.RD5 = x ;
    
}


void vermelhodes (int x) // desligar
{ 
    PORTDbits.RD7 = x ;
    
}

