#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "equipement.h"
#include <QMainWindow>
#include"fournisseur.h"
#include "smtp.h"
#include <QtWidgets/QMessageBox>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_ajouter_2_clicked();
    void on_pb_supprimer_2_clicked();
    void refresh();
    void on_comboBox_3_activated(const QString &arg1);

    void on_comboBox_2_activated(const QString &arg1);

    void on_comboBox_4_activated(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_16_textChanged(const QString &arg1);

    void on_lineEdit_20_textChanged(const QString &arg1);

    void on_checkBox_stateChanged(int arg1);
    void sendMail();
    void mailSent(QString);


private:
    Ui::MainWindow *ui;
    equipement tmprdv;
    fournisseur tmprdv1;
    int etat;
    QString valeur;


};

#endif // MAINWINDOW_H
