/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Homepage;
    QPushButton *pushButton;
    QPushButton *pushButton_24;
    QPushButton *pushButton_32;
    QPushButton *pushButton_52;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QWidget *Resources;
    QPushButton *pushButton_2;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QWidget *Fear;
    QLabel *label_11;
    QPushButton *NoA_3;
    QPushButton *YesA_3;
    QWidget *Mood_2;
    QLabel *label_15;
    QPushButton *Bad_2;
    QPushButton *Terrible_2;
    QPushButton *Good_2;
    QPushButton *Great_2;
    QPushButton *Fair_2;
    QWidget *Sad_D;
    QLabel *label_16;
    QPushButton *SadK_2;
    QPushButton *SlightlySad_2;
    QPushButton *veryS_4;
    QWidget *Surprised_D;
    QPushButton *NoSu_2;
    QPushButton *YesSu_2;
    QLabel *label_17;
    QWidget *Plan;
    QWidget *Anger_D;
    QLabel *label_9;
    QPushButton *NoF_2;
    QPushButton *YesF_2;
    QWidget *Feedback;
    QLabel *label_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_7;
    QWidget *Home_2;
    QLabel *label_14;
    QPushButton *on_2;
    QWidget *Anger;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_6;
    QWidget *Happy_P;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_33;
    QPushButton *pushButton_3;
    QWidget *Sad_P;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_8;
    QWidget *FearP;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_5;
    QWidget *SignIn;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_16;
    QWidget *Happy_D;
    QLabel *label_13;
    QPushButton *KindOf_2;
    QPushButton *Slightly_2;
    QPushButton *Very_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1196, 941);
        QFont font;
        font.setPointSize(18);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1101, 881));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        stackedWidget->setFont(font1);
        stackedWidget->setAutoFillBackground(false);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/Downloads/unnamed (1).jpg);\n"
