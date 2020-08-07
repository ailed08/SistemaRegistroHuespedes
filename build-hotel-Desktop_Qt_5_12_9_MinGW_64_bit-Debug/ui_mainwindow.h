/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *btn_ver_habitaciones;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QPushButton *btn_agregar_habitacion;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_12;
    QPushButton *btn_registrar_huesped;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_14;
    QPushButton *btn_ver_registros;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1040, 472);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" border: 3px solid whitesmoke;\n"
" border-radius: 5px;\n"
" background-color: black;\n"
" padding: 5px;\n"
" margin: 5px;\n"
"color: white;\n"
"}\n"
"QPushButton:hover {\n"
"border: 3px solid black;\n"
"border-radius: 5px; \n"
"background-color: white;\n"
"color: black;\n"
"}"));
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 10, 521, 91));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 150, 211, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/room.jpg")));
        label_2->setScaledContents(true);

        verticalLayout->addWidget(label_2);

        btn_ver_habitaciones = new QPushButton(verticalLayoutWidget);
        btn_ver_habitaciones->setObjectName(QString::fromUtf8("btn_ver_habitaciones"));

        verticalLayout->addWidget(btn_ver_habitaciones);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(290, 150, 211, 281));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/adddd.png")));
        label_11->setScaledContents(true);

        verticalLayout_10->addWidget(label_11);

        btn_agregar_habitacion = new QPushButton(verticalLayoutWidget_2);
        btn_agregar_habitacion->setObjectName(QString::fromUtf8("btn_agregar_habitacion"));

        verticalLayout_10->addWidget(btn_agregar_habitacion);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(540, 150, 211, 281));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/registrar.png")));
        label_12->setScaledContents(true);

        verticalLayout_11->addWidget(label_12);

        btn_registrar_huesped = new QPushButton(verticalLayoutWidget_3);
        btn_registrar_huesped->setObjectName(QString::fromUtf8("btn_registrar_huesped"));

        verticalLayout_11->addWidget(btn_registrar_huesped);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(790, 150, 211, 281));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(verticalLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/registro.jpg")));
        label_14->setScaledContents(true);

        verticalLayout_13->addWidget(label_14);

        btn_ver_registros = new QPushButton(verticalLayoutWidget_4);
        btn_ver_registros->setObjectName(QString::fromUtf8("btn_ver_registros"));

        verticalLayout_13->addWidget(btn_ver_registros);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(830, 10, 201, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hotel EPIS", nullptr));
        label->setText(QApplication::translate("MainWindow", "MEN\303\232 PRINCIPAL", nullptr));
        label_2->setText(QString());
        btn_ver_habitaciones->setText(QApplication::translate("MainWindow", "Ver habitaciones", nullptr));
        label_11->setText(QString());
        btn_agregar_habitacion->setText(QApplication::translate("MainWindow", "Crear habitaci\303\263n", nullptr));
        label_12->setText(QString());
        btn_registrar_huesped->setText(QApplication::translate("MainWindow", "Registrar hu\303\251sped", nullptr));
        label_14->setText(QString());
        btn_ver_registros->setText(QApplication::translate("MainWindow", "Ver registros", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
