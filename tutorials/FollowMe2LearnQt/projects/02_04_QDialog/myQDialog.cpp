#include "myQDialog.h"
#include <qdialog.h>
#include <qdebug.h>
#include "CustomDialog.h"

myQDialog::myQDialog(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

//弹出窗口模态对话框
void myQDialog::on_btnWindow_clicked()
{
	QDialog* dlg = new QDialog(this);
	dlg->setAttribute(Qt::WA_DeleteOnClose);//设置对话框关闭后，自动销毁
	dlg->setWindowModality(Qt::WindowModal);
	dlg->show();
	qDebug() << "虽然显示模态对话框，但我不需要等用户操作完就会立马执行";
}

//弹出应用模态对话框
void myQDialog::on_btnApp_clicked()
{
	QDialog* dlg = new QDialog(this);
	dlg->setAttribute(Qt::WA_DeleteOnClose);//设置对话框关闭后，自动销毁
	dlg->setWindowModality(Qt::ApplicationModal);//或者可以使用setModel(true)
	dlg->show();
	qDebug() << "虽然显示模态对话框，但我也不需要等用户操作完就会立马执行";
}

//自定义对话框
void myQDialog::on_btnCustom_clicked()
{
	CustomDialog* dlg = new CustomDialog(this);
	dlg->setAttribute(Qt::WA_DeleteOnClose);//设置对话框关闭后，自动销毁
	int ret = dlg->exec();
	if (ret == QDialog::Accepted)
	{
		ui.lineEdit->setText("你点击了OK按钮");
	}
	else if (ret == QDialog::Rejected)
	{
		ui.lineEdit->setText("你点击了Cancle按钮");
	}
}