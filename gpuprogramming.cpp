#include "gpuprogramming.h"
#include "ui_gpuprogramming.h"

GPUprogramming::GPUprogramming(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GPUprogramming)
{
    ui->setupUi(this);
}

GPUprogramming::~GPUprogramming()
{
    delete ui;
}
