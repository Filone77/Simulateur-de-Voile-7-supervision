#include "cpolaire.h"
#include <iostream>

using namespace std ;

CPolaire::CPolaire(QWidget *parent)
    : QWidget{parent}
{

}

void CPolaire::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event) ;

    QPainter paint(this) ;
    dessine (paint) ;

}

void CPolaire::dessine(QPainter &paint)
{

    bateau() ; //dessin du bateau

    int rayon = 400 ;
    paint.save() ;
    paint.setWindow(0, 0, LARGEURVUE, HAUTEURVUE) ;

    traceaxes(paint) ;

    traceangle(rayon) ;

    tracecerclepolaire(rayon) ;

    //polaire possible pour une vitesse de vent de 24.
    for (int a = -deg; a <= 180; a= a+1)
    {

        if (a==-deg+0)
        {
            float rho = 0;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+30)
        {
            float rho = 6.49;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+33)
        {
            float rho = 6.90;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+36)
        {
            float rho = 7.40;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+39)
        {
            float rho = 7.80;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+42)
        {
            float rho = 8.30;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+45)
        {
            float rho = 8.76;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+50)
        {
            float rho = 9.40;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+55)
        {
            float rho = 10.10;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+60)
        {
            float rho = 10.90;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+65)
        {
            float rho = 11.60;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+70)
        {
            float rho = 12.20;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+75)
        {
            float rho = 12.70;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+80)
        {
            float rho = 13;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+85)
        {
            float rho = 13.43;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+90)
        {
            float rho = 13.80;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+95)
        {
            float rho = 14.30;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+100)
        {
            float rho = 14.59;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+105)
        {
            float rho = 14.90;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+110)
        {
            float rho = 15.01;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+115)
        {
            float rho = 15.39;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+120)
        {
            float rho = 15.54;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+125)
        {
            float rho = 15.60;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+130)
        {
            float rho = 15.70;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+135)
        {
            float rho = 15.60;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+140)
        {
            float rho = 15.20;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+145)
        {
            float rho = 14.60;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+150)
        {
            float rho = 13.80;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+155)
        {
            float rho = 12.50;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+160)
        {
            float rho = 10.90;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }
        if (a==-deg+180)
        {
            float rho = 7.10;
            polaireprovisoiredroite(rho,a,rayon,points) ;

        }


    }
    for (int b = deg; b <= 180+180; b= b+1)
    {

        if (b==deg+0)
        {
            float rho = 0;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+30)
        {
            float rho = 6.49;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+33)
        {
            float rho = 6.90;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+36)
        {
            float rho = 7.40;
           polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+39)
        {
            float rho = 7.80;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+42)
        {
            float rho = 8.30;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+45)
        {
            float rho = 8.76;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+50)
        {
            float rho = 9.40;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+55)
        {
            float rho = 10.10;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+60)
        {
            float rho = 10.90;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+65)
        {
            float rho = 11.60;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+70)
        {
            float rho = 12.20;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+75)
        {
            float rho = 12.70;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+80)
        {
            float rho = 13;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+85)
        {
            float rho = 13.43;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+90)
        {
            float rho = 13.80;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+95)
        {
            float rho = 14.30;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+100)
        {
            float rho = 14.59;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+105)
        {
            float rho = 14.90;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+110)
        {
            float rho = 15.01;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+115)
        {
            float rho = 15.39;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+120)
        {
            float rho = 15.54;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+125)
        {
            float rho = 15.60;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+130)
        {
            float rho = 15.70;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+135)
        {
            float rho = 15.60;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+140)
        {
            float rho = 15.20;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+145)
        {
            float rho = 14.60;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+150)
        {
            float rho = 13.80;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+155)
        {
            float rho = 12.50;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+160)
        {
            float rho = 10.90;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }
        if (b==deg+180)
        {
            float rho = 7.10;
            polaireprovisoiregauche(rho,b,rayon,points2) ;
        }


    }


    tracer(points) ;
    points.clear() ;

    tracer(points2) ;
    points2.clear() ;

}

void CPolaire::traceaxes(QPainter &paint)
{
    /*paint.setPen( Qt::DotLine) ;

    int center_width = LARGEURVUE / 2 ;
    int center_height = HAUTEURVUE / 2 ;

    paint.setPen(Qt::red) ;
    paint.drawLine(0,center_height,LARGEURVUE, center_height) ;
    paint.setPen(Qt::blue) ;
    paint.drawLine(center_width ,0,center_width, HAUTEURVUE) ;

    QPainter centre(this) ;

    centre.drawPoint(QPoint(width()/2, height()/2)) ;
    centre.drawText(QPoint(width()/2, height()/2), "O") ;*/
}

