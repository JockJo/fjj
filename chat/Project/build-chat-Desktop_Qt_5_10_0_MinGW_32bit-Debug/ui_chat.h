/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QListWidget *friendsListWidget;
    QListWidget *toolListWidget;
    QWidget *topWidget;
    QPushButton *exitButton;
    QPushButton *maxSizeButton;
    QPushButton *minSizeButton;
    QPushButton *takingToolButton;
    QWidget *bottomWidget;
    QTextEdit *textEdit;
    QPushButton *sendButton;
    QPushButton *sendFileButton;
    QPushButton *emojiButton;
    QPushButton *phoneButton;
    QProgressBar *sendFileProgressBar;
    QPushButton *tolkingButton;
    QPushButton *friendButton;
    QPushButton *collectionButton;
    QPushButton *settingButton;
    QListView *listView;
    QLabel *userPhotolabel;
    QListWidget *fListWidget;
    QLineEdit *searchLineEdit;
    QPushButton *addfriendButton;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(1075, 800);
        chat->setStyleSheet(QStringLiteral("background-color: rgb(245, 245, 245);"));
        friendsListWidget = new QListWidget(chat);
        friendsListWidget->setObjectName(QStringLiteral("friendsListWidget"));
        friendsListWidget->setGeometry(QRect(71, 72, 312, 731));
        friendsListWidget->setStyleSheet(QLatin1String("background-color: rgb(238, 234, 232);\n"
"border-color: rgb(231, 230, 229);"));
        toolListWidget = new QListWidget(chat);
        toolListWidget->setObjectName(QStringLiteral("toolListWidget"));
        toolListWidget->setGeometry(QRect(0, 0, 72, 800));
        toolListWidget->setStyleSheet(QStringLiteral("background-color: rgb(42, 42, 42);"));
        topWidget = new QWidget(chat);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        topWidget->setGeometry(QRect(382, 0, 694, 73));
        topWidget->setStyleSheet(QLatin1String("background-color: rgb(245, 245, 245);\n"
"border-color: rgb(245, 245, 245);"));
        exitButton = new QPushButton(topWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(642, 0, 53, 33));
        exitButton->setStyleSheet(QStringLiteral(""));
        maxSizeButton = new QPushButton(topWidget);
        maxSizeButton->setObjectName(QStringLiteral("maxSizeButton"));
        maxSizeButton->setGeometry(QRect(591, 0, 53, 33));
        maxSizeButton->setStyleSheet(QStringLiteral(""));
        minSizeButton = new QPushButton(topWidget);
        minSizeButton->setObjectName(QStringLiteral("minSizeButton"));
        minSizeButton->setGeometry(QRect(540, 0, 53, 33));
        takingToolButton = new QPushButton(topWidget);
        takingToolButton->setObjectName(QStringLiteral("takingToolButton"));
        takingToolButton->setGeometry(QRect(642, 30, 53, 42));
        bottomWidget = new QWidget(chat);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setGeometry(QRect(382, 619, 694, 181));
        bottomWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(245, 245, 245);"));
        textEdit = new QTextEdit(bottomWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(33, 52, 661, 81));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 11pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"border-color: rgb(255, 255, 255);"));
        sendButton = new QPushButton(bottomWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(590, 142, 84, 33));
        sendFileButton = new QPushButton(bottomWidget);
        sendFileButton->setObjectName(QStringLiteral("sendFileButton"));
        sendFileButton->setGeometry(QRect(65, 20, 20, 20));
        emojiButton = new QPushButton(bottomWidget);
        emojiButton->setObjectName(QStringLiteral("emojiButton"));
        emojiButton->setGeometry(QRect(40, 20, 20, 20));
        emojiButton->setStyleSheet(QStringLiteral(""));
        phoneButton = new QPushButton(bottomWidget);
        phoneButton->setObjectName(QStringLiteral("phoneButton"));
        phoneButton->setGeometry(QRect(90, 20, 20, 20));
        sendFileProgressBar = new QProgressBar(bottomWidget);
        sendFileProgressBar->setObjectName(QStringLiteral("sendFileProgressBar"));
        sendFileProgressBar->setGeometry(QRect(250, 20, 118, 23));
        sendFileProgressBar->setValue(0);
        tolkingButton = new QPushButton(chat);
        tolkingButton->setObjectName(QStringLiteral("tolkingButton"));
        tolkingButton->setGeometry(QRect(20, 70, 33, 33));
        friendButton = new QPushButton(chat);
        friendButton->setObjectName(QStringLiteral("friendButton"));
        friendButton->setGeometry(QRect(20, 120, 33, 33));
        collectionButton = new QPushButton(chat);
        collectionButton->setObjectName(QStringLiteral("collectionButton"));
        collectionButton->setGeometry(QRect(20, 170, 33, 33));
        settingButton = new QPushButton(chat);
        settingButton->setObjectName(QStringLiteral("settingButton"));
        settingButton->setGeometry(QRect(20, 759, 33, 33));
        listView = new QListView(chat);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(382, 72, 694, 551));
        listView->setStyleSheet(QStringLiteral(""));
        userPhotolabel = new QLabel(chat);
        userPhotolabel->setObjectName(QStringLiteral("userPhotolabel"));
        userPhotolabel->setGeometry(QRect(16, 10, 40, 41));
        fListWidget = new QListWidget(chat);
        fListWidget->setObjectName(QStringLiteral("fListWidget"));
        fListWidget->setGeometry(QRect(71, 0, 312, 73));
        fListWidget->setStyleSheet(QLatin1String("background-color: rgb(238, 234, 232);\n"
"border-color: rgb(231, 230, 229);"));
        searchLineEdit = new QLineEdit(chat);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(80, 20, 235, 31));
        addfriendButton = new QPushButton(chat);
        addfriendButton->setObjectName(QStringLiteral("addfriendButton"));
        addfriendButton->setGeometry(QRect(340, 20, 30, 30));
        addfriendButton->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"font: 25 17pt \"\347\255\211\347\272\277 Light\";\n"
""));
        toolListWidget->raise();
        friendsListWidget->raise();
        bottomWidget->raise();
        tolkingButton->raise();
        friendButton->raise();
        collectionButton->raise();
        settingButton->raise();
        listView->raise();
        userPhotolabel->raise();
        fListWidget->raise();
        searchLineEdit->raise();
        addfriendButton->raise();
        topWidget->raise();

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Form", nullptr));
        exitButton->setText(QApplication::translate("chat", "\303\227", nullptr));
        maxSizeButton->setText(QApplication::translate("chat", "\342\226\241", nullptr));
        minSizeButton->setText(QApplication::translate("chat", "\342\224\200", nullptr));
        takingToolButton->setText(QApplication::translate("chat", "\342\200\242\342\200\242\342\200\242", nullptr));
        textEdit->setHtml(QApplication::translate("chat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\271\346\255\243\345\247\232\344\275\223'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        sendButton->setText(QApplication::translate("chat", "Send(S)", nullptr));
        sendFileButton->setText(QString());
        emojiButton->setText(QString());
        phoneButton->setText(QString());
        tolkingButton->setText(QString());
        friendButton->setText(QString());
        collectionButton->setText(QString());
        settingButton->setText(QString());
        userPhotolabel->setText(QString());
        addfriendButton->setText(QApplication::translate("chat", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
