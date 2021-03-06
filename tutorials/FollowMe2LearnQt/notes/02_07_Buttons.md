# 02_07. 按钮控件

示例参考 `projects/02_07_Buttons` 

## 1. QAbstractButton

https://doc.qt.io/qt-5/qabstractbutton.html#details

- **autoExclusive** : bool
- **autoRepeat** : bool
- **autoRepeatDelay** : int
- **autoRepeatInterval** : int
- **checkable** : bool
- **checked** : bool
- **down** : bool
- **icon** : QIcon
- **iconSize** : QSize
- **shortcut** : QKeySequence
- **text** : QString

**1. autoExclusive**：是否启用自动排他性。

- 当有很多按钮时，并且被设置了checkable为true，我希望在同一时间，我只能按下其中的一个按钮，如果按下另一个按钮，那先前被按下的按钮会自动弹起，将autoExclusive设置为true是个很好的选择。
- 这些按钮需要有相同的父控件。
- 使用QButtonGroup也可以做到这一点。

**2. autoRepeat， autoRepeatDelay， autoRepeatInterval**：

- 如果启用了autoRepeat，那么pressed()、release()和clicked()的信号会在按钮按下时定时发出。autoRepeat默认是false。最初的延迟和重复间隔由autoRepeatDelay和autoRepeatInterval保存，都以毫秒为单位。注意按钮一直处于按下状态时才会触发。如果按钮松开，则会关闭。

**3. checkable**：是否可以被按下。

**4. checked**：是否可以被勾选，只有checkbox中会用到。

**5. down**：是否处于按下状态。

**6. icon**：按钮对应的图标。

**7. iconSize**：图标大小。

**8. shortCut**：快捷键。还可以调用setShortcut设置快捷键。

**9. text**：按钮文本。

- 如果文本包含一个&字符，则会自动为它创建一个快捷键。“&”后面的字符将用作快捷键。使用“& &”来显示实际的“& &”。

## 2. QPushButton

https://doc.qt.io/qt-5/qpushbutton.html#details

- **autoDefault** : bool
- **default** : bool
- **flat** : bool

**1. autoDefault**：自动默认按钮。

- 当在一个对话框中，用户输入完信息后，想要点击回车确认，则这时可以设置OK按钮的autoDefault为true。

**2. default**：是否为自动默认按钮。

**3. flat**：是否为扁平状态。如果为true，则会去掉按钮的边框。

## 3. QToolButton

https://doc.qt.io/qt-5/qtoolbutton.html#details

- **arrowType** : Qt::ArrowType
- **autoRaise** : bool
- **popupMode** : ToolButtonPopupMode
- **toolButtonStyle** : Qt::ToolButtonStyle

工具按钮，工具按钮主要用在主窗口的工具栏中，一个工具按钮通常会显示一个图标，这个图标就代表了具体的操作。工具按钮还可以增加一个QMenu菜单，这时会在按钮的右下方多了一个小箭头，你也可以设置小箭头的形状和弹出菜单的方式。

**1. arrowType**：菜单提示的小箭头类型。

- Qt::NoArrow：无箭头。
- Qt::UpArrow：箭头向上。
- Qt::DownArrow：箭头向下。
- Qt::LeftArrow：箭头向左。
- Qt::RightArrow：箭头向右。

**2. autoRaise**：自动突起。

**3. pupupModel**：菜单弹出模式。

- QToolButton::DelayedPopup：当鼠标点击按钮一段时间后，才弹出菜单。
- QToolButton::MenuButtonPopup：这个模式下会有一个小箭头显示在按钮右下角，用来提示点击按钮可以弹出一个菜单。
- QToolButton::InstantPopup：点击按钮立刻弹出菜单，这样的话按钮本身的点击功能将无效。

**4. toolButtonStyle**：图标和文字的排版模式。

- Qt::ToolButtonIconOnly：只显示标签。
- Qt::ToolButtonTextOnly：只显示文字。
- Qt::ToolButtonTextBesideIcon：文字显示在标签旁边。
- Qt::ToolButtonTextUnderIcon：文字显示在标签下面。
- Qt::ToolButtonFollowStyle：依赖样式的设置。

## 4. QRadioButton

https://doc.qt.io/qt-5/qradiobutton.html#details

单选按钮

## 5. QCheckBox

https://doc.qt.io/qt-5/qcheckbox.html#details

复选框按钮

- **tristate** : bool

**tristate**：是否为三种状态。三态即：全选，全不选，部分勾选。在树控件中，常会用到三态。