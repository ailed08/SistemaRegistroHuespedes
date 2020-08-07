/********************************************************************************
** Form generated from reading UI file 'registrar_huesped.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRAR_HUESPED_H
#define UI_REGISTRAR_HUESPED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrar_huesped
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *txtdni;
    QLabel *label_3;
    QTextEdit *txtapellidos;
    QLabel *label_4;
    QTextEdit *txtnombres;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QTextEdit *txtmonto;
    QLabel *label_6;
    QTextEdit *txthabitacion;
    QLabel *label_7;
    QPushButton *btnseleccionar;
    QPushButton *btnregistrar;
    QPushButton *btncancelar;
    QLabel *error1;
    QLabel *error2;
    QLabel *error3;
    QLabel *error4;

    void setupUi(QWidget *registrar_huesped)
    {
        if (registrar_huesped->objectName().isEmpty())
            registrar_huesped->setObjectName(QString::fromUtf8("registrar_huesped"));
        registrar_huesped->resize(521, 722);
        registrar_huesped->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(registrar_huesped);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 351, 61));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label_2 = new QLabel(registrar_huesped);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 101, 31));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtdni = new QTextEdit(registrar_huesped);
        txtdni->setObjectName(QString::fromUtf8("txtdni"));
        txtdni->setGeometry(QRect(190, 80, 171, 31));
        label_3 = new QLabel(registrar_huesped);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 120, 101, 31));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtapellidos = new QTextEdit(registrar_huesped);
        txtapellidos->setObjectName(QString::fromUtf8("txtapellidos"));
        txtapellidos->setGeometry(QRect(190, 120, 171, 31));
        label_4 = new QLabel(registrar_huesped);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 160, 101, 31));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtnombres = new QTextEdit(registrar_huesped);
        txtnombres->setObjectName(QString::fromUtf8("txtnombres"));
        txtnombres->setGeometry(QRect(190, 160, 171, 31));
        tableWidget = new QTableWidget(registrar_huesped);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 300, 461, 331));
        label_5 = new QLabel(registrar_huesped);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 200, 101, 31));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtmonto = new QTextEdit(registrar_huesped);
        txtmonto->setObjectName(QString::fromUtf8("txtmonto"));
        txtmonto->setEnabled(false);
        txtmonto->setGeometry(QRect(190, 200, 171, 31));
        label_6 = new QLabel(registrar_huesped);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 280, 191, 20));
        txthabitacion = new QTextEdit(registrar_huesped);
        txthabitacion->setObjectName(QString::fromUtf8("txthabitacion"));
        txthabitacion->setEnabled(false);
        txthabitacion->setGeometry(QRect(190, 240, 171, 31));
        label_7 = new QLabel(registrar_huesped);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 240, 101, 31));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnseleccionar = new QPushButton(registrar_huesped);
        btnseleccionar->setObjectName(QString::fromUtf8("btnseleccionar"));
        btnseleccionar->setGeometry(QRect(20, 650, 161, 51));
        btnregistrar = new QPushButton(registrar_huesped);
        btnregistrar->setObjectName(QString::fromUtf8("btnregistrar"));
        btnregistrar->setGeometry(QRect(180, 650, 161, 51));
        btncancelar = new QPushButton(registrar_huesped);
        btncancelar->setObjectName(QString::fromUtf8("btncancelar"));
        btncancelar->setGeometry(QRect(340, 650, 161, 51));
        error1 = new QLabel(registrar_huesped);
        error1->setObjectName(QString::fromUtf8("error1"));
        error1->setGeometry(QRect(370, 80, 141, 31));
        error1->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        error2 = new QLabel(registrar_huesped);
        error2->setObjectName(QString::fromUtf8("error2"));
        error2->setGeometry(QRect(370, 120, 141, 31));
        error2->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        error3 = new QLabel(registrar_huesped);
        error3->setObjectName(QString::fromUtf8("error3"));
        error3->setGeometry(QRect(370, 160, 141, 31));
        error3->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        error4 = new QLabel(registrar_huesped);
        error4->setObjectName(QString::fromUtf8("error4"));
        error4->setGeometry(QRect(380, 200, 81, 61));
        error4->setStyleSheet(QString::fromUtf8("color: red;\n"
""));

        retranslateUi(registrar_huesped);

        QMetaObject::connectSlotsByName(registrar_huesped);
    } // setupUi

    void retranslateUi(QWidget *registrar_huesped)
    {
        registrar_huesped->setWindowTitle(QApplication::translate("registrar_huesped", "Form", nullptr));
        label->setText(QApplication::translate("registrar_huesped", "Registro de hu\303\251sped", nullptr));
        label_2->setText(QApplication::translate("registrar_huesped", "Dni:", nullptr));
        label_3->setText(QApplication::translate("registrar_huesped", "Apellidos:", nullptr));
        label_4->setText(QApplication::translate("registrar_huesped", "Nombres:", nullptr));
        label_5->setText(QApplication::translate("registrar_huesped", "Monto:", nullptr));
        label_6->setText(QApplication::translate("registrar_huesped", "Habitaciones disponibles", nullptr));
        label_7->setText(QApplication::translate("registrar_huesped", "N\302\260 Habitaci\303\263n", nullptr));
        btnseleccionar->setText(QApplication::translate("registrar_huesped", "Seleccionar Habitaci\303\263n", nullptr));
        btnregistrar->setText(QApplication::translate("registrar_huesped", "Registrar", nullptr));
        btncancelar->setText(QApplication::translate("registrar_huesped", "Cancelar", nullptr));
        error1->setText(QString());
        error2->setText(QString());
        error3->setText(QString());
        error4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registrar_huesped: public Ui_registrar_huesped {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAR_HUESPED_H
