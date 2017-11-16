/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
水位溢出检测计：检测水位是否溢出

所需器件:
1.水位检测传感器

接线说明:
水位检测传感器                核心板
1.+                           3.3V
2.-                           GND
3.S                           A0
*/

#include <WidgetOverflow.h>

#define WaterSensorINPUT   A0

WidgetOverflow overFlow = WidgetOverflow();

int waterLevel;
int state;
float waterLevelThreshold = 1500/4095*40;

void setup()
{
	pinMode(WaterSensorINPUT, AN_INPUT);
}

void loop()
{
	waterLevel = analogRead(WaterSensorINPUT);
	if(waterLevel/4095*40 > waterLevelThreshold)
	{
		state = 1;
	}
	else
	{
		state = 0;
	}
	//上送水溢出状态值
	overFlow.displayOverFlowStatus(state);
	delay(3000);
}
