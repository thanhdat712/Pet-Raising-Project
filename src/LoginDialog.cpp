#include "LoginDialog.h"

#include <QFormLayout>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget* parent)
    : QDialog(parent),
      titleLabel(new QLabel("Đăng nhập Pet Raising", this)),
      usernameInput(new QLineEdit(this)),
      loginButton(new QPushButton("Đăng nhập", this)),
      layout(new QVBoxLayout(this)) {
    setWindowTitle("Đăng nhập");
    resize(330, 180);

    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 18px; font-weight: bold;");

    usernameInput->setPlaceholderText("Nhập tên người dùng");

    layout->addWidget(titleLabel);
    layout->addWidget(usernameInput);
    layout->addWidget(loginButton);

    connect(loginButton, &QPushButton::clicked, this, [this]() {
        const QString name = usernameInput->text().trimmed();
        if (name.isEmpty()) {
            QMessageBox::warning(this, "Lỗi", "Vui lòng nhập tên người dùng.");
            return;
        }
        accept();
    });
}

QString LoginDialog::username() const {
    return usernameInput->text().trimmed();
}
