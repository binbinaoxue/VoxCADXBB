/********************************************************************************
** Form generated from reading UI file 'vStructureEditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VSTRUCTUREEDITOR_H
#define UI_VSTRUCTUREEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StructEdDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pencilButton;
    QPushButton *squareButton;
    QPushButton *ellipseButton;
    QPushButton *layerbackButton;
    QPushButton *layerforwardButton;
    QPushButton *refviewButton;
    QLabel *MatLabel;
    QListWidget *MatList;
    QPushButton *DoneButton;

    void setupUi(QWidget *StructEdDlg)
    {
        if (StructEdDlg->objectName().isEmpty())
            StructEdDlg->setObjectName(QString::fromUtf8("StructEdDlg"));
        StructEdDlg->resize(411, 420);
        horizontalLayout = new QHBoxLayout(StructEdDlg);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pencilButton = new QPushButton(StructEdDlg);
        pencilButton->setObjectName(QString::fromUtf8("pencilButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Icons/Icons/Pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        pencilButton->setIcon(icon);
        pencilButton->setCheckable(true);

        gridLayout->addWidget(pencilButton, 0, 0, 1, 1);

        squareButton = new QPushButton(StructEdDlg);
        squareButton->setObjectName(QString::fromUtf8("squareButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/Icons/Icons/Rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        squareButton->setIcon(icon1);
        squareButton->setCheckable(true);

        gridLayout->addWidget(squareButton, 0, 1, 1, 1);

        ellipseButton = new QPushButton(StructEdDlg);
        ellipseButton->setObjectName(QString::fromUtf8("ellipseButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/Icons/Icons/Ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        ellipseButton->setIcon(icon2);
        ellipseButton->setCheckable(true);

        gridLayout->addWidget(ellipseButton, 0, 2, 1, 1);

        layerbackButton = new QPushButton(StructEdDlg);
        layerbackButton->setObjectName(QString::fromUtf8("layerbackButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/Icons/Icons/LayerBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        layerbackButton->setIcon(icon3);
        layerbackButton->setCheckable(false);

        gridLayout->addWidget(layerbackButton, 1, 0, 1, 1);

        layerforwardButton = new QPushButton(StructEdDlg);
        layerforwardButton->setObjectName(QString::fromUtf8("layerforwardButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/Icons/Icons/LayerForward.png"), QSize(), QIcon::Normal, QIcon::Off);
        layerforwardButton->setIcon(icon4);
        layerforwardButton->setCheckable(false);

        gridLayout->addWidget(layerforwardButton, 1, 1, 1, 1);

        refviewButton = new QPushButton(StructEdDlg);
        refviewButton->setObjectName(QString::fromUtf8("refviewButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/Icons/Icons/Aux_View.png"), QSize(), QIcon::Normal, QIcon::Off);
        refviewButton->setIcon(icon5);
        refviewButton->setCheckable(false);

        gridLayout->addWidget(refviewButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MatLabel = new QLabel(StructEdDlg);
        MatLabel->setObjectName(QString::fromUtf8("MatLabel"));

        verticalLayout->addWidget(MatLabel);

        MatList = new QListWidget(StructEdDlg);
        MatList->setObjectName(QString::fromUtf8("MatList"));

        verticalLayout->addWidget(MatList);

        DoneButton = new QPushButton(StructEdDlg);
        DoneButton->setObjectName(QString::fromUtf8("DoneButton"));

        verticalLayout->addWidget(DoneButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(StructEdDlg);

        QMetaObject::connectSlotsByName(StructEdDlg);
    } // setupUi

    void retranslateUi(QWidget *StructEdDlg)
    {
        StructEdDlg->setWindowTitle(QApplication::translate("StructEdDlg", "vStructureEditor", 0, QApplication::UnicodeUTF8));
        pencilButton->setText(QString());
        squareButton->setText(QString());
        ellipseButton->setText(QString());
        layerbackButton->setText(QString());
        layerforwardButton->setText(QString());
        refviewButton->setText(QString());
        MatLabel->setText(QApplication::translate("StructEdDlg", "Material:", 0, QApplication::UnicodeUTF8));
        DoneButton->setText(QApplication::translate("StructEdDlg", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StructEdDlg: public Ui_StructEdDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VSTRUCTUREEDITOR_H
