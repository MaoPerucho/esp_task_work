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
