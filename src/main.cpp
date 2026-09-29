#include <QApplication>
#include <QDialog>
#include "LoginDialog.h"
#include "MainWindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    LoginDialog loginDialog;
    if (loginDialog.exec() != QDialog::Accepted) {
        return 0;
    }

    MainWindow window(loginDialog.username());
    window.show();
    return app.exec();
}
