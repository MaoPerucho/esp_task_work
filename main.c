#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_system.h>

void tarea5(void*pvParameter)
{
	
	while (true)
	{
		PB=gpio_get_level(pinNumber)// se coloca el pin que se defina 

		if (PB==1)
		{
			PedMode=1;
		}
	}
}

void imprimir()
{
	while(true)
	
	{
		
		if(Cnt!=99)
		{
			printf(Cnt);
		}
		else
		{
			pintf("   ");
		}
			if(Cnt2!=99)
		{
			printf(Cnt2);
		}
		else
		{
			pintf("   ");
		}
		
	}
	
}


void task_1(void)
{
	while (true)
	{
	if (R1_b=true && Amb1_b=true)
	{
		printf("NORTE_str VERDE");
	}
if (Ambr_b=true && V1_b=true)
	{
		printf("NORTE_str ROJO");
	}
if (R2_b=true && Amb2_b=true)
	{
		printf("ESTE_str VERDE");
	}
if (V2_b=true && Amb2_b=true)
	{
		printf("ESTE_str ROJO");
	}

	}
}


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