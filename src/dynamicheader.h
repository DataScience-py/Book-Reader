// dynamicheader.h
#ifndef DYNAMICHEADER_H
#define DYNAMICHEADER_H

#include <QFrame>
#include <QColor>
#include <QPalette>
#include <QSizePolicy>

class DynamicHeader : public QFrame
{
    Q_OBJECT // Макрос, необходимый для системы метаобъектов Qt

public:
    explicit DynamicHeader(const QColor &color, QWidget *parent = nullptr);
};

#endif // DYNAMICHEADER_H