"font: 16pt \"Sans Serif Collection\";\n"
""));
        Homepage = new QWidget();
        Homepage->setObjectName("Homepage");
        pushButton = new QPushButton(Homepage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 620, 161, 61));
        pushButton_24 = new QPushButton(Homepage);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(490, 620, 111, 61));
        pushButton_32 = new QPushButton(Homepage);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setGeometry(QRect(770, 620, 131, 61));
        pushButton_52 = new QPushButton(Homepage);
        pushButton_52->setObjectName("pushButton_52");
        pushButton_52->setGeometry(QRect(30, 70, 93, 29));
        pushButton_4 = new QPushButton(Homepage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(910, 40, 93, 41));
        label_4 = new QLabel(Homepage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 190, 721, 291));
        stackedWidget->addWidget(Homepage);
        Resources = new QWidget();
        Resources->setObjectName("Resources");
        pushButton_2 = new QPushButton(Resources);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 80, 93, 29));
        pushButton_36 = new QPushButton(Resources);
        pushButton_36->setObjectName("pushButton_36");
        pushButton_36->setGeometry(QRect(20, 210, 721, 101));
        pushButton_36->setFont(font1);
        pushButton_37 = new QPushButton(Resources);
        pushButton_37->setObjectName("pushButton_37");
        pushButton_37->setGeometry(QRect(20, 320, 531, 121));
        pushButton_37->setFont(font1);
        pushButton_38 = new QPushButton(Resources);
        pushButton_38->setObjectName("pushButton_38");
        pushButton_38->setGeometry(QRect(20, 450, 531, 91));
        pushButton_38->setFont(font1);
        stackedWidget->addWidget(Resources);
        Fear = new QWidget();
        Fear->setObjectName("Fear");
        label_11 = new QLabel(Fear);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(210, 230, 561, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setStrikeOut(false);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";"));
        NoA_3 = new QPushButton(Fear);
        NoA_3->setObjectName("NoA_3");
        NoA_3->setGeometry(QRect(80, 450, 121, 71));
        NoA_3->setFont(font1);
        NoA_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";"));
        YesA_3 = new QPushButton(Fear);
        YesA_3->setObjectName("YesA_3");
        YesA_3->setGeometry(QRect(780, 430, 111, 81));
        YesA_3->setFont(font1);
        stackedWidget->addWidget(Fear);
        Mood_2 = new QWidget();
        Mood_2->setObjectName("Mood_2");
        label_15 = new QLabel(Mood_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(230, 210, 491, 101));
        label_15->setFont(font2);
        Bad_2 = new QPushButton(Mood_2);
        Bad_2->setObjectName("Bad_2");
        Bad_2->setGeometry(QRect(710, 430, 131, 61));
        Bad_2->setFont(font2);
        Bad_2->setFocusPolicy(Qt::WheelFocus);
        Terrible_2 = new QPushButton(Mood_2);
        Terrible_2->setObjectName("Terrible_2");
        Terrible_2->setGeometry(QRect(880, 430, 111, 61));
        Terrible_2->setFont(font2);
        Good_2 = new QPushButton(Mood_2);
        Good_2->setObjectName("Good_2");
        Good_2->setGeometry(QRect(330, 430, 121, 61));
        Good_2->setFont(font2);
        Great_2 = new QPushButton(Mood_2);
        Great_2->setObjectName("Great_2");
        Great_2->setEnabled(true);
        Great_2->setGeometry(QRect(140, 430, 121, 61));
        Great_2->setFont(font2);
        Great_2->setFlat(false);
        Fair_2 = new QPushButton(Mood_2);
        Fair_2->setObjectName("Fair_2");
        Fair_2->setGeometry(QRect(530, 430, 121, 61));
        Fair_2->setFont(font2);
        stackedWidget->addWidget(Mood_2);
        Sad_D = new QWidget();
        Sad_D->setObjectName("Sad_D");
        label_16 = new QLabel(Sad_D);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(180, 220, 601, 61));
        label_16->setFont(font2);
        SadK_2 = new QPushButton(Sad_D);
        SadK_2->setObjectName("SadK_2");
        SadK_2->setGeometry(QRect(430, 430, 131, 61));
        SlightlySad_2 = new QPushButton(Sad_D);
        SlightlySad_2->setObjectName("SlightlySad_2");
        SlightlySad_2->setGeometry(QRect(670, 420, 141, 71));
        veryS_4 = new QPushButton(Sad_D);
        veryS_4->setObjectName("veryS_4");
        veryS_4->setGeometry(QRect(200, 430, 121, 61));
        stackedWidget->addWidget(Sad_D);
        Surprised_D = new QWidget();
        Surprised_D->setObjectName("Surprised_D");
        NoSu_2 = new QPushButton(Surprised_D);
        NoSu_2->setObjectName("NoSu_2");
        NoSu_2->setGeometry(QRect(540, 340, 91, 71));
        NoSu_2->setFont(font2);
        NoSu_2->setMouseTracking(false);
        NoSu_2->setAutoFillBackground(false);
        YesSu_2 = new QPushButton(Surprised_D);
        YesSu_2->setObjectName("YesSu_2");
        YesSu_2->setGeometry(QRect(270, 350, 101, 61));
        label_17 = new QLabel(Surprised_D);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(90, 210, 731, 41));
        label_17->setFont(font2);
        stackedWidget->addWidget(Surprised_D);
        Plan = new QWidget();
        Plan->setObjectName("Plan");
        stackedWidget->addWidget(Plan);
        Anger_D = new QWidget();
        Anger_D->setObjectName("Anger_D");
        Anger_D->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/Downloads/unnamed (1).jpg);"));
        label_9 = new QLabel(Anger_D);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(180, 200, 721, 101));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 15pt \"Segoe Script\";\n"
"font: 16pt \"Sans Serif Collection\";\n"
""));
        NoF_2 = new QPushButton(Anger_D);
        NoF_2->setObjectName("NoF_2");
        NoF_2->setGeometry(QRect(340, 430, 91, 81));
        NoF_2->setFont(font1);
        NoF_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        YesF_2 = new QPushButton(Anger_D);
        YesF_2->setObjectName("YesF_2");
        YesF_2->setGeometry(QRect(650, 430, 91, 81));
        YesF_2->setFont(font1);
        YesF_2->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(Anger_D);
        Feedback = new QWidget();
        Feedback->setObjectName("Feedback");
        label_12 = new QLabel(Feedback);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 100, 971, 71));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("background grey"));
        pushButton_10 = new QPushButton(Feedback);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(660, 470, 131, 81));
        pushButton_10->setFont(font1);
        pushButton_11 = new QPushButton(Feedback);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(270, 470, 151, 81));
        pushButton_11->setFont(font1);
        pushButton_7 = new QPushButton(Feedback);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(50, 30, 93, 29));
        stackedWidget->addWidget(Feedback);
        Home_2 = new QWidget();
        Home_2->setObjectName("Home_2");
        label_14 = new QLabel(Home_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(290, 230, 521, 81));
        label_14->setFont(font2);
        on_2 = new QPushButton(Home_2);
        on_2->setObjectName("on_2");
        on_2->setGeometry(QRect(480, 400, 101, 101));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Georgia")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        on_2->setFont(font3);
        on_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Georgia\";\n"
