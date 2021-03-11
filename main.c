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
