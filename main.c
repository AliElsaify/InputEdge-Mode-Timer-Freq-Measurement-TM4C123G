#include <IntCtrl.h>

unsigned int   time_period                                                  ;
float          frequency                                                    ;
float          timer_period_ms                                              ;
int main ( void )
{
	Timer0ACapture_init()                                                     ;
	while (1)
	{
		  time_period                    = Timer0ACapture_SignalPeriod()        ;
		  timer_period_ms                = (time_period * 62.5)/1000000         ;
	  	frequency                      = 1000 / timer_period_ms               ;  /* convert to frequency */
		 
      DELAY(1000)                                                           ;
	}
	
	return 0                                                                  ;
	
}
