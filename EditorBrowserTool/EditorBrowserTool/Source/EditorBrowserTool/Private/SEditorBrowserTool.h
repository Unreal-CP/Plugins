#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

struct FBrowserContextSettings;

// 编辑器网页浏览器控件类，继承自Slate复合控件
class SEditorBrowserTool : public SCompoundWidget
{
public:
	SEditorBrowserTool();

	// Slate声明宏，定义控件的参数
	SLATE_BEGIN_ARGS(SEditorBrowserTool) { }
	SLATE_END_ARGS()

public:
	// 构造函数，初始化控件
	void Construct(const FArguments& InArgs, TSharedPtr<FBrowserContextSettings> Settings);

private:

	/**
	 * 当此widget获得键盘焦点时输入字符后调用
	 * 用于处理字符输入事件（如输入文字）
	 *
	 * @param MyGeometry 接收事件的widget的几何信息
	 * @param  InCharacterEvent  字符事件
	 * @return  返回事件是否被处理以及其他可能的操作
	 */
	virtual FReply OnKeyChar(const FGeometry& MyGeometry, const FCharacterEvent& InCharacterEvent);

	/**
	 * 当此widget或其子widget获得焦点时按键按下后调用
	 * 如果widget处理了此事件，OnKeyDown将不会传递给获得焦点的widget。
	 *
	 * 此事件主要用于允许父widget在子widget处理之前消费事件，
	 * 只有在没有更好的设计替代方案时才应使用。
	 *
	 * @param MyGeometry 接收事件的widget的几何信息
	 * @param InKeyEvent  按键事件
	 * @return 返回事件是否被处理以及其他可能的操作
	 */
	virtual FReply OnPreviewKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);

	/**
	 * 当此widget获得焦点时按键按下后调用（如果未处理，此事件会冒泡）
	 * 这是标准的按键按下事件处理函数
	 *
	 * @param MyGeometry 接收事件的widget的几何信息
	 * @param InKeyEvent  按键事件
	 * @return 返回事件是否被处理以及其他可能的操作
	 */
	virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);

	/**
	 * 当此widget获得焦点时按键释放后调用
	 * 用于处理按键释放事件
	 *
	 * @param MyGeometry 接收事件的widget的几何信息
	 * @param InKeyEvent  按键事件
	 * @return 返回事件是否被处理以及其他可能的操作
	 */
	virtual FReply OnKeyUp(const FGeometry& MyGeometry, const FKeyEvent& InKeyEvent);
};