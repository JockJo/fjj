/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *clientStatusLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *hostLineEdit;
    QLineEdit *portLineEdit;
    QPushButton *sendButton;
    QProgressBar *clientProgressBar;
    QPushButton *openButton;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(400, 403);
        clientStatusLabel = new QLabel(Client);
        clientStatusLabel->setObjectName(QString::fromUtf8("clientStatusLabel"));
        clientStatusLabel->setGeometry(QRect(60, 240, 291, 16));
        label_2 = new QLabel(Client);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 100, 72, 15));
        label_3 = new QLabel(Client);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 72, 15));
        hostLineEdit = new QLineEdit(Client);
        hostLineEdit->setObjectName(QString::fromUtf8("hostLineEdit"));
        hostLineEdit->setGeometry(QRect(132, 100, 221, 21));
        portLineEdit = new QLineEdit(Client);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(132, 160, 221, 21));
        sendButton = new QPushButton(Client);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(300, 290, 93, 28));
        clientProgressBar = new QProgressBar(Client);
        clientProgressBar->setObjectName(QString::fromUtf8("clientProgressBar"));
        clientProgressBar->setGeometry(QRect(137, 190, 221, 23));
        clientProgressBar->setValue(0);
        openButton = new QPushButton(Client);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(130, 290, 93, 28));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", 0, QApplication::UnicodeUTF8));
        clientStatusLabel->setText(QApplication::translate("Client", "\347\212\266\346\200\201\357\274\232\347\255\211\345\276\205\346\211\223\345\274\200\346\226\207\344\273\266\357\274\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Client", "\344\270\273\346\234\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Client", "\347\253\257\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("Client", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        openButton->setText(QApplication::translate("Client", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
