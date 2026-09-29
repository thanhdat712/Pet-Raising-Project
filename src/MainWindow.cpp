#include "MainWindow.h"

#include <QPixmap>
#include <QFont>
#include <QMessageBox>
#include <QPainter>

MainWindow::MainWindow(const QString& userName, QWidget* parent)
    : QMainWindow(parent),
      centralWidget(new QWidget(this)),
      layout(new QVBoxLayout(centralWidget)),
      welcomeLabel(new QLabel("Pet Raising", this)),
      petImageLabel(new QLabel(this)),
      petNameLabel(new QLabel("Tên thú cưng: Mèo", this)),
      logoutButton(new QPushButton("Đăng xuất", this)) {
    setCentralWidget(centralWidget);
    setWindowTitle("Pet Raising");
    resize(420, 520);

    QFont titleFont = welcomeLabel->font();
    titleFont.setPointSize(18);
    titleFont.setBold(true);
    welcomeLabel->setFont(titleFont);
    welcomeLabel->setAlignment(Qt::AlignCenter);

    petNameLabel->setAlignment(Qt::AlignCenter);
    petNameLabel->setStyleSheet("font-size: 16px; color: #1f2937;");

    QPixmap petPixmap(200, 200);
    petPixmap.fill(Qt::transparent);
    petImageLabel->setPixmap(petPixmap);
    petImageLabel->setAlignment(Qt::AlignCenter);
    petImageLabel->setStyleSheet("border: 2px solid #d1d5db; border-radius: 10px; background: #f3f4f6;");

    layout->addWidget(welcomeLabel);
    layout->addWidget(petImageLabel);
    layout->addWidget(petNameLabel);
    layout->addWidget(logoutButton);

    connect(logoutButton, &QPushButton::clicked, this, [this, userName]() {
        QMessageBox::information(this, "Đăng xuất", "Xin chào " + userName + ", bạn đã đăng xuất.");
        close();
    });

    updatePetDisplay("Mèo");
    welcomeLabel->setText("Chào mừng, " + userName);
}

void MainWindow::updatePetDisplay(const QString& name) {
    petNameLabel->setText("Tên thú cưng: " + name);

    QPixmap petPixmap(180, 180);
    petPixmap.fill(Qt::white);

    QPainter painter(&petPixmap);
    painter.setBrush(QBrush(Qt::yellow));
    painter.drawEllipse(50, 40, 80, 80);
    painter.setBrush(QBrush(Qt::black));
    painter.drawEllipse(65, 65, 8, 8);
    painter.drawEllipse(105, 65, 8, 8);
    painter.setPen(QPen(Qt::black, 3));
    painter.drawArc(70, 78, 40, 30, 0, 180 * 16);
    painter.end();

    petImageLabel->setPixmap(petPixmap.scaled(180, 180, Qt::KeepAspectRatio));
}
