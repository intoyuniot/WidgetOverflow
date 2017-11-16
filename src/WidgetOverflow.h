#ifndef WIDGET_OVERFLOW_H_
#define WIDGET_OVERFLOW_H_

#include "application.h"


class WidgetOverflow
{
public:
    WidgetOverflow(uint8_t ucItem = 0);
    ~WidgetOverflow();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayOverFlowStatus(uint8_t fStatus);

    
private:
    char pDataStatusTopic[64];
    uint8_t _Item=0;         
};

#endif
