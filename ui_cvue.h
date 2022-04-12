/********************************************************************************
** Form generated from reading UI file 'cvue.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVUE_H
#define UI_CVUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CVue
{
public:
    QGridLayout *gridLayout;
    QFrame *frmPolaire;
    QSlider *slider;

    void setupUi(QWidget *CVue)
    {
        if (CVue->objectName().isEmpty())
            CVue->setObjectName(QString::fromUtf8("CVue"));
        CVue->resize(800, 600);
        gridLayout = new QGridLayout(CVue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frmPolaire = new QFrame(CVue);
        frmPolaire->setObjectName(QString::fromUtf8("frmPolaire"));
        frmPolaire->setFrameShape(QFrame::StyledPanel);
        frmPolaire->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frmPolaire, 0, 0, 1, 1);

        slider = new QSlider(CVue);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMaximum(180);
        slider->setSingleStep(1);
        slider->setOrientation(Qt::Horizontal);
        slider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(slider, 1, 0, 1, 1);


        retranslateUi(CVue);

        QMetaObject::connectSlotsByName(CVue);
    } // setupUi

    void retranslateUi(QWidget *CVue)
    {
        CVue->setWindowTitle(QCoreApplication::translate("CVue", "CVue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CVue: public Ui_CVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVUE_H
