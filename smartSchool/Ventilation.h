#pragma once
#include "Equipment.h"
#include "Room.h"
#include <iostream>
#include<string>
using namespace std;

class Ventilation : public Equipment, public Room
{
protected:

	string TypeOfEquipment = "Ventilation";
	float currentTemperature; //Variable to save cucrrent temperature
	float currentHumidity; //Variable to save current humidity
	short int currentAirQuality; //Variable to save current airquality
	short int currentAirFlow; //Variable to save the current airflow
	float minHumidityValue = 40; //Minimun limit for humidity
	float maxHumidityValue = 78; //Max limit for humidity
	float minTemperatureValue = 20; //Low temperature limit
	float maxTemperatureValue = 24; //High temperature limit
	short int airQualityLimit = 1000; //Limit for air quality
	float minFlow = 0.35; //0.35 l/s times area for the room gives the minimum airflow
	short int flowStudent = 10; //10 l/s for each student
	short int variableFlow;
	short int servoSetting =0; //90 for max open and 0 for closed
	char ventilationStatus; //A or B, A for "OK", B for "Something is wrong"

public:

	float set_minflow(int Area) 
	{
		minFlow = area * 0.35;
		return minFlow;
	}
	short int openVentilationFully(short int servoSetting) //Function to open ventilation fully (90 degrees)
	{
		servoSetting = 90;
		return servoSetting;
	}
	short int closeVentilation(short int servoSetting)
	{
		servoSetting = 0;
		return servoSetting;
	}	

	short int adjustVentilationToNumberOfAttendence(int numberOfPeople, short int flowStudent, float minFlow)
	{
		servoSetting = numberOfPeople * 3;
		currentAirFlow = (numberOfPeople * flowStudent) + minFlow;
		return variableFlow, servoSetting;
	}

	void PrintResult(short int variableFlow, int numberOfPeople)
	{		
		cout << "The current airflow is: " << currentAirFlow << " l/s. There is " << numberOfPeople << " students in the room" << endl;
	}
	void PrintStatus()
	{
	}

	short int CheckAndControlVentilation(float minTemperatureValue, float maxTemperatureValue, float minHumidityValue, float maxHumidityValue, short int airQuaityLimit, float currentTemperature, float currentHumidity, short int currentAirQuality)
	{
		if (currentTemperature < minTemperatureValue)
		{
			cout << "Staring heating" << endl;
		}
		if (currentTemperature > maxTemperatureValue)
		{
			cout << "Adding more ventilation" << endl;
			openVentilationFully(90);
		}
		if (currentHumidity < minHumidityValue)
		{
			cout << "starting air humidifyer" << endl;
		}
		if (currentHumidity > maxHumidityValue)
		{
			cout << "Staring air-dryer" << endl;
		}
		if (currentAirQuality >= airQualityLimit)
		{
			cout << "Adding more ventilation" << endl;
			openVentilationFully(90);
		}
		else
		{
			cout << "Ventilation has been checked and is working just fine" << endl;
		}

	}

	/*
	//miniflow added by other ventilation
	float startMinimiFlow(int Area)
	{
		servoSetting = 0;
		minFlow = area * 0.35;
		return minFlow;
	}
	*/
>>>>>>> ea507674c9c994e3d11a6d893cfaf23f9c869ec6

};
