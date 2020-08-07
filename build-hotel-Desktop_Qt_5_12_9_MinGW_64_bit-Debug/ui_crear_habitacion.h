/********************************************************************************
** Form generated from reading UI file 'crear_habitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAR_HABITACION_H
#define UI_CREAR_HABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crear_habitacion
{
public:
    QLabel *lblerror;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *numero;
    QComboBox *comboBox;
    QPushButton *btn_crear_h;
    QPushButton *btn_c_h;

    void setupUi(QWidget *crear_habitacion)
    {
        if (crear_habitacion->objectName().isEmpty())
            crear_habitacion->setObjectName(QString::fromUtf8("crear_habitacion"));
        crear_habitacion->resize(430, 191);
        crear_habitacion->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lblerror = new QLabel(crear_habitacion);
        lblerror->setObjectName(QString::fromUtf8("lblerror"));
        lblerror->setGeometry(QRect(90, 100, 261, 20));
        lblerror->setStyleSheet(QString::fromUtf8("color : red;"));
        lblerror->setAlignment(Qt::AlignCenter);
        label = new QLabel(crear_habitacion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 25, 141, 21));
        label_2 = new QLabel(crear_habitacion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 65, 121, 21));
        numero = new QTextEdit(crear_habitacion);
        numero->setObjectName(QString::fromUtf8("numero"));
        numero->setGeometry(QRect(220, 20, 111, 31));
        comboBox = new QComboBox(crear_habitacion);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 60, 111, 31));
        btn_crear_h = new QPushButton(crear_habitacion);
        btn_crear_h->setObjectName(QString::fromUtf8("btn_crear_h"));
        btn_crear_h->setGeometry(QRect(102, 130, 111, 41));
        btn_c_h = new QPushButton(crear_habitacion);
        btn_c_h->setObjectName(QString::fromUtf8("btn_c_h"));
        btn_c_h->setGeometry(QRect(230, 130, 111, 41));

        retranslateUi(crear_habitacion);

        QMetaObject::connectSlotsByName(crear_habitacion);
    } // setupUi

    void retranslateUi(QWidget *crear_habitacion)
    {
        crear_habitacion->setWindowTitle(QApplication::translate("crear_habitacion", "CREAR UNA HABITACI\303\223N", nullptr));
        lblerror->setText(QString());
        label->setText(QApplication::translate("crear_habitacion", "N\303\272mero de habitaci\303\263n:", nullptr));
        label_2->setText(QApplication::translate("crear_habitacion", "Tipo de habitaci\303\263n:", nullptr));
        btn_crear_h->setText(QApplication::translate("crear_habitacion", "Crear", nullptr));
        btn_c_h->setText(QApplication::translate("crear_habitacion", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crear_habitacion: public Ui_crear_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAR_HABITACION_H
