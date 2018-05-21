#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calcu.h"
#include <QSizePolicy>

//#include<QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    QSizePolicy centerwidgetSizePolicy = ui->centralWidget->sizePolicy();
    centerwidgetSizePolicy.setHorizontalStretch(2);
    centerwidgetSizePolicy.setVerticalStretch(2);
    ui->centralWidget->setSizePolicy(centerwidgetSizePolicy);
*/

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(showtext_1()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(showtext_2()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(showtext_3()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(showtext_4()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(showtext_5()));
    connect(ui->pushButton_10,SIGNAL(clicked(bool)),this,SLOT(showtext_10()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(showtext_8()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(showtext_6()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(showtext_7()));
    connect(ui->pushButton_16,SIGNAL(clicked(bool)),this,SLOT(showtext_16()));
    connect(ui->pushButton_13,SIGNAL(clicked(bool)),this,SLOT(showtext_13()));
    connect(ui->pushButton_14,SIGNAL(clicked(bool)),this,SLOT(showtext_14()));
    connect(ui->pushButton_11,SIGNAL(clicked(bool)),this,SLOT(showtext_11()));
    connect(ui->pushButton_15,SIGNAL(clicked(bool)),this,SLOT(showtext_15()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(showtext_9()));
    //
    connect(ui->pushButton_12,SIGNAL(clicked(bool)),this,SLOT(showtext_12()));



}


void MainWindow::showtext_1()
{
    beforeshuru();
    shurubiaodashi.append("+");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_2()
{
    beforeshuru();
    shurubiaodashi.append("-");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_3()
{
    beforeshuru();
    shurubiaodashi.append("*");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_4()
{
    beforeshuru();
    shurubiaodashi.append("/");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_5()
{
    beforeshuru();
    shurubiaodashi.append("(");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_6()
{
    beforeshuru();
    shurubiaodashi.append("8");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_7()
{
    beforeshuru();
    shurubiaodashi.append("9");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_8()
{
    beforeshuru();
    shurubiaodashi.append("7");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_9()
{
    beforeshuru();
    shurubiaodashi.append("3");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_10()
{
    beforeshuru();
    shurubiaodashi.append(")");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_11()
{
    beforeshuru();
    shurubiaodashi.append("1");
    ui->lineEdit->setText(shurubiaodashi);

}

void MainWindow::showtext_13()
{
    beforeshuru();
    shurubiaodashi.append("5");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_14()
{
    beforeshuru();
    shurubiaodashi.append("6");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_15()
{
    beforeshuru();
    shurubiaodashi.append("2");
    ui->lineEdit->setText(shurubiaodashi);

}
void MainWindow::showtext_16()
{
    beforeshuru();
    shurubiaodashi.append("4");
    ui->lineEdit->setText(shurubiaodashi);

}



//

void MainWindow::showtext_12() //特殊
{
     int  str_resul;
 //    QString qstr_resul;
     str_resul = Calcu::ducalcu(shurubiaodashi.toStdString());
     shurubiaodashi = QString::number(str_resul,10);
     ui->lineEdit->setText(shurubiaodashi);
     ifaftercalcu = true;

}

void MainWindow::beforeshuru()
{
    if(ifaftercalcu)
    {
        ifaftercalcu = false;
        shurubiaodashi.clear();
        ui->lineEdit->clear();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

