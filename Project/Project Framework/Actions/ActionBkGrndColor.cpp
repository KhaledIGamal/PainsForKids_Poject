#include "ActionBkGrndColor.h"

#include "..\ApplicationManager.h"

#include "..\GUI\GUI.h"


ActionDrawColor::ActionDrawColor(ApplicationManager* pApp) :Action(pApp)
{}

//Execute the action

void ActionDrawColor::Execute()
{

	Point P1;

	//Get a Pointer to the Interface
	GUI* pGUI = pManager->GetGUI();

	pGUI->CreateColorToolBar();

	pGUI->GetPointClicked(P1.x, P1.y);

	if (P1.y > UI.ToolBarHeight && P1.y < UI.ToolBarHeight + UI.ToolBarHeight) {
		int ClickedItemOrder = (P1.x / UI.MenuItemWidth);
		switch (ClickedItemOrder)
		{
		case ITM_GREEN:
			pGUI->setCrntDrawColor(GREEN);
			break;

		case ITM_BLUE:
			pGUI->setCrntDrawColor(BLUE);
			break;

		case ITM_RED:
			pGUI->setCrntDrawColor(RED);
			break;

		case ITM_YELLOW:
			pGUI->setCrntDrawColor(YELLOW);
			break;

		default:			//A click on empty place in desgin toolbar
			pGUI->setCrntDrawColor(BLACK);
			break;
		}

	}

	pGUI->ClearStatusBar();
	pGUI->CreateDrawToolBar();
}

ActionDrawColor::~ActionDrawColor(void)
{}


