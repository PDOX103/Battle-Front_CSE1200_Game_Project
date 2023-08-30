void IRONMAN1()
{
	if(!standPosition)
	{
		iShowBMP2(ironCordinate_X, ironCordinate_Y, Ironman_Walking[ironmanIndex],0);
		standCounter++;
		if(standCounter>=15)
		{
			standCounter=0;
			ironmanIndex = 0;
			standPosition=true;
		}
	}
	else
	{
		iShowBMP2(ironCordinate_X, ironCordinate_Y, Ironman_Stand,0);
	}
}


