#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QCheckBox;
class QLabel;
class MainWindow : public QMainWindow
{
    Q_OBJECT

    typedef union	u_bldouble
    {
        long double	val;
        struct		s_double
        {
            unsigned long	man:64;
            unsigned long	exp:15;
            unsigned long	sign:1;
        }			bldbl;
    }				t_bldouble;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onCbClick(bool state);
    void onTextEdited(const QString &text);
private:
    Ui::MainWindow *ui;
    std::vector< QCheckBox* > exp;
    std::vector< QCheckBox* > man;
    std::vector< QLabel* > exp2;
    void calcExp(long double val);
    long double calcDoubleFromBits();
};
#endif // MAINWINDOW_H
