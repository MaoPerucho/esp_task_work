#include <driver/gpio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_system.h>


double Cnt,AmbarRed,FaseVerde1,FaseRoja1,RedDuration,AmbarDuration,GreenDuration,RedStart,GreenStart,PedMode;
double Cnt2,AmbarRed2,FaseVerde2,FaseRoja2,RedDuration2,AmbarDuration2,GreenDuration2,RedStart2,GreenStart2;


//Nicolas Pinilla
void tarea1 (void *pvParameter)
{
	while(1){
	if(RedDuration == 0 && AmbarDuration == 0)
	{
		printf("Norte Str : Verde");

	}
	else if (GreenDuration == 0 && AmbarDuration == 0)
	{
		printf("Norte Str: Rojo");
	}




	if(RedDuration2 == 0 && AmbarDuration2 == 0)
	{
		printf("Este Str : Verde");

	}
	else if (GreenDuration2 == 0 && AmbarDuration2 == 0)
	{
		printf("Este Str: Rojo");
	}
	}


}

//Diego duarte
void tarea2 (void *pvParameter)
{
	while(1){
	if (RedStart == 1)
	{
		Cnt = RedDuration;
		printf("RED: %f ",Cnt);
		if (Cnt == 0)
		{
			Cnt=99;
		}
	}

	if (GreenStart == 1)
	{
		Cnt = GreenDuration;
		printf("GREEN: %f ",Cnt);
		if (Cnt == 0)
		{
			Cnt=99;
		}
	}

	if (Cnt == 99)
	{
		printf("           ");
	}



	if (RedStart2 == 1)
	{
		Cnt2 = RedDuration2;
		printf("RED2: %f ",Cnt2);
		if (Cnt2 == 0)
		{
			Cnt2=99;
		}
	}

	if (GreenStart2 == 1)
	{
		Cnt2 = GreenDuration2;
		printf("GREEN2: %f ",Cnt2);
		if (Cnt2 == 0)
		{
			Cnt2=99;
		}
	}

	if (Cnt2 == 99)
	{
		printf("           ");
	}
	}

}

//Kevin Revueltas
void tarea3 (void *pvParameter)
{
	while(1){
	if(Cnt != 99)
	{
		printf("%f",Cnt);
	}

	if(Cnt2 != 99)
	{
		printf("%f",Cnt2);
	}
	}
}

//Joel Baena
void tarea4 (void *pvParameter)
{
	while(1){
		if(FaseRoja1 == 1)
		{
			RedStart=1;

			RedDuration=RedDuration-1;
			if(RedDuration == 0)
			{
				AmbarRed=AmbarRed-1;
				if(AmbarRed==0)
				{
					AmbarDuration=AmbarDuration-1;
					if(AmbarDuration==0)
					{
						RedDuration=21;
						AmbarRed=2;
						AmbarDuration=4;
						FaseVerde2=0;
						FaseRoja1=0;
						FaseVerde1=1;
						FaseRoja2=1;
						
					}
				}
			}

			

		}

		if(FaseVerde1 == 1)
		{
			GreenStart=1;

			GreenDuration=GreenDuration-1;
			if(GreenDuration==0)
			{
				AmbarDuration=AmbarDuration-1;
				if(AmbarDuration==0)
				{
					GreenDuration=15;
					AmbarDuration=4;
					FaseVerde2=1;
					FaseRoja1=1;
					FaseVerde1=0;
					FaseRoja2=0;



				}
			}
		}


		if(FaseVerde2 == 1)
		{
			GreenStart2=1;

			GreenDuration2=GreenDuration2-1;
			if(GreenDuration2==0)
			{
				AmbarDuration2=AmbarDuration2-1;
				if(AmbarDuration2==0)
				{
					GreenDuration2=15;
					AmbarDuration2=4;
					FaseVerde2=0;
					FaseRoja1=0;
					FaseVerde1=1;
					FaseRoja2=1;



				}
			}
		}

		if(FaseRoja2 == 1)
		{
			RedStart2=1;

			RedDuration2=RedDuration2-1;
			if(RedDuration2 == 0)
			{
				AmbarRed2=AmbarRed2-1;
				if(AmbarRed2==0)
				{
					AmbarDuration2=AmbarDuration2-1;
					if(AmbarDuration2==0)
					{
						RedDuration2=21;
						AmbarRed2=2;
						AmbarDuration2=4;
						FaseVerde2=1;
						FaseRoja1=1;
						FaseVerde1=0;
						FaseRoja2=0;
						
					}
				}
			}
		}






	}
	
}

//Dario Rosso
void tarea5 (void *pvParameter)
{
	while(1){
	if (gpio_get_level(GPIO_NUM_2)==1)
	{
		PedMode=1;
	}
	}
}


void app_main()
{

	RedDuration=21;
	AmbarDuration=4;
	AmbarRed=2;
	GreenDuration=15;


	RedDuration2=21;
	AmbarDuration2=4;
	AmbarRed2=2;
	GreenDuration2=15;

    //Selección de los pines a utilizar
    gpio_pad_select_gpio(GPIO_NUM_2);
    //Configuración de los pines como entrada
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_INPUT);


    xTaskCreatePinnedToCore(tarea1, "task1", 2048, NULL, 2, NULL, 1);
	xTaskCreatePinnedToCore(tarea2, "task2", 2048, NULL, 2, NULL, 1);
	xTaskCreatePinnedToCore(tarea3, "task3", 2048, NULL, 1, NULL, 1);
	xTaskCreatePinnedToCore(tarea4, "task4", 2048, NULL, 1, NULL, 0);
	xTaskCreatePinnedToCore(tarea5, "task5", 2048, NULL, 1, NULL, 0);//Tarea 1 con prioridad (1) en el core 0
 

}