"image: url(:/Downloads/a_dark_blue_gradient_background_with_a_y.png);"));
        stackedWidget->addWidget(Home_2);
        Anger = new QWidget();
        Anger->setObjectName("Anger");
        textBrowser_2 = new QTextBrowser(Anger);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(110, 70, 711, 192));
        textBrowser_3 = new QTextBrowser(Anger);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(110, 270, 351, 192));
        pushButton_25 = new QPushButton(Anger);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(110, 470, 551, 31));
        pushButton_25->setFont(font1);
        pushButton_26 = new QPushButton(Anger);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(110, 510, 711, 76));
        pushButton_26->setFont(font1);
        pushButton_6 = new QPushButton(Anger);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 40, 93, 29));
        stackedWidget->addWidget(Anger);
        Happy_P = new QWidget();
        Happy_P->setObjectName("Happy_P");
        textEdit_2 = new QTextEdit(Happy_P);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(40, 90, 991, 141));
        textEdit_3 = new QTextEdit(Happy_P);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(40, 310, 181, 61));
        pushButton_30 = new QPushButton(Happy_P);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(40, 380, 671, 29));
        pushButton_30->setFont(font1);
        pushButton_30->setStyleSheet(QString::fromUtf8("font: 16pt \"Sans Serif Collection\";"));
        pushButton_31 = new QPushButton(Happy_P);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(40, 420, 771, 29));
        pushButton_31->setFont(font1);
        pushButton_33 = new QPushButton(Happy_P);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setGeometry(QRect(40, 460, 481, 29));
        pushButton_33->setFont(font1);
        pushButton_3 = new QPushButton(Happy_P);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 40, 93, 29));
        stackedWidget->addWidget(Happy_P);
        Sad_P = new QWidget();
        Sad_P->setObjectName("Sad_P");
        textEdit_4 = new QTextEdit(Sad_P);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(10, 90, 911, 131));
        textEdit_5 = new QTextEdit(Sad_P);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(10, 240, 341, 81));
        pushButton_34 = new QPushButton(Sad_P);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setGeometry(QRect(10, 340, 711, 29));
        pushButton_35 = new QPushButton(Sad_P);
        pushButton_35->setObjectName("pushButton_35");
        pushButton_35->setGeometry(QRect(0, 380, 551, 29));
        pushButton_8 = new QPushButton(Sad_P);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 0, 93, 29));
        stackedWidget->addWidget(Sad_P);
        FearP = new QWidget();
        FearP->setObjectName("FearP");
        textEdit = new QTextEdit(FearP);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 90, 901, 211));
        lineEdit_4 = new QLineEdit(FearP);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 330, 251, 61));
        lineEdit_4->setFont(font1);
        pushButton_27 = new QPushButton(FearP);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(20, 490, 841, 41));
        pushButton_27->setFont(font1);
        pushButton_28 = new QPushButton(FearP);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(20, 400, 281, 31));
        pushButton_28->setFont(font1);
        pushButton_29 = new QPushButton(FearP);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(20, 440, 721, 41));
        pushButton_29->setFont(font1);
        pushButton_5 = new QPushButton(FearP);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(40, 10, 93, 29));
        stackedWidget->addWidget(FearP);
        SignIn = new QWidget();
        SignIn->setObjectName("SignIn");
        textBrowser = new QTextBrowser(SignIn);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 10, 601, 381));
        lineEdit = new QLineEdit(SignIn);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 20, 331, 26));
        lineEdit_2 = new QLineEdit(SignIn);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 70, 331, 26));
        lineEdit_3 = new QLineEdit(SignIn);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(190, 120, 331, 26));
        label = new QLabel(SignIn);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 130, 91, 20));
        label_2 = new QLabel(SignIn);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 70, 111, 31));
        label_3 = new QLabel(SignIn);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 20, 111, 41));
        pushButton_16 = new QPushButton(SignIn);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(460, 350, 93, 29));
        stackedWidget->addWidget(SignIn);
        Happy_D = new QWidget();
        Happy_D->setObjectName("Happy_D");
        label_13 = new QLabel(Happy_D);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(270, 220, 411, 51));
        label_13->setFont(font2);
        KindOf_2 = new QPushButton(Happy_D);
        KindOf_2->setObjectName("KindOf_2");
        KindOf_2->setGeometry(QRect(340, 400, 191, 51));
        KindOf_2->setFont(font1);
        Slightly_2 = new QPushButton(Happy_D);
        Slightly_2->setObjectName("Slightly_2");
        Slightly_2->setGeometry(QRect(670, 400, 181, 51));
        Slightly_2->setFont(font1);
        Very_2 = new QPushButton(Happy_D);
        Very_2->setObjectName("Very_2");
        Very_2->setGeometry(QRect(50, 400, 161, 51));
        Very_2->setFont(font1);
        stackedWidget->addWidget(Happy_D);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        stackedWidget->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Aptitude Test", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "Plan", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "Resources", nullptr));
        pushButton_52->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; vertical-align:sub;\">MAZAJ.me</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_36->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "Schedule an appointment with the bmcc counselling service", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "View the full athletic recreational schedule", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "Participate in events going on on campus. ", nullptr));
