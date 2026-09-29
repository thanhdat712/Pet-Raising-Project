#pragma once

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(const QString& userName = "Người dùng", QWidget* parent = nullptr);

private:
    QWidget* centralWidget;
    QVBoxLayout* layout;
    QLabel* welcomeLabel;
    QLabel* petImageLabel;
    QLabel* petNameLabel;
    QPushButton* logoutButton;

    void updatePetDisplay(const QString& name);
};
