#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadUrl();
    void goBack();
    void goForward();
    void reload();

private:
    Ui::MainWindow *ui;
    QWebEngineView *webView;
    QLineEdit *urlBar;
    QPushButton *backButton;
    QPushButton *forwardButton;
    QPushButton *reloadButton;
};
#endif // MAINWINDOW_H 