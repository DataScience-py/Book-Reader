#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);    
    QWidget window;
    window.resize(960, 720);
    window.setWindowTitle("Windows-Reader");
    window.show();
    
    return app.exec();
}

