/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QWidget *page_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QWidget *page_3;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_6;
    QTextBrowser *textBrowser_2;
    QComboBox *comboBox_custom_source;
    QComboBox *comboBox_custom_destinations;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_custom_add_destination;
    QPushButton *pushButton_custom_display_trip;
    QTextBrowser *textBrowser_custom_total;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox_xcord_add;
    QLabel *label_11;
    QSpinBox *spinBox_ycord_add;
    QLabel *label_12;
    QPushButton *pushButton_add_stadium;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1592, 894);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1060, 280, 211, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(740, 340, 831, 521));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-Project_2_I_Love_Baseball-Desktop_Qt_5_11_2_MinGW_32bit-Debug/debug/MLB_Stadium_Map.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1010, 10, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(700, 10, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 20, 101, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1320, 10, 81, 20));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(1320, 40, 71, 31));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(590, 30, 631, 71));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        comboBox_2 = new QComboBox(page);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(40, 10, 241, 24));
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(340, 10, 251, 24));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        comboBox_3 = new QComboBox(page_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(40, 10, 241, 24));
        comboBox_4 = new QComboBox(page_2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(340, 10, 251, 24));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        comboBox_5 = new QComboBox(page_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(40, 10, 241, 24));
        comboBox_6 = new QComboBox(page_3);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(340, 10, 251, 24));
        stackedWidget->addWidget(page_3);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 50, 97, 22));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 90, 97, 22));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 130, 97, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 380, 81, 16));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 400, 431, 91));
        comboBox_custom_source = new QComboBox(centralwidget);
        comboBox_custom_source->addItem(QString());
        comboBox_custom_source->addItem(QString());
        comboBox_custom_source->addItem(QString());
        comboBox_custom_source->setObjectName(QString::fromUtf8("comboBox_custom_source"));
        comboBox_custom_source->setGeometry(QRect(20, 530, 231, 24));
        comboBox_custom_destinations = new QComboBox(centralwidget);
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->addItem(QString());
        comboBox_custom_destinations->setObjectName(QString::fromUtf8("comboBox_custom_destinations"));
        comboBox_custom_destinations->setGeometry(QRect(20, 590, 251, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 510, 101, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 570, 71, 16));
        pushButton_custom_add_destination = new QPushButton(centralwidget);
        pushButton_custom_add_destination->setObjectName(QString::fromUtf8("pushButton_custom_add_destination"));
        pushButton_custom_add_destination->setGeometry(QRect(290, 590, 191, 25));
        pushButton_custom_display_trip = new QPushButton(centralwidget);
        pushButton_custom_display_trip->setObjectName(QString::fromUtf8("pushButton_custom_display_trip"));
        pushButton_custom_display_trip->setGeometry(QRect(110, 640, 281, 31));
        textBrowser_custom_total = new QTextBrowser(centralwidget);
        textBrowser_custom_total->setObjectName(QString::fromUtf8("textBrowser_custom_total"));
        textBrowser_custom_total->setGeometry(QRect(510, 620, 101, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(530, 590, 71, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 710, 301, 16));
        spinBox_xcord_add = new QSpinBox(centralwidget);
        spinBox_xcord_add->setObjectName(QString::fromUtf8("spinBox_xcord_add"));
        spinBox_xcord_add->setGeometry(QRect(40, 770, 71, 25));
        spinBox_xcord_add->setMinimum(90);
        spinBox_xcord_add->setMaximum(746);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 750, 91, 20));
        spinBox_ycord_add = new QSpinBox(centralwidget);
        spinBox_ycord_add->setObjectName(QString::fromUtf8("spinBox_ycord_add"));
        spinBox_ycord_add->setGeometry(QRect(190, 770, 71, 25));
        spinBox_ycord_add->setMinimum(10);
        spinBox_ycord_add->setMaximum(355);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(190, 750, 81, 16));
        pushButton_add_stadium = new QPushButton(centralwidget);
        pushButton_add_stadium->setObjectName(QString::fromUtf8("pushButton_add_stadium"));
        pushButton_add_stadium->setGeometry(QRect(60, 810, 201, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1592, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Display Trip", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Destination", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Starting Location ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "League Selection", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Total Miles", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "PETCO Park", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Dodger Stadium - Angel Stadium", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "AT&T Park - O.co Coliseum", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "PETCO Park", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Dodger Stadium - Angel Stadium", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "AT&T Park - O.co Coliseum", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Safeco Field", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Chase Field", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Coors Field", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Minute Maid Park", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Rangers Ballpark", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Kauffman Stadium", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "Target Field", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "Busch Stadium", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "Wringley Field - US. Cellular Field", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MainWindow", "Miller Park", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("MainWindow", "Marlins Park", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("MainWindow", "Tropicana Field", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("MainWindow", "Turner Field", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("MainWindow", "Great American Ballpark", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("MainWindow", "PNC Park", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("MainWindow", "Progressive Field", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("MainWindow", "Comerica Park", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("MainWindow", "Rogers Center", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("MainWindow", "Camden Yards - Nationals Park", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("MainWindow", "Citizens Bank Park", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("MainWindow", "Yankee Stadium - Citi Field", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("MainWindow", "Fenway Park", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Angel Stadium", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "O.co Coliseum", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "Angel Stadium", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "O.co Coliseum", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "Safeco Field", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "Minute Maid Park", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("MainWindow", "Rangers Ballpark", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("MainWindow", "Kauffman Stadium", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("MainWindow", "Target Field", nullptr));
        comboBox_4->setItemText(7, QCoreApplication::translate("MainWindow", "US. Cellular Field", nullptr));
        comboBox_4->setItemText(8, QCoreApplication::translate("MainWindow", "Comerica Park", nullptr));
        comboBox_4->setItemText(9, QCoreApplication::translate("MainWindow", "Progressive Field", nullptr));
        comboBox_4->setItemText(10, QCoreApplication::translate("MainWindow", "Tropicana Field", nullptr));
        comboBox_4->setItemText(11, QCoreApplication::translate("MainWindow", "Camden Yards", nullptr));
        comboBox_4->setItemText(12, QCoreApplication::translate("MainWindow", "Yankee Stadium", nullptr));
        comboBox_4->setItemText(13, QCoreApplication::translate("MainWindow", "Rogers Center", nullptr));
        comboBox_4->setItemText(14, QCoreApplication::translate("MainWindow", "Fenway Park", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "PETCO Park", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "Dodger Stadium", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "AT&T Park", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "PETCO Park", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "Dodger Stadium", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("MainWindow", "AT&T Park", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("MainWindow", "Chase Field", nullptr));
        comboBox_6->setItemText(4, QCoreApplication::translate("MainWindow", "Coors Field", nullptr));
        comboBox_6->setItemText(5, QCoreApplication::translate("MainWindow", "Busch Stadium", nullptr));
        comboBox_6->setItemText(6, QCoreApplication::translate("MainWindow", "Wringley Field", nullptr));
        comboBox_6->setItemText(7, QCoreApplication::translate("MainWindow", "Miller Park", nullptr));
        comboBox_6->setItemText(8, QCoreApplication::translate("MainWindow", "Great American Ballpark", nullptr));
        comboBox_6->setItemText(9, QCoreApplication::translate("MainWindow", "PNC Park", nullptr));
        comboBox_6->setItemText(10, QCoreApplication::translate("MainWindow", "Marlins Park", nullptr));
        comboBox_6->setItemText(11, QCoreApplication::translate("MainWindow", "Turner Field", nullptr));
        comboBox_6->setItemText(12, QCoreApplication::translate("MainWindow", "Nationals Park", nullptr));
        comboBox_6->setItemText(13, QCoreApplication::translate("MainWindow", "Citizens Bank Park", nullptr));
        comboBox_6->setItemText(14, QCoreApplication::translate("MainWindow", "Citi Field", nullptr));

        radioButton->setText(QCoreApplication::translate("MainWindow", "MLB", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "AL", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "NL", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Custom Trip", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Select a starting location from the drop-down list, then,</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">add the stadiums you wanna visit in the order you wanna visit them </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-family:'MS Shell Dlg 2';\">by selecting them from the drop-down list and pressing the</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">&quot;Add Destination&quot; button. Once you are done adding all your stadiums, </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">press the &quot;Display Custom Trip&quot; button to display your trip. </span></p></body></html>", nullptr));
        comboBox_custom_source->setItemText(0, QCoreApplication::translate("MainWindow", "PETCO Park", nullptr));
        comboBox_custom_source->setItemText(1, QCoreApplication::translate("MainWindow", "Dodger Stadium - Angel Stadium", nullptr));
        comboBox_custom_source->setItemText(2, QCoreApplication::translate("MainWindow", "AT&T Park - O.co Coliseum", nullptr));

        comboBox_custom_destinations->setItemText(0, QCoreApplication::translate("MainWindow", "PETCO Park", nullptr));
        comboBox_custom_destinations->setItemText(1, QCoreApplication::translate("MainWindow", "Dodger Stadium - Angel Stadium", nullptr));
        comboBox_custom_destinations->setItemText(2, QCoreApplication::translate("MainWindow", "AT&T Park - O.co Coliseum", nullptr));
        comboBox_custom_destinations->setItemText(3, QCoreApplication::translate("MainWindow", "Safeco Field", nullptr));
        comboBox_custom_destinations->setItemText(4, QCoreApplication::translate("MainWindow", "Chase Field", nullptr));
        comboBox_custom_destinations->setItemText(5, QCoreApplication::translate("MainWindow", "Coors Field", nullptr));
        comboBox_custom_destinations->setItemText(6, QCoreApplication::translate("MainWindow", "Minute Maid Park", nullptr));
        comboBox_custom_destinations->setItemText(7, QCoreApplication::translate("MainWindow", "Rangers Ballpark", nullptr));
        comboBox_custom_destinations->setItemText(8, QCoreApplication::translate("MainWindow", "Kauffman Stadium", nullptr));
        comboBox_custom_destinations->setItemText(9, QCoreApplication::translate("MainWindow", "Target Field", nullptr));
        comboBox_custom_destinations->setItemText(10, QCoreApplication::translate("MainWindow", "Busch Stadium", nullptr));
        comboBox_custom_destinations->setItemText(11, QCoreApplication::translate("MainWindow", "Wringley Field - US. Cellular Field", nullptr));
        comboBox_custom_destinations->setItemText(12, QCoreApplication::translate("MainWindow", "Miller Park", nullptr));
        comboBox_custom_destinations->setItemText(13, QCoreApplication::translate("MainWindow", "Marlins Park", nullptr));
        comboBox_custom_destinations->setItemText(14, QCoreApplication::translate("MainWindow", "Tropicana Field", nullptr));
        comboBox_custom_destinations->setItemText(15, QCoreApplication::translate("MainWindow", "Turner Field", nullptr));
        comboBox_custom_destinations->setItemText(16, QCoreApplication::translate("MainWindow", "Great American Ballpark", nullptr));
        comboBox_custom_destinations->setItemText(17, QCoreApplication::translate("MainWindow", "PNC Park", nullptr));
        comboBox_custom_destinations->setItemText(18, QCoreApplication::translate("MainWindow", "Progressive Field", nullptr));
        comboBox_custom_destinations->setItemText(19, QCoreApplication::translate("MainWindow", "Comerica Park", nullptr));
        comboBox_custom_destinations->setItemText(20, QCoreApplication::translate("MainWindow", "Rogers Center", nullptr));
        comboBox_custom_destinations->setItemText(21, QCoreApplication::translate("MainWindow", "Camden Yards - Nationals Park", nullptr));
        comboBox_custom_destinations->setItemText(22, QCoreApplication::translate("MainWindow", "Citizens Bank Park", nullptr));
        comboBox_custom_destinations->setItemText(23, QCoreApplication::translate("MainWindow", "Yankee Stadium - Citi Field", nullptr));
        comboBox_custom_destinations->setItemText(24, QCoreApplication::translate("MainWindow", "Fenway Park", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Starting Location", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Destinations", nullptr));
        pushButton_custom_add_destination->setText(QCoreApplication::translate("MainWindow", "Add Destination", nullptr));
        pushButton_custom_display_trip->setText(QCoreApplication::translate("MainWindow", "Display Custom Trip", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Total Miles", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Admin Stuff, Don't touch anything if not admin, ok?", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X-Coordinate", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y - Coordniate", nullptr));
        pushButton_add_stadium->setText(QCoreApplication::translate("MainWindow", "Add Stadium", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
