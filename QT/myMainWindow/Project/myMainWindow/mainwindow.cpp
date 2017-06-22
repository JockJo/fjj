#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage(tr("welcome"),10000);
    QLabel* permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box|QFrame::Sunken);
    permanent->setText("www.baidu.com");
    ui->statusBar->addPermanentWidget(permanent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_New_triggered()
{
    QTextEdit* edit = new QTextEdit(this);
    QMdiSubWindow* child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("edit "));
    child->show();
}
