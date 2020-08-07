/********************************************************************************
** Form generated from reading UI file 'habitaciones.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HABITACIONES_H
#define UI_HABITACIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_habitaciones
{
public:
    QLabel *label;
    QPushButton *btn_editar_habitacion;
    QTableWidget *tableWidget;

    void setupUi(QWidget *habitaciones)
    {
        if (habitaciones->objectName().isEmpty())
            habitaciones->setObjectName(QString::fromUtf8("habitaciones"));
        habitaciones->resize(792, 631);
        habitaciones->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(habitaciones);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 501, 71));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        btn_editar_habitacion = new QPushButton(habitaciones);
        btn_editar_habitacion->setObjectName(QString::fromUtf8("btn_editar_habitacion"));
        btn_editar_habitacion->setGeometry(QRect(550, 30, 211, 51));
        tableWidget = new QTableWidget(habitaciones);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(30, 110, 720, 480));
        tableWidget->setTextElideMode(Qt::ElideRight);

        retranslateUi(habitaciones);

        QMetaObject::connectSlotsByName(habitaciones);
    } // setupUi

    void retranslateUi(QWidget *habitaciones)
    {
        habitaciones->setWindowTitle(QApplication::translate("habitaciones", "Form", nullptr));
        label->setText(QApplication::translate("habitaciones", "Habitaciones", nullptr));
        btn_editar_habitacion->setText(QApplication::translate("habitaciones", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class habitaciones: public Ui_habitaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HABITACIONES_H
