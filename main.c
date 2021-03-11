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
