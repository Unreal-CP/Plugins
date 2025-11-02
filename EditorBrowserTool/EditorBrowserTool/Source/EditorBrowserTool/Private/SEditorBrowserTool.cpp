#include "SEditorBrowserTool.h"
#include "EditorBrowserToolSettings.h"
#include "SWebBrowserTab.h"

SEditorBrowserTool::SEditorBrowserTool()
{

}

void SEditorBrowserTool::Construct(const FArguments& InArgs, TSharedPtr<FBrowserContextSettings> Settings)
{
	ChildSlot
	[
		SNew(SWebBrowserTab, Settings)
	];
}

FReply SEditorBrowserTool::OnKeyChar(const FGeometry& MyGeometry, const FCharacterEvent& InCharacterEvent)
{
	if (GetDefault<UEditorBrowserToolSettings>()->bCaptureAllShortcuts)
		return FReply::Handled();

	return SCompoundWidget::OnKeyChar(MyGeometry, InCharacterEvent);
}

FReply SEditorBrowserTool::OnPreviewKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	return SCompoundWidget::OnPreviewKeyDown(MyGeometry, InKeyEvent);
}

FReply SEditorBrowserTool::OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	if (GetDefault<UEditorBrowserToolSettings>()->bCaptureAllShortcuts)
		return FReply::Handled();

	return SCompoundWidget::OnKeyDown(MyGeometry, InKeyEvent);
}

FReply SEditorBrowserTool::OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent)
{
	if (GetDefault<UEditorBrowserToolSettings>()->bCaptureAllShortcuts)
		return FReply::Handled();

	return SCompoundWidget::OnKeyUp(MyGeometry, InKeyEvent);
}

