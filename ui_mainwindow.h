/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MainVLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *loGrid;
    QLabel *labelOutAngle1;
    QLabel *labelSide1;
    QLabel *labelSide2;
    QLabel *labelAngl2;
    QDoubleSpinBox *doubleSpinBoxSide2;
    QDoubleSpinBox *doubleSpinBoxSide1;
    QLabel *labelAngle3;
    QDoubleSpinBox *doubleSpinBoxSide3;
    QDoubleSpinBox *doubleSpinBoxAngle2;
    QDoubleSpinBox *doubleSpinBoxAngle1;
    QDoubleSpinBox *doubleSpinBoxAngle3;
    QLabel *labelSide3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButtonAngle3Unknown;
    QRadioButton *radioButtonAngle3Have;
    QRadioButton *radioButtonAngle3Find;
    QGroupBox *groupBox_5;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButtonAngle2Unknown;
    QRadioButton *radioButtonAngle2Have;
    QRadioButton *radioButtonAngle2Find;
    QLabel *labelAngle1;
    QGroupBox *groupBox_12;
    QWidget *horizontalLayoutWidget_14;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *radioButtonOutAngle2Unknown;
    QRadioButton *radioButtonOutAngle2Have;
    QRadioButton *radioButtonOutAngle2Find;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget_13;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *radioButtonOutAngle1Unknown;
    QRadioButton *radioButtonOutAngle1Have;
    QRadioButton *radioButtonOutAngle1Find;
    QGroupBox *groupBox_13;
    QWidget *horizontalLayoutWidget_17;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *radioButtonOutAngle3Unknown;
    QRadioButton *radioButtonOutAngle3Have;
    QRadioButton *radioButtonOutAngle3Find;
    QDoubleSpinBox *doubleSpinBoxOutAngle1;
    QLabel *labelOutAngle2;
    QGroupBox *groupBox_8;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButtonSide2Unknown;
    QRadioButton *radioButtonSide2Have;
    QRadioButton *radioButtonSide2Find;
    QGroupBox *groupBox_7;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButtonSide3Unknown;
    QRadioButton *radioButtonSide3Have;
    QRadioButton *radioButtonSide3Find;
    QGroupBox *groupBox_9;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radioButtonSide1Unknown;
    QRadioButton *radioButtonSide1Have;
    QRadioButton *radioButtonSide1Find;
    QDoubleSpinBox *doubleSpinBoxOutAngle3;
    QGroupBox *groupBox_10;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButtonAngle1Unknown;
    QRadioButton *radioButtonAngle1Have;
    QRadioButton *radioButtonAngle1Find;
    QLabel *labelPerimeter;
    QDoubleSpinBox *doubleSpinBoxOutAngle2;
    QLabel *labelOutAngle3;
    QGroupBox *groupBox_11;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButtonPerimeterUnknown;
    QRadioButton *radioButtonPerimeterHave;
    QRadioButton *radioButtonPerimeterFind;
    QDoubleSpinBox *doubleSpinBoxPerimeter;
    QLabel *labelSquare;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonSquareUnknown;
    QRadioButton *radioButtonSquareHave;
    QRadioButton *radioButtonSquareFind;
    QDoubleSpinBox *doubleSpinBoxSquare;
    QComboBox *comboBoxAngle1;
    QComboBox *comboBoxAngle2;
    QComboBox *comboBoxAngle3;
    QComboBox *comboBoxSide1;
    QComboBox *comboBoxSide2;
    QComboBox *comboBoxSide3;
    QComboBox *comboBoxOutAngle1;
    QComboBox *comboBoxOutAngle2;
    QComboBox *comboBoxOutAngle3;
    QComboBox *comboBoxPerimeter;
    QComboBox *comboBoxSquare;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *btnDemo;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *TextEditLog;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(740, 757);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(740, 650));
        MainWindow->setDockNestingEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 731, 685));
        MainVLayout = new QVBoxLayout(verticalLayoutWidget);
        MainVLayout->setSpacing(6);
        MainVLayout->setContentsMargins(11, 11, 11, 11);
        MainVLayout->setObjectName(QString::fromUtf8("MainVLayout"));
        MainVLayout->setSizeConstraint(QLayout::SetMaximumSize);
        MainVLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loGrid = new QGridLayout();
        loGrid->setSpacing(6);
        loGrid->setObjectName(QString::fromUtf8("loGrid"));
        loGrid->setSizeConstraint(QLayout::SetMinimumSize);
        labelOutAngle1 = new QLabel(verticalLayoutWidget);
        labelOutAngle1->setObjectName(QString::fromUtf8("labelOutAngle1"));
        labelOutAngle1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelOutAngle1, 5, 0, 1, 1);

        labelSide1 = new QLabel(verticalLayoutWidget);
        labelSide1->setObjectName(QString::fromUtf8("labelSide1"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSide1->sizePolicy().hasHeightForWidth());
        labelSide1->setSizePolicy(sizePolicy2);
        labelSide1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelSide1, 2, 0, 1, 1);

        labelSide2 = new QLabel(verticalLayoutWidget);
        labelSide2->setObjectName(QString::fromUtf8("labelSide2"));
        sizePolicy2.setHeightForWidth(labelSide2->sizePolicy().hasHeightForWidth());
        labelSide2->setSizePolicy(sizePolicy2);
        labelSide2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelSide2, 3, 0, 1, 1);

        labelAngl2 = new QLabel(verticalLayoutWidget);
        labelAngl2->setObjectName(QString::fromUtf8("labelAngl2"));
        labelAngl2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelAngl2, 9, 0, 1, 1);

        doubleSpinBoxSide2 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxSide2->setObjectName(QString::fromUtf8("doubleSpinBoxSide2"));
        doubleSpinBoxSide2->setEnabled(false);
        doubleSpinBoxSide2->setMinimum(0.01);
        doubleSpinBoxSide2->setMaximum(9999.99);
        doubleSpinBoxSide2->setValue(1);

        loGrid->addWidget(doubleSpinBoxSide2, 3, 1, 1, 1);

        doubleSpinBoxSide1 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxSide1->setObjectName(QString::fromUtf8("doubleSpinBoxSide1"));
        doubleSpinBoxSide1->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(doubleSpinBoxSide1->sizePolicy().hasHeightForWidth());
        doubleSpinBoxSide1->setSizePolicy(sizePolicy3);
        QFont font;
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        doubleSpinBoxSide1->setFont(font);
        doubleSpinBoxSide1->setMinimum(0.01);
        doubleSpinBoxSide1->setMaximum(9999.99);
        doubleSpinBoxSide1->setValue(1);

        loGrid->addWidget(doubleSpinBoxSide1, 2, 1, 1, 1);

        labelAngle3 = new QLabel(verticalLayoutWidget);
        labelAngle3->setObjectName(QString::fromUtf8("labelAngle3"));
        labelAngle3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelAngle3, 10, 0, 1, 1);

        doubleSpinBoxSide3 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxSide3->setObjectName(QString::fromUtf8("doubleSpinBoxSide3"));
        doubleSpinBoxSide3->setEnabled(false);
        doubleSpinBoxSide3->setMinimum(0.01);
        doubleSpinBoxSide3->setValue(1);

        loGrid->addWidget(doubleSpinBoxSide3, 4, 1, 1, 1);

        doubleSpinBoxAngle2 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxAngle2->setObjectName(QString::fromUtf8("doubleSpinBoxAngle2"));
        doubleSpinBoxAngle2->setEnabled(false);
        doubleSpinBoxAngle2->setMinimum(0.01);
        doubleSpinBoxAngle2->setMaximum(9999.99);
        doubleSpinBoxAngle2->setValue(1);

        loGrid->addWidget(doubleSpinBoxAngle2, 9, 1, 1, 1);

        doubleSpinBoxAngle1 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxAngle1->setObjectName(QString::fromUtf8("doubleSpinBoxAngle1"));
        doubleSpinBoxAngle1->setEnabled(false);
        doubleSpinBoxAngle1->setMinimum(0.01);
        doubleSpinBoxAngle1->setMaximum(9999.99);
        doubleSpinBoxAngle1->setValue(1);

        loGrid->addWidget(doubleSpinBoxAngle1, 8, 1, 1, 1);

        doubleSpinBoxAngle3 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxAngle3->setObjectName(QString::fromUtf8("doubleSpinBoxAngle3"));
        doubleSpinBoxAngle3->setEnabled(false);
        doubleSpinBoxAngle3->setMinimum(0.01);
        doubleSpinBoxAngle3->setMaximum(9999.99);
        doubleSpinBoxAngle3->setValue(1);

        loGrid->addWidget(doubleSpinBoxAngle3, 10, 1, 1, 1);

        labelSide3 = new QLabel(verticalLayoutWidget);
        labelSide3->setObjectName(QString::fromUtf8("labelSide3"));
        labelSide3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelSide3, 4, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        loGrid->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        loGrid->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        loGrid->addWidget(label_3, 1, 3, 1, 1);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy5);
        groupBox_4->setFlat(false);
        horizontalLayoutWidget_4 = new QWidget(groupBox_4);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButtonAngle3Unknown = new QRadioButton(horizontalLayoutWidget_4);
        radioButtonAngle3Unknown->setObjectName(QString::fromUtf8("radioButtonAngle3Unknown"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(radioButtonAngle3Unknown->sizePolicy().hasHeightForWidth());
        radioButtonAngle3Unknown->setSizePolicy(sizePolicy6);
        radioButtonAngle3Unknown->setChecked(true);

        horizontalLayout_6->addWidget(radioButtonAngle3Unknown);

        radioButtonAngle3Have = new QRadioButton(horizontalLayoutWidget_4);
        radioButtonAngle3Have->setObjectName(QString::fromUtf8("radioButtonAngle3Have"));
        sizePolicy6.setHeightForWidth(radioButtonAngle3Have->sizePolicy().hasHeightForWidth());
        radioButtonAngle3Have->setSizePolicy(sizePolicy6);

        horizontalLayout_6->addWidget(radioButtonAngle3Have);

        radioButtonAngle3Find = new QRadioButton(horizontalLayoutWidget_4);
        radioButtonAngle3Find->setObjectName(QString::fromUtf8("radioButtonAngle3Find"));
        sizePolicy6.setHeightForWidth(radioButtonAngle3Find->sizePolicy().hasHeightForWidth());
        radioButtonAngle3Find->setSizePolicy(sizePolicy6);

        horizontalLayout_6->addWidget(radioButtonAngle3Find);


        loGrid->addWidget(groupBox_4, 10, 3, 1, 1);

        groupBox_5 = new QGroupBox(verticalLayoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        sizePolicy5.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy5);
        groupBox_5->setFlat(false);
        horizontalLayoutWidget_5 = new QWidget(groupBox_5);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        radioButtonAngle2Unknown = new QRadioButton(horizontalLayoutWidget_5);
        radioButtonAngle2Unknown->setObjectName(QString::fromUtf8("radioButtonAngle2Unknown"));
        sizePolicy6.setHeightForWidth(radioButtonAngle2Unknown->sizePolicy().hasHeightForWidth());
        radioButtonAngle2Unknown->setSizePolicy(sizePolicy6);
        radioButtonAngle2Unknown->setChecked(true);

        horizontalLayout_7->addWidget(radioButtonAngle2Unknown);

        radioButtonAngle2Have = new QRadioButton(horizontalLayoutWidget_5);
        radioButtonAngle2Have->setObjectName(QString::fromUtf8("radioButtonAngle2Have"));
        sizePolicy6.setHeightForWidth(radioButtonAngle2Have->sizePolicy().hasHeightForWidth());
        radioButtonAngle2Have->setSizePolicy(sizePolicy6);
        radioButtonAngle2Have->setChecked(false);

        horizontalLayout_7->addWidget(radioButtonAngle2Have);

        radioButtonAngle2Find = new QRadioButton(horizontalLayoutWidget_5);
        radioButtonAngle2Find->setObjectName(QString::fromUtf8("radioButtonAngle2Find"));
        sizePolicy6.setHeightForWidth(radioButtonAngle2Find->sizePolicy().hasHeightForWidth());
        radioButtonAngle2Find->setSizePolicy(sizePolicy6);

        horizontalLayout_7->addWidget(radioButtonAngle2Find);


        loGrid->addWidget(groupBox_5, 9, 3, 1, 1);

        labelAngle1 = new QLabel(verticalLayoutWidget);
        labelAngle1->setObjectName(QString::fromUtf8("labelAngle1"));
        labelAngle1->setLayoutDirection(Qt::LeftToRight);
        labelAngle1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelAngle1, 8, 0, 1, 1);

        groupBox_12 = new QGroupBox(verticalLayoutWidget);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        sizePolicy5.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy5);
        groupBox_12->setFlat(false);
        horizontalLayoutWidget_14 = new QWidget(groupBox_12);
        horizontalLayoutWidget_14->setObjectName(QString::fromUtf8("horizontalLayoutWidget_14"));
        horizontalLayoutWidget_14->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_14);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        radioButtonOutAngle2Unknown = new QRadioButton(horizontalLayoutWidget_14);
        radioButtonOutAngle2Unknown->setObjectName(QString::fromUtf8("radioButtonOutAngle2Unknown"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(radioButtonOutAngle2Unknown->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle2Unknown->setSizePolicy(sizePolicy7);
        radioButtonOutAngle2Unknown->setChecked(true);

        horizontalLayout_16->addWidget(radioButtonOutAngle2Unknown);

        radioButtonOutAngle2Have = new QRadioButton(horizontalLayoutWidget_14);
        radioButtonOutAngle2Have->setObjectName(QString::fromUtf8("radioButtonOutAngle2Have"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle2Have->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle2Have->setSizePolicy(sizePolicy6);

        horizontalLayout_16->addWidget(radioButtonOutAngle2Have);

        radioButtonOutAngle2Find = new QRadioButton(horizontalLayoutWidget_14);
        radioButtonOutAngle2Find->setObjectName(QString::fromUtf8("radioButtonOutAngle2Find"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle2Find->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle2Find->setSizePolicy(sizePolicy6);

        horizontalLayout_16->addWidget(radioButtonOutAngle2Find);


        loGrid->addWidget(groupBox_12, 6, 3, 1, 1);

        groupBox_6 = new QGroupBox(verticalLayoutWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy5.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy5);
        groupBox_6->setFlat(false);
        horizontalLayoutWidget_13 = new QWidget(groupBox_6);
        horizontalLayoutWidget_13->setObjectName(QString::fromUtf8("horizontalLayoutWidget_13"));
        horizontalLayoutWidget_13->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_13);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        radioButtonOutAngle1Unknown = new QRadioButton(horizontalLayoutWidget_13);
        radioButtonOutAngle1Unknown->setObjectName(QString::fromUtf8("radioButtonOutAngle1Unknown"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle1Unknown->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle1Unknown->setSizePolicy(sizePolicy6);
        radioButtonOutAngle1Unknown->setChecked(true);

        horizontalLayout_15->addWidget(radioButtonOutAngle1Unknown);

        radioButtonOutAngle1Have = new QRadioButton(horizontalLayoutWidget_13);
        radioButtonOutAngle1Have->setObjectName(QString::fromUtf8("radioButtonOutAngle1Have"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle1Have->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle1Have->setSizePolicy(sizePolicy6);

        horizontalLayout_15->addWidget(radioButtonOutAngle1Have);

        radioButtonOutAngle1Find = new QRadioButton(horizontalLayoutWidget_13);
        radioButtonOutAngle1Find->setObjectName(QString::fromUtf8("radioButtonOutAngle1Find"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle1Find->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle1Find->setSizePolicy(sizePolicy6);
        radioButtonOutAngle1Find->setChecked(false);

        horizontalLayout_15->addWidget(radioButtonOutAngle1Find);


        loGrid->addWidget(groupBox_6, 5, 3, 1, 1);

        groupBox_13 = new QGroupBox(verticalLayoutWidget);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        sizePolicy5.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy5);
        groupBox_13->setFlat(false);
        horizontalLayoutWidget_17 = new QWidget(groupBox_13);
        horizontalLayoutWidget_17->setObjectName(QString::fromUtf8("horizontalLayoutWidget_17"));
        horizontalLayoutWidget_17->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_19 = new QHBoxLayout(horizontalLayoutWidget_17);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        radioButtonOutAngle3Unknown = new QRadioButton(horizontalLayoutWidget_17);
        radioButtonOutAngle3Unknown->setObjectName(QString::fromUtf8("radioButtonOutAngle3Unknown"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle3Unknown->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle3Unknown->setSizePolicy(sizePolicy6);
        radioButtonOutAngle3Unknown->setChecked(true);

        horizontalLayout_19->addWidget(radioButtonOutAngle3Unknown);

        radioButtonOutAngle3Have = new QRadioButton(horizontalLayoutWidget_17);
        radioButtonOutAngle3Have->setObjectName(QString::fromUtf8("radioButtonOutAngle3Have"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle3Have->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle3Have->setSizePolicy(sizePolicy6);

        horizontalLayout_19->addWidget(radioButtonOutAngle3Have);

        radioButtonOutAngle3Find = new QRadioButton(horizontalLayoutWidget_17);
        radioButtonOutAngle3Find->setObjectName(QString::fromUtf8("radioButtonOutAngle3Find"));
        sizePolicy6.setHeightForWidth(radioButtonOutAngle3Find->sizePolicy().hasHeightForWidth());
        radioButtonOutAngle3Find->setSizePolicy(sizePolicy6);

        horizontalLayout_19->addWidget(radioButtonOutAngle3Find);


        loGrid->addWidget(groupBox_13, 7, 3, 1, 1);

        doubleSpinBoxOutAngle1 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxOutAngle1->setObjectName(QString::fromUtf8("doubleSpinBoxOutAngle1"));
        doubleSpinBoxOutAngle1->setEnabled(false);
        doubleSpinBoxOutAngle1->setMinimum(0.01);
        doubleSpinBoxOutAngle1->setMaximum(9999.99);
        doubleSpinBoxOutAngle1->setValue(1);

        loGrid->addWidget(doubleSpinBoxOutAngle1, 5, 1, 1, 1);

        labelOutAngle2 = new QLabel(verticalLayoutWidget);
        labelOutAngle2->setObjectName(QString::fromUtf8("labelOutAngle2"));
        labelOutAngle2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelOutAngle2, 6, 0, 1, 1);

        groupBox_8 = new QGroupBox(verticalLayoutWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        sizePolicy5.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy5);
        groupBox_8->setFlat(false);
        horizontalLayoutWidget_9 = new QWidget(groupBox_8);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        radioButtonSide2Unknown = new QRadioButton(horizontalLayoutWidget_9);
        radioButtonSide2Unknown->setObjectName(QString::fromUtf8("radioButtonSide2Unknown"));
        sizePolicy6.setHeightForWidth(radioButtonSide2Unknown->sizePolicy().hasHeightForWidth());
        radioButtonSide2Unknown->setSizePolicy(sizePolicy6);
        radioButtonSide2Unknown->setChecked(true);

        horizontalLayout_11->addWidget(radioButtonSide2Unknown);

        radioButtonSide2Have = new QRadioButton(horizontalLayoutWidget_9);
        radioButtonSide2Have->setObjectName(QString::fromUtf8("radioButtonSide2Have"));
        sizePolicy6.setHeightForWidth(radioButtonSide2Have->sizePolicy().hasHeightForWidth());
        radioButtonSide2Have->setSizePolicy(sizePolicy6);
        radioButtonSide2Have->setChecked(false);

        horizontalLayout_11->addWidget(radioButtonSide2Have);

        radioButtonSide2Find = new QRadioButton(horizontalLayoutWidget_9);
        radioButtonSide2Find->setObjectName(QString::fromUtf8("radioButtonSide2Find"));
        sizePolicy6.setHeightForWidth(radioButtonSide2Find->sizePolicy().hasHeightForWidth());
        radioButtonSide2Find->setSizePolicy(sizePolicy6);

        horizontalLayout_11->addWidget(radioButtonSide2Find);


        loGrid->addWidget(groupBox_8, 3, 3, 1, 1);

        groupBox_7 = new QGroupBox(verticalLayoutWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        sizePolicy5.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy5);
        groupBox_7->setFlat(false);
        horizontalLayoutWidget_8 = new QWidget(groupBox_7);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        radioButtonSide3Unknown = new QRadioButton(horizontalLayoutWidget_8);
        radioButtonSide3Unknown->setObjectName(QString::fromUtf8("radioButtonSide3Unknown"));
        sizePolicy6.setHeightForWidth(radioButtonSide3Unknown->sizePolicy().hasHeightForWidth());
        radioButtonSide3Unknown->setSizePolicy(sizePolicy6);
        radioButtonSide3Unknown->setChecked(true);

        horizontalLayout_10->addWidget(radioButtonSide3Unknown);

        radioButtonSide3Have = new QRadioButton(horizontalLayoutWidget_8);
        radioButtonSide3Have->setObjectName(QString::fromUtf8("radioButtonSide3Have"));
        sizePolicy6.setHeightForWidth(radioButtonSide3Have->sizePolicy().hasHeightForWidth());
        radioButtonSide3Have->setSizePolicy(sizePolicy6);

        horizontalLayout_10->addWidget(radioButtonSide3Have);

        radioButtonSide3Find = new QRadioButton(horizontalLayoutWidget_8);
        radioButtonSide3Find->setObjectName(QString::fromUtf8("radioButtonSide3Find"));
        sizePolicy6.setHeightForWidth(radioButtonSide3Find->sizePolicy().hasHeightForWidth());
        radioButtonSide3Find->setSizePolicy(sizePolicy6);

        horizontalLayout_10->addWidget(radioButtonSide3Find);


        loGrid->addWidget(groupBox_7, 4, 3, 1, 1);

        groupBox_9 = new QGroupBox(verticalLayoutWidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        sizePolicy4.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy4);
        groupBox_9->setFlat(false);
        horizontalLayoutWidget_10 = new QWidget(groupBox_9);
        horizontalLayoutWidget_10->setObjectName(QString::fromUtf8("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        radioButtonSide1Unknown = new QRadioButton(horizontalLayoutWidget_10);
        radioButtonSide1Unknown->setObjectName(QString::fromUtf8("radioButtonSide1Unknown"));
        sizePolicy7.setHeightForWidth(radioButtonSide1Unknown->sizePolicy().hasHeightForWidth());
        radioButtonSide1Unknown->setSizePolicy(sizePolicy7);
        radioButtonSide1Unknown->setChecked(true);

        horizontalLayout_12->addWidget(radioButtonSide1Unknown);

        radioButtonSide1Have = new QRadioButton(horizontalLayoutWidget_10);
        radioButtonSide1Have->setObjectName(QString::fromUtf8("radioButtonSide1Have"));
        sizePolicy6.setHeightForWidth(radioButtonSide1Have->sizePolicy().hasHeightForWidth());
        radioButtonSide1Have->setSizePolicy(sizePolicy6);
        radioButtonSide1Have->setChecked(false);

        horizontalLayout_12->addWidget(radioButtonSide1Have);

        radioButtonSide1Find = new QRadioButton(horizontalLayoutWidget_10);
        radioButtonSide1Find->setObjectName(QString::fromUtf8("radioButtonSide1Find"));
        sizePolicy6.setHeightForWidth(radioButtonSide1Find->sizePolicy().hasHeightForWidth());
        radioButtonSide1Find->setSizePolicy(sizePolicy6);

        horizontalLayout_12->addWidget(radioButtonSide1Find);


        loGrid->addWidget(groupBox_9, 2, 3, 1, 1);

        doubleSpinBoxOutAngle3 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxOutAngle3->setObjectName(QString::fromUtf8("doubleSpinBoxOutAngle3"));
        doubleSpinBoxOutAngle3->setEnabled(false);
        doubleSpinBoxOutAngle3->setMinimum(0.01);
        doubleSpinBoxOutAngle3->setMaximum(9999.99);
        doubleSpinBoxOutAngle3->setValue(1);

        loGrid->addWidget(doubleSpinBoxOutAngle3, 7, 1, 1, 1);

        groupBox_10 = new QGroupBox(verticalLayoutWidget);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        sizePolicy5.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy5);
        groupBox_10->setFlat(false);
        horizontalLayoutWidget_11 = new QWidget(groupBox_10);
        horizontalLayoutWidget_11->setObjectName(QString::fromUtf8("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        radioButtonAngle1Unknown = new QRadioButton(horizontalLayoutWidget_11);
        radioButtonAngle1Unknown->setObjectName(QString::fromUtf8("radioButtonAngle1Unknown"));
        sizePolicy7.setHeightForWidth(radioButtonAngle1Unknown->sizePolicy().hasHeightForWidth());
        radioButtonAngle1Unknown->setSizePolicy(sizePolicy7);
        radioButtonAngle1Unknown->setChecked(true);

        horizontalLayout_13->addWidget(radioButtonAngle1Unknown);

        radioButtonAngle1Have = new QRadioButton(horizontalLayoutWidget_11);
        radioButtonAngle1Have->setObjectName(QString::fromUtf8("radioButtonAngle1Have"));
        sizePolicy6.setHeightForWidth(radioButtonAngle1Have->sizePolicy().hasHeightForWidth());
        radioButtonAngle1Have->setSizePolicy(sizePolicy6);
        radioButtonAngle1Have->setChecked(false);

        horizontalLayout_13->addWidget(radioButtonAngle1Have);

        radioButtonAngle1Find = new QRadioButton(horizontalLayoutWidget_11);
        radioButtonAngle1Find->setObjectName(QString::fromUtf8("radioButtonAngle1Find"));
        sizePolicy6.setHeightForWidth(radioButtonAngle1Find->sizePolicy().hasHeightForWidth());
        radioButtonAngle1Find->setSizePolicy(sizePolicy6);
        radioButtonAngle1Find->setChecked(false);

        horizontalLayout_13->addWidget(radioButtonAngle1Find);


        loGrid->addWidget(groupBox_10, 8, 3, 1, 1);

        labelPerimeter = new QLabel(verticalLayoutWidget);
        labelPerimeter->setObjectName(QString::fromUtf8("labelPerimeter"));
        labelPerimeter->setLineWidth(1);
        labelPerimeter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelPerimeter, 11, 0, 1, 1);

        doubleSpinBoxOutAngle2 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxOutAngle2->setObjectName(QString::fromUtf8("doubleSpinBoxOutAngle2"));
        doubleSpinBoxOutAngle2->setEnabled(false);
        doubleSpinBoxOutAngle2->setMinimum(0.01);
        doubleSpinBoxOutAngle2->setMaximum(9999.99);
        doubleSpinBoxOutAngle2->setValue(1);

        loGrid->addWidget(doubleSpinBoxOutAngle2, 6, 1, 1, 1);

        labelOutAngle3 = new QLabel(verticalLayoutWidget);
        labelOutAngle3->setObjectName(QString::fromUtf8("labelOutAngle3"));
        labelOutAngle3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelOutAngle3, 7, 0, 1, 1);

        groupBox_11 = new QGroupBox(verticalLayoutWidget);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        sizePolicy5.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy5);
        groupBox_11->setFlat(false);
        horizontalLayoutWidget_12 = new QWidget(groupBox_11);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        radioButtonPerimeterUnknown = new QRadioButton(horizontalLayoutWidget_12);
        radioButtonPerimeterUnknown->setObjectName(QString::fromUtf8("radioButtonPerimeterUnknown"));
        sizePolicy7.setHeightForWidth(radioButtonPerimeterUnknown->sizePolicy().hasHeightForWidth());
        radioButtonPerimeterUnknown->setSizePolicy(sizePolicy7);
        radioButtonPerimeterUnknown->setChecked(true);

        horizontalLayout_14->addWidget(radioButtonPerimeterUnknown);

        radioButtonPerimeterHave = new QRadioButton(horizontalLayoutWidget_12);
        radioButtonPerimeterHave->setObjectName(QString::fromUtf8("radioButtonPerimeterHave"));
        sizePolicy6.setHeightForWidth(radioButtonPerimeterHave->sizePolicy().hasHeightForWidth());
        radioButtonPerimeterHave->setSizePolicy(sizePolicy6);

        horizontalLayout_14->addWidget(radioButtonPerimeterHave);

        radioButtonPerimeterFind = new QRadioButton(horizontalLayoutWidget_12);
        radioButtonPerimeterFind->setObjectName(QString::fromUtf8("radioButtonPerimeterFind"));
        sizePolicy6.setHeightForWidth(radioButtonPerimeterFind->sizePolicy().hasHeightForWidth());
        radioButtonPerimeterFind->setSizePolicy(sizePolicy6);

        horizontalLayout_14->addWidget(radioButtonPerimeterFind);


        loGrid->addWidget(groupBox_11, 11, 3, 1, 1);

        doubleSpinBoxPerimeter = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxPerimeter->setObjectName(QString::fromUtf8("doubleSpinBoxPerimeter"));
        doubleSpinBoxPerimeter->setEnabled(false);
        doubleSpinBoxPerimeter->setMinimum(0.01);
        doubleSpinBoxPerimeter->setMaximum(9999.99);
        doubleSpinBoxPerimeter->setValue(1);

        loGrid->addWidget(doubleSpinBoxPerimeter, 11, 1, 1, 1);

        labelSquare = new QLabel(verticalLayoutWidget);
        labelSquare->setObjectName(QString::fromUtf8("labelSquare"));
        labelSquare->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        loGrid->addWidget(labelSquare, 12, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        loGrid->addWidget(label_4, 1, 2, 1, 1);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy5.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy5);
        groupBox_2->setFlat(false);
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 171, 23));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButtonSquareUnknown = new QRadioButton(horizontalLayoutWidget_2);
        radioButtonSquareUnknown->setObjectName(QString::fromUtf8("radioButtonSquareUnknown"));
        sizePolicy6.setHeightForWidth(radioButtonSquareUnknown->sizePolicy().hasHeightForWidth());
        radioButtonSquareUnknown->setSizePolicy(sizePolicy6);
        radioButtonSquareUnknown->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonSquareUnknown);

        radioButtonSquareHave = new QRadioButton(horizontalLayoutWidget_2);
        radioButtonSquareHave->setObjectName(QString::fromUtf8("radioButtonSquareHave"));
        sizePolicy6.setHeightForWidth(radioButtonSquareHave->sizePolicy().hasHeightForWidth());
        radioButtonSquareHave->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(radioButtonSquareHave);

        radioButtonSquareFind = new QRadioButton(horizontalLayoutWidget_2);
        radioButtonSquareFind->setObjectName(QString::fromUtf8("radioButtonSquareFind"));
        sizePolicy6.setHeightForWidth(radioButtonSquareFind->sizePolicy().hasHeightForWidth());
        radioButtonSquareFind->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(radioButtonSquareFind);


        loGrid->addWidget(groupBox_2, 12, 3, 1, 1);

        doubleSpinBoxSquare = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBoxSquare->setObjectName(QString::fromUtf8("doubleSpinBoxSquare"));
        doubleSpinBoxSquare->setEnabled(false);
        doubleSpinBoxSquare->setMinimum(0.01);
        doubleSpinBoxSquare->setMaximum(9999.99);
        doubleSpinBoxSquare->setValue(1);

        loGrid->addWidget(doubleSpinBoxSquare, 12, 1, 1, 1);

        comboBoxAngle1 = new QComboBox(verticalLayoutWidget);
        comboBoxAngle1->setObjectName(QString::fromUtf8("comboBoxAngle1"));
        comboBoxAngle1->setEditable(false);

        loGrid->addWidget(comboBoxAngle1, 8, 2, 1, 1);

        comboBoxAngle2 = new QComboBox(verticalLayoutWidget);
        comboBoxAngle2->setObjectName(QString::fromUtf8("comboBoxAngle2"));

        loGrid->addWidget(comboBoxAngle2, 9, 2, 1, 1);

        comboBoxAngle3 = new QComboBox(verticalLayoutWidget);
        comboBoxAngle3->setObjectName(QString::fromUtf8("comboBoxAngle3"));

        loGrid->addWidget(comboBoxAngle3, 10, 2, 1, 1);

        comboBoxSide1 = new QComboBox(verticalLayoutWidget);
        comboBoxSide1->setObjectName(QString::fromUtf8("comboBoxSide1"));

        loGrid->addWidget(comboBoxSide1, 2, 2, 1, 1);

        comboBoxSide2 = new QComboBox(verticalLayoutWidget);
        comboBoxSide2->setObjectName(QString::fromUtf8("comboBoxSide2"));

        loGrid->addWidget(comboBoxSide2, 3, 2, 1, 1);

        comboBoxSide3 = new QComboBox(verticalLayoutWidget);
        comboBoxSide3->setObjectName(QString::fromUtf8("comboBoxSide3"));

        loGrid->addWidget(comboBoxSide3, 4, 2, 1, 1);

        comboBoxOutAngle1 = new QComboBox(verticalLayoutWidget);
        comboBoxOutAngle1->setObjectName(QString::fromUtf8("comboBoxOutAngle1"));

        loGrid->addWidget(comboBoxOutAngle1, 5, 2, 1, 1);

        comboBoxOutAngle2 = new QComboBox(verticalLayoutWidget);
        comboBoxOutAngle2->setObjectName(QString::fromUtf8("comboBoxOutAngle2"));

        loGrid->addWidget(comboBoxOutAngle2, 6, 2, 1, 1);

        comboBoxOutAngle3 = new QComboBox(verticalLayoutWidget);
        comboBoxOutAngle3->setObjectName(QString::fromUtf8("comboBoxOutAngle3"));

        loGrid->addWidget(comboBoxOutAngle3, 7, 2, 1, 1);

        comboBoxPerimeter = new QComboBox(verticalLayoutWidget);
        comboBoxPerimeter->setObjectName(QString::fromUtf8("comboBoxPerimeter"));

        loGrid->addWidget(comboBoxPerimeter, 11, 2, 1, 1);

        comboBoxSquare = new QComboBox(verticalLayoutWidget);
        comboBoxSquare->setObjectName(QString::fromUtf8("comboBoxSquare"));

        loGrid->addWidget(comboBoxSquare, 12, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        loGrid->addItem(verticalSpacer_2, 16, 0, 1, 1);


        horizontalLayout_2->addLayout(loGrid);


        MainVLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        btnDemo = new QPushButton(verticalLayoutWidget);
        btnDemo->setObjectName(QString::fromUtf8("btnDemo"));

        horizontalLayout->addWidget(btnDemo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        MainVLayout->addLayout(horizontalLayout);

        TextEditLog = new QTextEdit(verticalLayoutWidget);
        TextEditLog->setObjectName(QString::fromUtf8("TextEditLog"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(TextEditLog->sizePolicy().hasHeightForWidth());
        TextEditLog->setSizePolicy(sizePolicy8);
        TextEditLog->setMinimumSize(QSize(0, 100));
        TextEditLog->setMaximumSize(QSize(16777215, 100));
        TextEditLog->setContextMenuPolicy(Qt::NoContextMenu);
        TextEditLog->setReadOnly(true);

        MainVLayout->addWidget(TextEditLog);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(doubleSpinBoxSide1, doubleSpinBoxSide2);
        QWidget::setTabOrder(doubleSpinBoxSide2, doubleSpinBoxSide3);
        QWidget::setTabOrder(doubleSpinBoxSide3, doubleSpinBoxOutAngle1);
        QWidget::setTabOrder(doubleSpinBoxOutAngle1, doubleSpinBoxOutAngle2);
        QWidget::setTabOrder(doubleSpinBoxOutAngle2, doubleSpinBoxOutAngle3);
        QWidget::setTabOrder(doubleSpinBoxOutAngle3, doubleSpinBoxAngle1);
        QWidget::setTabOrder(doubleSpinBoxAngle1, doubleSpinBoxAngle2);
        QWidget::setTabOrder(doubleSpinBoxAngle2, doubleSpinBoxAngle3);
        QWidget::setTabOrder(doubleSpinBoxAngle3, doubleSpinBoxPerimeter);
        QWidget::setTabOrder(doubleSpinBoxPerimeter, doubleSpinBoxSquare);
        QWidget::setTabOrder(doubleSpinBoxSquare, comboBoxSide1);
        QWidget::setTabOrder(comboBoxSide1, comboBoxSide2);
        QWidget::setTabOrder(comboBoxSide2, comboBoxSide3);
        QWidget::setTabOrder(comboBoxSide3, comboBoxOutAngle1);
        QWidget::setTabOrder(comboBoxOutAngle1, comboBoxOutAngle2);
        QWidget::setTabOrder(comboBoxOutAngle2, comboBoxOutAngle3);
        QWidget::setTabOrder(comboBoxOutAngle3, comboBoxAngle1);
        QWidget::setTabOrder(comboBoxAngle1, comboBoxAngle2);
        QWidget::setTabOrder(comboBoxAngle2, comboBoxAngle3);
        QWidget::setTabOrder(comboBoxAngle3, comboBoxPerimeter);
        QWidget::setTabOrder(comboBoxPerimeter, comboBoxSquare);
        QWidget::setTabOrder(comboBoxSquare, radioButtonSide1Unknown);
        QWidget::setTabOrder(radioButtonSide1Unknown, radioButtonSide1Have);
        QWidget::setTabOrder(radioButtonSide1Have, radioButtonSide1Find);
        QWidget::setTabOrder(radioButtonSide1Find, radioButtonSide2Unknown);
        QWidget::setTabOrder(radioButtonSide2Unknown, radioButtonSide2Have);
        QWidget::setTabOrder(radioButtonSide2Have, radioButtonSide2Find);
        QWidget::setTabOrder(radioButtonSide2Find, radioButtonSide3Unknown);
        QWidget::setTabOrder(radioButtonSide3Unknown, radioButtonSide3Have);
        QWidget::setTabOrder(radioButtonSide3Have, radioButtonSide3Find);
        QWidget::setTabOrder(radioButtonSide3Find, radioButtonOutAngle1Unknown);
        QWidget::setTabOrder(radioButtonOutAngle1Unknown, radioButtonOutAngle1Have);
        QWidget::setTabOrder(radioButtonOutAngle1Have, radioButtonOutAngle1Find);
        QWidget::setTabOrder(radioButtonOutAngle1Find, radioButtonOutAngle2Unknown);
        QWidget::setTabOrder(radioButtonOutAngle2Unknown, radioButtonOutAngle2Have);
        QWidget::setTabOrder(radioButtonOutAngle2Have, radioButtonOutAngle2Find);
        QWidget::setTabOrder(radioButtonOutAngle2Find, radioButtonOutAngle3Unknown);
        QWidget::setTabOrder(radioButtonOutAngle3Unknown, radioButtonOutAngle3Have);
        QWidget::setTabOrder(radioButtonOutAngle3Have, radioButtonOutAngle3Find);
        QWidget::setTabOrder(radioButtonOutAngle3Find, radioButtonAngle1Unknown);
        QWidget::setTabOrder(radioButtonAngle1Unknown, radioButtonAngle1Have);
        QWidget::setTabOrder(radioButtonAngle1Have, radioButtonAngle1Find);
        QWidget::setTabOrder(radioButtonAngle1Find, radioButtonAngle2Unknown);
        QWidget::setTabOrder(radioButtonAngle2Unknown, radioButtonAngle2Have);
        QWidget::setTabOrder(radioButtonAngle2Have, radioButtonAngle2Find);
        QWidget::setTabOrder(radioButtonAngle2Find, radioButtonAngle3Unknown);
        QWidget::setTabOrder(radioButtonAngle3Unknown, radioButtonAngle3Have);
        QWidget::setTabOrder(radioButtonAngle3Have, radioButtonAngle3Find);
        QWidget::setTabOrder(radioButtonAngle3Find, radioButtonPerimeterUnknown);
        QWidget::setTabOrder(radioButtonPerimeterUnknown, radioButtonPerimeterHave);
        QWidget::setTabOrder(radioButtonPerimeterHave, radioButtonPerimeterFind);
        QWidget::setTabOrder(radioButtonPerimeterFind, radioButtonSquareUnknown);
        QWidget::setTabOrder(radioButtonSquareUnknown, radioButtonSquareHave);
        QWidget::setTabOrder(radioButtonSquareHave, radioButtonSquareFind);
        QWidget::setTabOrder(radioButtonSquareFind, pushButton);
        QWidget::setTabOrder(pushButton, btnDemo);
        QWidget::setTabOrder(btnDemo, TextEditLog);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        labelOutAngle1->setText(QApplication::translate("MainWindow", "\320\227\320\276\320\262\320\275\321\226\321\210\320\275\321\226\320\271 \320\272\321\203\321\202 1", 0, QApplication::UnicodeUTF8));
        labelSide1->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 1", 0, QApplication::UnicodeUTF8));
        labelSide2->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 2", 0, QApplication::UnicodeUTF8));
        labelAngl2->setText(QApplication::translate("MainWindow", "\320\232\321\203\321\202 2", 0, QApplication::UnicodeUTF8));
        labelAngle3->setText(QApplication::translate("MainWindow", "\320\232\321\203\321\202 3", 0, QApplication::UnicodeUTF8));
        labelSide3->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 3", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\235\320\265 \320\267\320\260\320\264\320\260\320\275\320\276 / \320\262\321\226\320\264\320\276\320\274\320\276 / \320\267\320\275\320\260\320\271\321\202\320\270", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QString());
        radioButtonAngle3Unknown->setText(QString());
        radioButtonAngle3Have->setText(QString());
        radioButtonAngle3Find->setText(QString());
        groupBox_5->setTitle(QString());
        radioButtonAngle2Unknown->setText(QString());
        radioButtonAngle2Have->setText(QString());
        radioButtonAngle2Find->setText(QString());
        labelAngle1->setText(QApplication::translate("MainWindow", "\320\232\321\203\321\202 1", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QString());
        radioButtonOutAngle2Unknown->setText(QString());
        radioButtonOutAngle2Have->setText(QString());
        radioButtonOutAngle2Find->setText(QString());
        groupBox_6->setTitle(QString());
        radioButtonOutAngle1Unknown->setText(QString());
        radioButtonOutAngle1Have->setText(QString());
        radioButtonOutAngle1Find->setText(QString());
        groupBox_13->setTitle(QString());
        radioButtonOutAngle3Unknown->setText(QString());
        radioButtonOutAngle3Have->setText(QString());
        radioButtonOutAngle3Find->setText(QString());
        labelOutAngle2->setText(QApplication::translate("MainWindow", "\320\227\320\276\320\262\320\275\321\226\321\210\320\275\321\226\320\271 \320\272\321\203\321\202 2", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QString());
        radioButtonSide2Unknown->setText(QString());
        radioButtonSide2Have->setText(QString());
        radioButtonSide2Find->setText(QString());
        groupBox_7->setTitle(QString());
        radioButtonSide3Unknown->setText(QString());
        radioButtonSide3Have->setText(QString());
        radioButtonSide3Find->setText(QString());
        groupBox_9->setTitle(QString());
        radioButtonSide1Unknown->setText(QString());
        radioButtonSide1Have->setText(QString());
        radioButtonSide1Find->setText(QString());
        groupBox_10->setTitle(QString());
        radioButtonAngle1Unknown->setText(QString());
        radioButtonAngle1Have->setText(QString());
        radioButtonAngle1Find->setText(QString());
        labelPerimeter->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200", 0, QApplication::UnicodeUTF8));
        labelOutAngle3->setText(QApplication::translate("MainWindow", "\320\227\320\276\320\262\320\275\321\226\321\210\320\275\321\226\320\271 \320\272\321\203\321\202 3", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QString());
        radioButtonPerimeterUnknown->setText(QString());
        radioButtonPerimeterHave->setText(QString());
        radioButtonPerimeterFind->setText(QString());
        labelSquare->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\236\320\264\320\270\320\275\320\270\321\206\321\226", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        radioButtonSquareUnknown->setText(QString());
        radioButtonSquareHave->setText(QString());
        radioButtonSquareFind->setText(QString());
        comboBoxAngle1->clear();
        comboBoxAngle1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "degrees", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "radians", 0, QApplication::UnicodeUTF8)
        );
        comboBoxAngle2->clear();
        comboBoxAngle2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "degrees", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "radians", 0, QApplication::UnicodeUTF8)
        );
        comboBoxAngle3->clear();
        comboBoxAngle3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "degrees", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "radians", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSide1->clear();
        comboBoxSide1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "m", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSide2->clear();
        comboBoxSide2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "m", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSide3->clear();
        comboBoxSide3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "m", 0, QApplication::UnicodeUTF8)
        );
        comboBoxOutAngle1->clear();
        comboBoxOutAngle1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "degrees", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "radians", 0, QApplication::UnicodeUTF8)
        );
        comboBoxOutAngle2->clear();
        comboBoxOutAngle2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "degrees", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "radians", 0, QApplication::UnicodeUTF8)
        );
        comboBoxOutAngle3->clear();
        comboBoxOutAngle3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "degrees", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "radians", 0, QApplication::UnicodeUTF8)
        );
        comboBoxPerimeter->clear();
        comboBoxPerimeter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "m", 0, QApplication::UnicodeUTF8)
        );
        comboBoxSquare->clear();
        comboBoxSquare->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "m2", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\207\320\270\321\201\320\273\320\270\321\202\320\270", 0, QApplication::UnicodeUTF8));
        btnDemo->setText(QApplication::translate("MainWindow", "\320\224\320\265\320\274\320\276\320\275\321\201\321\202\321\200\320\260\321\206\321\226\320\271\320\275\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
