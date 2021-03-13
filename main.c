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
