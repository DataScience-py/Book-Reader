#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    QWidget winodw;
    winodw.resize(200, 100);
    winodw.setWindowTitle("Hello World");
    winodw.show();
    
    return app.exec();
}
