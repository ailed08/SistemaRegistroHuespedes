/********************************************************************************
** Form generated from reading UI file 'registros.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROS_H
#define UI_REGISTROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registros
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *btncobrar;
    QPushButton *btnexit;

    void setupUi(QWidget *registros)
    {
        if (registros->objectName().isEmpty())
            registros->setObjectName(QString::fromUtf8("registros"));
        registros->resize(1061, 666);
        registros->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(registros);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 501, 41));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        tableWidget = new QTableWidget(registros);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 130, 1001, 431));
        label_2 = new QLabel(registros);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 106, 261, 20));
        btncobrar = new QPushButton(registros);
        btncobrar->setObjectName(QString::fromUtf8("btncobrar"));
        btncobrar->setGeometry(QRect(260, 580, 251, 51));
        btnexit = new QPushButton(registros);
        btnexit->setObjectName(QString::fromUtf8("btnexit"));
        btnexit->setGeometry(QRect(550, 580, 251, 51));

        retranslateUi(registros);

        QMetaObject::connectSlotsByName(registros);
    } // setupUi

    void retranslateUi(QWidget *registros)
    {
        registros->setWindowTitle(QApplication::translate("registros", "Form", nullptr));
        label->setText(QApplication::translate("registros", "Lista de hu\303\251spedes registrados", nullptr));
        label_2->setText(QApplication::translate("registros", "Seleccione un registro para realizar el cobro", nullptr));
        btncobrar->setText(QApplication::translate("registros", "Cobrar", nullptr));
        btnexit->setText(QApplication::translate("registros", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registros: public Ui_registros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROS_H