void CPolaire::traceangle(int rayon)
{
    int a ;

    for ( a = 90-deg ; a <= 180+90-deg ; a = a+10)                          //a commence a 90° pour que l'angle commence a 0 de l'affichage
    {                                                                   // donc notre angle commence vers le haut // partie du code qui genere le demi cercle à droite
                                                                        // autrement le 0 se trouve à droite et le cercle est  dans  le sens antihoraire
        QPainter angle(this) ;
        QLineF unangle ;

        unangle.setP1(QPoint(width()/2, height()/2)) ;
        unangle.setAngle(a+deg+deg) ;
        unangle.setLength(-rayon) ;                                     //-rayon pour que les droites de chaque angle s'affiche a droite

        int x = -(qCos(qDegreesToRadians(a)) )  * rayon ;               //pour que les valeurs des angles s'affichent à droite
        int y = (qSin(qDegreesToRadians(a)) ) * rayon ;

        angle.drawPoint(QPoint((width()/2)+x, (height()/2)-y) ) ;       // Tracé des point aux différents angles

        angle.setPen(QPen(Qt::black,2)) ;
        angle.drawLine(QPoint(((width()/2)+x)-5, ((height()/2)-y)+5), QPoint(((width()/2)+x)+5, ((height()/2)-y)-5)) ; //Ces deux ligne permettent de tracer une croix pour mettre
        angle.drawLine(QPoint(((width()/2)+x)-5, ((height()/2)-y)-5), QPoint(((width()/2)+x)+5, ((height()/2)-y)+5)) ; //en evidence les points.
        angle.setPen(Qt::red) ;
        QString s ;
        s.setNum(a -90+deg) ;
        angle.drawText(QPoint(((width()/2)+x)-10, ((height()/2)-y)-10), s) ;


        angle.setPen(Qt::DashLine) ;
        angle.drawLine(unangle) ;

        cout <<"deg =" << deg << endl ;
    }

    for ( a = 90+deg ; a <= 170+90+deg ; a = a+10) //a commence a 90° pour que l'angle commence a 0 de l'affichage
    {                                       // donc notre angle commence ver le haut
        QPainter angle(this) ;
        QLineF unangle ;

        unangle.setP1(QPoint(width()/2, height()/2)) ;
        unangle.setAngle(a) ;
        unangle.setLength(rayon) ;

        int x = (qCos(qDegreesToRadians(a)) )  * rayon ;
        int y = (qSin(qDegreesToRadians(a)) ) * rayon ;

        angle.drawPoint(QPoint((width()/2)+x, (height()/2)-y) ) ; // Tracé des point aux différents angles

        angle.setPen(QPen(Qt::black,2)) ;
        angle.drawLine(QPoint(((width()/2)+x)-5, ((height()/2)-y)+5), QPoint(((width()/2)+x)+5, ((height()/2)-y)-5)) ; //Ces deux ligne permettent de tracer une croix pour mettre
        angle.drawLine(QPoint(((width()/2)+x)-5, ((height()/2)-y)-5), QPoint(((width()/2)+x)+5, ((height()/2)-y)+5)) ; //en evidence les points.
        angle.setPen(Qt::red) ;
        QString s ;
        s.setNum(-(a -90-deg)) ;
        angle.drawText(QPoint(((width()/2)+x)-10, ((height()/2)-y)-10), s) ;


        angle.setPen(Qt::DashLine) ;
        angle.drawLine(unangle) ;

        cout <<"deg =" << deg << endl ;
    }


}


void CPolaire::tracecerclepolaire( int rayon)
{
    for (int y = -rayon; y != 0; y = y +20 ) //tracer des polaire tout les +20 (les différent cercle de différent rayon)
    {
        QPainter vitessecercle (this) ;

        QRect v(0,0,(y*2), (y*2)); //Donc cercle de rayon 400 pixels
        v.moveCenter(QPoint(width()/2,height()/2));

        vitessecercle.setPen(Qt::DashLine) ;
        vitessecercle.drawEllipse(v);
        vitessecercle.drawPoint(QPoint((width()/2), (height()/2) + y )) ;
        QString t ;
        t.setNum(-y/20) ;//permet d'afficher de 1 à 20
        vitessecercle.drawText(QPoint((width()/2), (height()/2) + y ), t) ;

    }

}


