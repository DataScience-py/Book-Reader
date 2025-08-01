// dynamicheader.cpp
#include "dynamicheader.h"

DynamicHeader::DynamicHeader(const QColor &color, QWidget *parent)
    : QFrame(parent)
{
    setMinimumHeight(50);
    setMinimumWidth(50);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    QPalette pal = palette();
    pal.setColor(QPalette::Window, color);
    setAutoFillBackground(true);
    setPalette(pal);
}