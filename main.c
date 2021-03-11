#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_system.h>

void tarea4 (void *pvParameter)
{
    While (true)
    {
        GreenStart1=1;
        RedStart2=1;
        RedStart1=0;
        GreenStart2=0;
        
        if (time.s=>Total.time)
        {
           GreenStart2 = 1;
           RedStart1=1;
           RedStart2=0;
           GreenStart1=0;
           time.s=0;
        }

        if (PedMode==1 & time.s=>Total.time)
        {
           GreenStart2=0;
           RedStart1=1;
           RedStart2=1;
           GreenStart1=0;
           zumbador=1;
           ets_delay_s(10);
           zumbador=0;
           PedMode=0;
        }
    }
}

void controlleds()
{
	while(true)
	{
		Cnt=descontar(Cnt);
		Cnt2=descontar(Cnt2);
		
		if( RedStart1==1)
		{
			Cnt=RedDuration1;
			RedStart1=0;
			
		}
		else
		{
		if( GreenStart1==1)
		{
			Cnt=GreenDuration1;
			GreenStart1=0;
			
		}
		else
		{
		
		if( RedStart2==1)
		{
			Cnt2=RedDuration2;
			RedStart2=0;
			
		}
		else
		{
			if( GreenStart2==1)
			{
				Cnt2=GreenDuration2;
				GreenStart2=0;
			}
		}
		}
		}
	}
		
		
	}
	
	
	
	
}
int descontar(int Cnt)
{
	
	if(Cnt!=99)
	{
		if(Cnt==0)
	
		{
		  Cnt=99;
		
		}	
		else
		{
			delay(1000);
			Cnt=Cnt-1;
		}
		
	}
	return Cnt;
	
	
}


void app_main()
{
    
}