// main.cpp
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include "dynamicheader.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.setWindowTitle("READER");
    mainWindow.setMinimumSize(920, 760);

    QWidget *centralWidget = new QWidget(&mainWindow);
    mainWindow.setCentralWidget(centralWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    QHBoxLayout *headerLayout = new QHBoxLayout();
    headerLayout->setContentsMargins(0, 0, 0, 0);
    headerLayout->setSpacing(0);

    DynamicHeader *header1 = new DynamicHeader(Qt::red);

    headerLayout->addWidget(header1, 1);

    mainLayout->addLayout(headerLayout);
    mainLayout->addStretch(1);

    mainWindow.show();

    return app.exec();
}
