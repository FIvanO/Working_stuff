#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "ballobj.h"
#include "calculate.h"
#include <QTimer>
#include <QFile>
#include <QSignalSpy>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setBallCenter();
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_Start_clicked();
	void rePaint();
    void on_Stop_clicked();
    void on_SpeedUp_clicked();
    void on_SpeedDown_clicked();

private:
    void closeEvent (QCloseEvent *event);
    QSignalSpy *m_spy;
    Ui::MainWindow *ui;
    QThread thread_1;
    QThread thread_2;
    BallObj ball;
    Calculate calc;
    QTimer timer;
	DataBase myDb;
};

#endif // MAINWINDOW_H
