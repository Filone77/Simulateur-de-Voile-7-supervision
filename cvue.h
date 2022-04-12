#ifndef CVUE_H
#define CVUE_H

#include "ui_cvue.h"
#include "cpolaire.h"

#include <QWidget>


//class CPolaire ;

class CVue : public QWidget, private Ui::CVue
{
    Q_OBJECT
private:
    CPolaire* polaire ;

public:
    CVue(QWidget *parent = nullptr);
    ~CVue();
    void resizeEvent(QResizeEvent* event) ;

public slots:
    void slide(int) ;

};
#endif // CVUE_H
