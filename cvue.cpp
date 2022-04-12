#include "cvue.h"
#include <iostream>
using namespace std ;

CVue::CVue(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    setWindowTitle("~POLAIRE~") ;

    polaire = new CPolaire(frmPolaire);


    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(slide(int))) ;
    //QPixmap pixmap("/home/harishan/2021-2022/Projet/bateau.png");
    //lab->setPixmap(pixmap);


}

CVue::~CVue()
{
}

void CVue::resizeEvent(QResizeEvent* event)
{
    polaire->resize( frmPolaire->width(), frmPolaire->height() ) ;
}

void CVue::slide(int n)     //recuperer la valeur du slider
{
    cout << n << endl ;
    polaire->deg = n ;
    update() ;
}







