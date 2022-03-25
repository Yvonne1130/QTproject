#ifndef MYLABLE_H
#define MYLABLE_H

#include <QLabel>

class myLable : public QLabel
{
    Q_OBJECT
public:
    explicit myLable(QWidget *parent = nullptr);

    void enterEvent(QEvent *event) ;
    void leaveEvent(QEvent *event) ;

    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);


signals:

};

#endif // MYLABLE_H
