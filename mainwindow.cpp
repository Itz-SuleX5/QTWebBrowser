#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create widgets
    webView = new QWebEngineView(this);
    urlBar = new QLineEdit(this);
    backButton = new QPushButton("←", this);
    forwardButton = new QPushButton("→", this);
    reloadButton = new QPushButton("↻", this);

    // Create layouts
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);
    QHBoxLayout *toolbarLayout = new QHBoxLayout();

    // Add widgets to toolbar layout
    toolbarLayout->addWidget(backButton);
    toolbarLayout->addWidget(forwardButton);
    toolbarLayout->addWidget(reloadButton);
    toolbarLayout->addWidget(urlBar);

    // Add layouts to main layout
    mainLayout->addLayout(toolbarLayout);
    mainLayout->addWidget(webView);

    // Set central widget
    setCentralWidget(centralWidget);

    // Connect signals and slots
    connect(urlBar, &QLineEdit::returnPressed, this, &MainWindow::loadUrl);
    connect(backButton, &QPushButton::clicked, this, &MainWindow::goBack);
    connect(forwardButton, &QPushButton::clicked, this, &MainWindow::goForward);
    connect(reloadButton, &QPushButton::clicked, this, &MainWindow::reload);
    connect(webView, &QWebEngineView::urlChanged, [this](const QUrl &url) {
        urlBar->setText(url.toString());
    });

    // Load initial page
    webView->setUrl(QUrl("https://www.google.com"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadUrl()
{
    QString url = urlBar->text();
    if (!url.startsWith("http://") && !url.startsWith("https://")) {
        url = "https://" + url;
    }
    webView->setUrl(QUrl(url));
}

void MainWindow::goBack()
{
    webView->back();
}

void MainWindow::goForward()
{
    webView->forward();
}

void MainWindow::reload()
{
    webView->reload();
} 