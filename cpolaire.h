#ifndef CPOLAIRE_H
#define CPOLAIRE_H

#define LARGEURVUE 1000
#define HAUTEURVUE 1000
#define LX(X)      ( (int)( (double) LARGEURVUE / width() * (X) ) )
#define LY(Y)      ( (int)( (double) HAUTEURVUE / height() * (Y) ) )

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QRect>
#include <iostream>

using namespace std ;

class CPolaire : public QWidget
{
    Q_OBJECT
public:
    explicit CPolaire(QWidget *parent = nullptr);

    void dessine(QPainter &paint) ;

    void paintEvent(QPaintEvent* event) ;

    void  traceangle(int rayon) ; //methode qui trace les différents angles du vent

    void traceaxes(QPainter &paint) ; //methode qui trace les axes x et y du graphique

    void tracecerclepolaire(int rayon) ;    //methode qui trace les cercles de différentes polaire.

    void polaireprovisoiredroite(float rho, int a,int rayon, QList<QPoint>& pts) ;
    void polaireprovisoiregauche(float rho, int a,int rayon, QList<QPoint>& pts) ;

    int deg = 0 ;

    QList<QPoint> points ;
    QList<QPoint> points2 ;

    void tracer (QList<QPoint> pts) ;

    void bateau() ;

signals:

};

#endif // CPOLAIRE_H
