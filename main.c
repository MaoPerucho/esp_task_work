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
