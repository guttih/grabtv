#include "dialogsearch.h"
#include "ui_dialogsearch.h"

DialogSearch::DialogSearch(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogSearch)
{
    ui->setupUi(this);
}

DialogSearch::~DialogSearch()
{
    delete ui;
}
