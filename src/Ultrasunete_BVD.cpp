// https://www.makerguides.com/hc-sr04-arduino-tutorial/

void setari_ultrasune_BVD()
{
	pinMode(PIN_TRIG, OUTPUT);
	pinMode(PIN_ECHO, INPUT);
}

float masoara_distanta()
{
	long durata;
	int distanta;
	
	// Asteptam sa se faca liniste
	digitalWrite(PIN_TRIG, LOW);
	delayMicroseconds(5);
	
	// Trimitem inpulsurile
	digitalWrite(PIN_TRIG, HIGH);
	delayMicroseconds(10);
	digitalWrite(PIN_TRIG, LOW);
	
	// Citim PIN_ECHO
	durata = pulseIn(PIN_ECHO, HIGH);
	
	// Calculam distanta
	distanta = durata * 0.034 / 2;
	
	return distanta;
}