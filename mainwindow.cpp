#include "dialogsearch.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"

// Call QAction for btnSearch and pushButton in the constructor to be able to call functions from the main windows menu.

MainWindow::MainWindow( QWidget *parent )
    : QMainWindow( parent )
    , ui( new Ui::MainWindow )
{
    ui->setupUi( this );

    connect( ui->pushButton, SIGNAL( clicked( bool ) ), this, SLOT( buttonClicked() ) );
    connect( ui->btnSearch, SIGNAL( clicked( bool ) ), this, SLOT( searchClicked() ) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClicked()
{
    close();
}

void MainWindow::searchClicked()
{
    DialogSearch dlg;
    dlg.exec();

}