void CPolaire::polaireprovisoiredroite(float rho,int a, int rayon, QList<QPoint>& pts)
{

    QPainter angle(this) ;
    QLineF unangle ;

    a = a+90;
    unangle.setP1(QPoint(width()/2, height()/2)) ;
    unangle.setAngle(a) ;
    unangle.setLength(-rayon) ;

    int x1 = (-(qCos(qDegreesToRadians(a)) )  * rho)*20 ; //on fait *20 car dans la méthode qui trace les cerlce de polaire on divise par 20. c'est une sorte d'echelle.
    int y1 = ((qSin(qDegreesToRadians(a)) ) * rho)*20 ;


        QPainter polaire (this) ;

        polaire.setPen(QPen(Qt::magenta, 2) ) ;
        polaire.drawPoint(QPoint((width()/2)+x1, (height()/2)-y1) ) ;
        polaire.drawLine(QPoint(((width()/2)+x1)-5, ((height()/2)-y1)+5), QPoint(((width()/2)+x1)+5, ((height()/2)-y1)-5)) ; //Ces deux ligne permettent de tracer une croix à la place d'un
        polaire.drawLine(QPoint(((width()/2)+x1)-5, ((height()/2)-y1)-5), QPoint(((width()/2)+x1)+5, ((height()/2)-y1)+5)) ;
        polaire.setPen(Qt::magenta) ;

        if ( a == 90)
        {
            QPainter rect(this) ;
            QRect cercle(((width()/2)+x1+18),((height()/2)-y1),40,40) ;

            rect.setPen(QPen(Qt::darkBlue, 4)) ;
            rect.setBrush(Qt::white) ;
            rect.drawEllipse(cercle) ;


            QString rhoo ;
            rhoo.setNum(rho) ;

            rect.drawText(cercle,Qt::AlignCenter, rhoo) ;

        }

        pts << QPoint((width()/2)+x1, (height()/2)-y1) ;

         int v = pts.count() ;
         cout << "il  y a "  << v <<"points"<< endl ;

         cout<< "ptPrec x = "<<x1 << endl ;
         cout<< "ptPrec y = "<< y1 << endl ;
         cout << "angle du point = " << a << endl ;


}

void CPolaire::polaireprovisoiregauche(float rho,int a, int rayon, QList<QPoint>& pts)
{
    QPainter angle(this) ;
    QLineF unangle ;

    a = a+90;
    unangle.setP1(QPoint(width()/2, height()/2)) ;
    unangle.setAngle(a) ;
    unangle.setLength(rayon) ;

    int x1 = (qCos(qDegreesToRadians(a))  * rho)*20 ; //on fait *20 car dans la méthode qui trace les cerlce de polaire on divise par 20. c'est une sorte d'echelle.
    int y1 = (qSin(qDegreesToRadians(a))  * rho)*20 ;


        QPainter polaire (this) ;

        polaire.setPen(QPen(Qt::magenta, 2) ) ;
        polaire.drawPoint(QPoint((width()/2)+x1, (height()/2)-y1) ) ;
        polaire.drawLine(QPoint(((width()/2)+x1)-5, ((height()/2)-y1)+5), QPoint(((width()/2)+x1)+5, ((height()/2)-y1)-5)) ; //Ces deux ligne permettent de tracer une croix à la place d'un
        polaire.drawLine(QPoint(((width()/2)+x1)-5, ((height()/2)-y1)-5), QPoint(((width()/2)+x1)+5, ((height()/2)-y1)+5)) ;
        polaire.setPen(Qt::magenta) ;

        pts << QPoint((width()/2)+x1, (height()/2)-y1) ;

         int v = pts.count() ;
         cout << "il  y a "  << v <<"points"<< endl ;

         cout<< "ptPrec x = "<<x1 << endl ;
         cout<< "ptPrec y = "<< y1 << endl ;
         cout << "angle du point = " << a << endl ;
}

void CPolaire::tracer(QList<QPoint> pts)
{
    QPainter paint(this) ;

    paint.setPen(QPen(Qt::darkGreen, 2)) ;

    int v = pts.count() -2 ;
    for(int i = 0 ; i <= v ; i++)
    {
        QPoint ptPrec = pts[i] ;
        QPoint ptAct = pts[i+1] ;

        paint.drawLine(ptPrec, ptAct) ;


    }
}

void CPolaire::bateau()
{

    QPainter bat(this) ;
    QRect bateau ((width()/2)-50,(height()/2)-60,100,120) ;

    bat.setPen(QPen(Qt::red, 3)) ;
    bat.setBrush(Qt::white) ;
    bat.drawRoundedRect(bateau,10,5) ;

    QPainter triangle(this);

    triangle.setPen(QPen(Qt::red,3)) ;
    triangle.setBrush(Qt::white);
    QPointF *pointss = new QPointF[3];
    pointss[0] = QPointF((width()/2)+(100/2)-50,400-60);
    pointss[1] = QPointF((width()/2)-50,(height()/2)+5-60);
    pointss[2] = QPointF((width()/2)+100-50,(height()/2)+5-60);
    triangle.drawPolygon(pointss,3);

    QPainter car(this) ;
    QRect caree ((width()/2)+5-50,(height()/2)-60,91,50) ;

    car.setPen(QPen(Qt::white, 2)) ;
    car.setBrush(Qt::white) ;
    car.drawRoundedRect(caree,10,5) ;


}



