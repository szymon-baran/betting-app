#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <thread>
#include "User/user.h"
#include "Team/team.h"
#include <list>
#include <QTcpSocket>
#include <QDebug>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void newMessage(const QByteArray &ba);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void SetTeamsForMatch();

    void SetTeamsRate(QString homeTeam, QString awayTeam);

    void ResetAfterBet();

    QString GetSelectedTeamName();

    void on_pushButton_clicked();

    void on_betHomeButton_clicked();

    void on_betDrawButton_clicked();

    void on_betAwayButton_clicked();

    void on_returnToBetPageButton_clicked();

    void on_profileButton_clicked();

    void OnConnected();

    void OnReadyRead();

    void SendScoreRequest();

private:
    Ui::MainWindow *ui;
    QTcpSocket socket;

};
#endif // MAINWINDOW_H
