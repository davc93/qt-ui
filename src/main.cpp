#include <QApplication>
// #include <qt6>
#include <QPushButton>
// #include <iosstr>




int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    QPushButton button("Hello, Qt!");
    
    button.show();
    
    return app.exec();
}
