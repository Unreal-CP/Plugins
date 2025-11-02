#include "EditorBrowserToolCommands.h"

#define LOCTEXT_NAMESPACE "FEditorBrowserToolModule"

void FEditorBrowserToolCommands::RegisterCommands()
{
	UI_COMMAND(OpenWebBrowser1, "窗口页面_1", "Bring up web browse window", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(OpenWebBrowser2, "窗口页面_2", "Bring up web browse window", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(OpenWebBrowser3, "窗口页面_3", "Bring up web browse window", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(OpenWebBrowser4, "窗口页面_4", "Bring up web browse window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
