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
