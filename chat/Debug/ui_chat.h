/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

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
    QPushButton *addfriendButton;
    QPushButton *tolkingButton;
    QPushButton *friendButton;
    QPushButton *collectionButton;
    QPushButton *settingButton;
    QListView *listView;
    QLineEdit *searchLineEdit;
    QLabel *userPhotolabel;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(1075, 800);
        chat->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        friendsListWidget = new QListWidget(chat);
        friendsListWidget->setObjectName(QString::fromUtf8("friendsListWidget"));
        friendsListWidget->setGeometry(QRect(71, 0, 312, 800));
        friendsListWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 234, 232);\n"
"border-color: rgb(231, 230, 229);"));
        toolListWidget = new QListWidget(chat);
        toolListWidget->setObjectName(QString::fromUtf8("toolListWidget"));
        toolListWidget->setGeometry(QRect(0, 0, 72, 800));
        toolListWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 42);"));
        topWidget = new QWidget(chat);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        topWidget->setGeometry(QRect(382, 0, 694, 73));
        topWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);\n"
"border-color: rgb(245, 245, 245);"));
        exitButton = new QPushButton(topWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(642, 0, 53, 33));
        exitButton->setStyleSheet(QString::fromUtf8(""));
        maxSizeButton = new QPushButton(topWidget);
        maxSizeButton->setObjectName(QString::fromUtf8("maxSizeButton"));
        maxSizeButton->setGeometry(QRect(591, 0, 53, 33));
        maxSizeButton->setStyleSheet(QString::fromUtf8(""));
        minSizeButton = new QPushButton(topWidget);
        minSizeButton->setObjectName(QString::fromUtf8("minSizeButton"));
        minSizeButton->setGeometry(QRect(540, 0, 53, 33));
        takingToolButton = new QPushButton(topWidget);
        takingToolButton->setObjectName(QString::fromUtf8("takingToolButton"));
        takingToolButton->setGeometry(QRect(642, 30, 53, 42));
        bottomWidget = new QWidget(chat);
        bottomWidget->setObjectName(QString::fromUtf8("bottomWidget"));
        bottomWidget->setGeometry(QRect(382, 619, 694, 181));
        bottomWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(245, 245, 245);"));
        textEdit = new QTextEdit(bottomWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(33, 52, 661, 81));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 11pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"border-color: rgb(255, 255, 255);"));
        sendButton = new QPushButton(bottomWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(590, 142, 84, 33));
        sendFileButton = new QPushButton(bottomWidget);
        sendFileButton->setObjectName(QString::fromUtf8("sendFileButton"));
        sendFileButton->setGeometry(QRect(65, 20, 20, 20));
        emojiButton = new QPushButton(bottomWidget);
        emojiButton->setObjectName(QString::fromUtf8("emojiButton"));
        emojiButton->setGeometry(QRect(40, 20, 20, 20));
        emojiButton->setStyleSheet(QString::fromUtf8(""));
        phoneButton = new QPushButton(bottomWidget);
        phoneButton->setObjectName(QString::fromUtf8("phoneButton"));
        phoneButton->setGeometry(QRect(90, 20, 20, 20));
        addfriendButton = new QPushButton(chat);
        addfriendButton->setObjectName(QString::fromUtf8("addfriendButton"));
        addfriendButton->setGeometry(QRect(340, 30, 30, 30));
        addfriendButton->setStyleSheet(QString::fromUtf8("color: rgb(89, 89, 89);\n"
"font: 25 17pt \"\347\255\211\347\272\277 Light\";\n"
""));
        tolkingButton = new QPushButton(chat);
        tolkingButton->setObjectName(QString::fromUtf8("tolkingButton"));
        tolkingButton->setGeometry(QRect(20, 70, 33, 33));
        friendButton = new QPushButton(chat);
        friendButton->setObjectName(QString::fromUtf8("friendButton"));
        friendButton->setGeometry(QRect(20, 120, 33, 33));
        collectionButton = new QPushButton(chat);
        collectionButton->setObjectName(QString::fromUtf8("collectionButton"));
        collectionButton->setGeometry(QRect(20, 170, 33, 33));
        settingButton = new QPushButton(chat);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setGeometry(QRect(20, 759, 33, 33));
        listView = new QListView(chat);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(382, 72, 694, 551));
        listView->setStyleSheet(QString::fromUtf8(""));
        searchLineEdit = new QLineEdit(chat);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(90, 30, 235, 31));
        userPhotolabel = new QLabel(chat);
        userPhotolabel->setObjectName(QString::fromUtf8("userPhotolabel"));
        userPhotolabel->setGeometry(QRect(16, 10, 40, 41));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Form", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("chat", "\303\227", 0, QApplication::UnicodeUTF8));
        maxSizeButton->setText(QApplication::translate("chat", "\342\226\241", 0, QApplication::UnicodeUTF8));
        minSizeButton->setText(QApplication::translate("chat", "\342\224\200", 0, QApplication::UnicodeUTF8));
        takingToolButton->setText(QApplication::translate("chat", "\342\200\242\342\200\242\342\200\242", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("chat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\271\346\255\243\345\247\232\344\275\223'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("chat", "Send(S)", 0, QApplication::UnicodeUTF8));
        sendFileButton->setText(QString());
        emojiButton->setText(QString());
        phoneButton->setText(QString());
        addfriendButton->setText(QApplication::translate("chat", "+", 0, QApplication::UnicodeUTF8));
        tolkingButton->setText(QString());
        friendButton->setText(QString());
        collectionButton->setText(QString());
        settingButton->setText(QString());
        userPhotolabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
