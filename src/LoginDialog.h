#pragma once

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class LoginDialog : public QDialog {
    Q_OBJECT

public:
    explicit LoginDialog(QWidget* parent = nullptr);

    QString username() const;

private:
    QLabel* titleLabel;
    QLineEdit* usernameInput;
    QPushButton* loginButton;
    QVBoxLayout* layout;
};