#if QT_CONFIG(whatsthis)
        label_11->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("MainWindow", "Are you currently feeling fearful or anxious?", nullptr));
#if QT_CONFIG(tooltip)
        NoA_3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">yesjjjjj<img src=\":/Downloads/unnamed.jpg\"/><img src=\":/Downloads/unnamed.jpg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        NoA_3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Downloads/download (1).jpeg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        NoA_3->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        YesA_3->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "How would you rate your current mood?", nullptr));
        Bad_2->setText(QCoreApplication::translate("MainWindow", "Bad", nullptr));
        Terrible_2->setText(QCoreApplication::translate("MainWindow", "Terrible", nullptr));
        Good_2->setText(QCoreApplication::translate("MainWindow", "Good", nullptr));
        Great_2->setText(QCoreApplication::translate("MainWindow", "Great", nullptr));
        Fair_2->setText(QCoreApplication::translate("MainWindow", "Fair", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "How would you rate your current level of sadness?", nullptr));
        SadK_2->setText(QCoreApplication::translate("MainWindow", "Kind Of", nullptr));
        SlightlySad_2->setText(QCoreApplication::translate("MainWindow", "Slightly", nullptr));
        veryS_4->setText(QCoreApplication::translate("MainWindow", "very", nullptr));
        NoSu_2->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        YesSu_2->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Have you experienced anything surprising or disgusting lately?", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Have you experienced anger or frustration recently?</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        NoF_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Downloads/download (3).jpeg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        NoF_2->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
#if QT_CONFIG(tooltip)
        YesF_2->setToolTip(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:15pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/Downloads/download (1).jpeg\" /></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        YesF_2->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        label_12->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Plan", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Feedback", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#000000;\">Ready To Start Your Day? </span></p></body></html>", nullptr));
        on_2->setText(QString());
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; vertical-align:sub;\">Did you know? Anger is a natural emotion that, when managed constructively, can lead to positive outcomes. It can be a powerful motivator for change and action.</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:18pt;\">*Engage in hobbies</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:18pt;\"> *Reach out to friends </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:18pt;\">*Practice deep breathing</span></p></body></html>", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "View anger management techniques", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "Schedule an appointment with the bmcc counselling service", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; vertical-align:sub;\">Did you know that Scientists suggest that happiness is linked to increased energy and overall well-being however here are some tips</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:22pt; vertical-align:sub;\">Enjoy nature</span></p></body></html>", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "Participate in ongoing campus events. Click to view more", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "Enjoy sports? Click to view the full athletic recreational schedule", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "You could also participate in bmcc clubs", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; vertical-align:sub;\">Did you know that researchers find engaging in activities you enjoy can help improve your mood?</span></p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:22pt; vertical-align:super;\">Practice self compassion</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:22pt; vertical-align:super;\">Set small goals</span></p></body></ht"
                        "ml>", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "Schedule an appointment with the bmcc counselling service", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "View the full athletic recreational schedule", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif Collection'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; vertical-align:sub;\">Did you know?Fear triggers the &quot;fight or flight&quot; response, an ancient survival mechanism. This response prepares the body to confront a threat or flee from it, enabling quick decision-making in potentially dangerous situations.</span></p></body></html>", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "Reach out to friends", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "click to schedule an appointment with the bmcc counselling service", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_28->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "View coping strategies", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "Participate in events going on on campus. Click to view more", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "EmplID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; vertical-align:super;\">Last Name </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; vertical-align:super;\">First Name</span></p></body></html>", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "How happy do you feel right now?", nullptr));
        KindOf_2->setText(QCoreApplication::translate("MainWindow", "Kind of", nullptr));
        Slightly_2->setText(QCoreApplication::translate("MainWindow", "Slightly", nullptr));
        Very_2->setText(QCoreApplication::translate("MainWindow", "Very ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
