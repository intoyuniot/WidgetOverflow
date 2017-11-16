
#include "WidgetOverflow.h"


WidgetOverflow::WidgetOverflow(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/overflow_%d/data/status",_Item);
}

WidgetOverflow::~WidgetOverflow()
{
    
}

void WidgetOverflow::begin(void (*UserCallBack)(void))
{

}

void WidgetOverflow::displayOverFlowStatus(uint8_t fStatus)
{
	IntoRobot.publish(pDataStatusTopic,fStatus);
}









