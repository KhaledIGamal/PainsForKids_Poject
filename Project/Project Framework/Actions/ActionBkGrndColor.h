#ifndef ACTION_BKGRND_COLOR_H
#define ACTION_BKGRND_COLOR_H

#include "Action.h"

//Add Square Action class
class ActionBkGrndColor : public Action
{
public:
	ActionBkGrndColor(ApplicationManager* pApp);

	//Add Square to the ApplicationManager
	virtual void Execute();

	~ActionBkGrndColor(void);

};

#endif
