#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->sign, SIGNAL(clicked(bool)), this, SLOT(onCbClick(bool)));

    exp.push_back(ui->e_0);
    exp.push_back(ui->e_1);
    exp.push_back(ui->e_2);
    exp.push_back(ui->e_3);
    exp.push_back(ui->e_4);
    exp.push_back(ui->e_5);
    exp.push_back(ui->e_6);
    exp.push_back(ui->e_7);
    exp.push_back(ui->e_8);
    exp.push_back(ui->e_9);
    exp.push_back(ui->e_10);
    exp.push_back(ui->e_11);
    exp.push_back(ui->e_12);
    exp.push_back(ui->e_13);
    exp.push_back(ui->e_14);
    unsigned long exp_size = exp.size();
    for (ulong i = 0; i < exp_size; i++) {
        connect(exp[i], SIGNAL(clicked(bool)), this, SLOT(onCbClick(bool)));
    }

    man.push_back(ui->m_0);
    man.push_back(ui->m_1);
    man.push_back(ui->m_2);
    man.push_back(ui->m_3);
    man.push_back(ui->m_4);
    man.push_back(ui->m_5);
    man.push_back(ui->m_6);
    man.push_back(ui->m_7);
    man.push_back(ui->m_8);
    man.push_back(ui->m_9);
    man.push_back(ui->m_10);
    man.push_back(ui->m_11);
    man.push_back(ui->m_12);
    man.push_back(ui->m_13);
    man.push_back(ui->m_14);
    man.push_back(ui->m_15);
    man.push_back(ui->m_16);
    man.push_back(ui->m_17);
    man.push_back(ui->m_18);
    man.push_back(ui->m_19);
    man.push_back(ui->m_20);
    man.push_back(ui->m_21);
    man.push_back(ui->m_22);
    man.push_back(ui->m_23);
    man.push_back(ui->m_24);
    man.push_back(ui->m_25);
    man.push_back(ui->m_26);
    man.push_back(ui->m_27);
    man.push_back(ui->m_28);
    man.push_back(ui->m_29);
    man.push_back(ui->m_30);
    man.push_back(ui->m_31);
    man.push_back(ui->m_32);
    man.push_back(ui->m_33);
    man.push_back(ui->m_34);
    man.push_back(ui->m_35);
    man.push_back(ui->m_36);
    man.push_back(ui->m_37);
    man.push_back(ui->m_38);
    man.push_back(ui->m_39);
    man.push_back(ui->m_40);
    man.push_back(ui->m_41);
    man.push_back(ui->m_42);
    man.push_back(ui->m_43);
    man.push_back(ui->m_44);
    man.push_back(ui->m_45);
    man.push_back(ui->m_46);
    man.push_back(ui->m_47);
    man.push_back(ui->m_48);
    man.push_back(ui->m_49);
    man.push_back(ui->m_50);
    man.push_back(ui->m_51);
    man.push_back(ui->m_52);
    man.push_back(ui->m_53);
    man.push_back(ui->m_54);
    man.push_back(ui->m_55);
    man.push_back(ui->m_56);
    man.push_back(ui->m_57);
    man.push_back(ui->m_58);
    man.push_back(ui->m_59);
    man.push_back(ui->m_60);
    man.push_back(ui->m_61);
    man.push_back(ui->m_62);
    man.push_back(ui->m_63);
    unsigned long man_size = man.size();
    for (ulong i = 0; i < man_size; i++) {
        connect(man[i], SIGNAL(clicked(bool)), this, SLOT(onCbClick(bool)));
    }

    exp2.push_back(ui->exp2_0);
    exp2.push_back(ui->exp2_1);
    exp2.push_back(ui->exp2_2);
    exp2.push_back(ui->exp2_3);
    exp2.push_back(ui->exp2_4);
    exp2.push_back(ui->exp2_5);
    exp2.push_back(ui->exp2_6);
    exp2.push_back(ui->exp2_7);
    exp2.push_back(ui->exp2_8);
    exp2.push_back(ui->exp2_9);
    exp2.push_back(ui->exp2_10);
    exp2.push_back(ui->exp2_11);
    exp2.push_back(ui->exp2_12);
    exp2.push_back(ui->exp2_13);
    exp2.push_back(ui->exp2_14);
    exp2.push_back(ui->exp2_15);
    exp2.push_back(ui->exp2_16);
    exp2.push_back(ui->exp2_17);
    exp2.push_back(ui->exp2_18);
    exp2.push_back(ui->exp2_19);
    exp2.push_back(ui->exp2_20);
    exp2.push_back(ui->exp2_21);
    exp2.push_back(ui->exp2_22);
    exp2.push_back(ui->exp2_23);
    exp2.push_back(ui->exp2_24);
    exp2.push_back(ui->exp2_25);
    exp2.push_back(ui->exp2_26);
    exp2.push_back(ui->exp2_27);
    exp2.push_back(ui->exp2_28);
    exp2.push_back(ui->exp2_29);
    exp2.push_back(ui->exp2_30);
    exp2.push_back(ui->exp2_31);
    exp2.push_back(ui->exp2_32);
    exp2.push_back(ui->exp2_33);
    exp2.push_back(ui->exp2_34);
    exp2.push_back(ui->exp2_35);
    exp2.push_back(ui->exp2_36);
    exp2.push_back(ui->exp2_37);
    exp2.push_back(ui->exp2_38);
    exp2.push_back(ui->exp2_39);
    exp2.push_back(ui->exp2_40);
    exp2.push_back(ui->exp2_41);
    exp2.push_back(ui->exp2_42);
    exp2.push_back(ui->exp2_43);
    exp2.push_back(ui->exp2_44);
    exp2.push_back(ui->exp2_45);
    exp2.push_back(ui->exp2_46);
    exp2.push_back(ui->exp2_47);
    exp2.push_back(ui->exp2_48);
    exp2.push_back(ui->exp2_49);
    exp2.push_back(ui->exp2_50);
    exp2.push_back(ui->exp2_51);
    exp2.push_back(ui->exp2_52);
    exp2.push_back(ui->exp2_53);
    exp2.push_back(ui->exp2_54);
    exp2.push_back(ui->exp2_55);
    exp2.push_back(ui->exp2_56);
    exp2.push_back(ui->exp2_57);
    exp2.push_back(ui->exp2_58);
    exp2.push_back(ui->exp2_59);
    exp2.push_back(ui->exp2_60);
    exp2.push_back(ui->exp2_61);
    exp2.push_back(ui->exp2_62);
    exp2.push_back(ui->exp2_63);
    for (ulong i = 0, exp2_size = exp2.size(); i < exp2_size; i++) {
        exp2[i]->clear();
    }
    connect(ui->val_input, SIGNAL(textEdited(const QString &)), this, SLOT(onTextEdited(const QString &)));
}

long double MainWindow::calcDoubleFromBits() {
   t_bldouble tbl;

   tbl.bldbl.sign = ui->sign->checkState() == Qt::CheckState::Checked ? 1 : 0;

   unsigned long exp_val = 0;
   unsigned long exp_size = exp.size();
   for (ulong i = 0; i < exp_size; i++) {
       exp_val |= (exp[i]->checkState() == Qt::CheckState::Checked ? 1L : 0) << i;
   }
   tbl.bldbl.exp = exp_val;

   unsigned long man_val = 0;
   unsigned long man_size = man.size();
   for (ulong i = 0; i < man_size; i++) {
       man_val |= (man[i]->checkState() == Qt::CheckState::Checked ? 1L : 0) << i;
   }
   tbl.bldbl.man = man_val;
   return tbl.val;
}

void MainWindow::onCbClick(bool state) {
    (void) state;
    long double val = calcDoubleFromBits();
    const char *text = std::to_string(val).data();
    qInfo(text);
    ui->val_calc->setText(text);
    ui->val_input->setText(text);
    calcExp(val);
}

void MainWindow::calcExp(long double val) {
    t_bldouble tbl;
    tbl.val = val;
    long expval = tbl.bldbl.exp - 16382;
    ui->exp_val->setText(QStringLiteral("val =  %1 (%2)").arg(tbl.bldbl.exp).arg(expval));
    for (ulong i = 0, size = exp2.size(); i < size; i++) {
        exp2[size - 1 - i]->setText(std::to_string(expval - (long)i - 1).data());
    }

}

void MainWindow::onTextEdited(const QString &text) {
    t_bldouble tbl;
    long double ld = std::strtold(text.toUtf8().data(), NULL);
    tbl.val = ld;

    ui->sign->setCheckState(tbl.bldbl.sign == 1 ? Qt::CheckState::Checked : Qt::CheckState::Unchecked);

    ulong exp_size = exp.size();
    for (ulong i = 0; i < exp_size; i++) {
        exp[i]->setCheckState(tbl.bldbl.exp & (1L << i) ? Qt::CheckState::Checked : Qt::CheckState::Unchecked);
    }

    ulong man_size = man.size();
    for (ulong i = 0; i < man_size; i++) {
        man[i]->setCheckState(tbl.bldbl.man & (1L << i) ? Qt::CheckState::Checked : Qt::CheckState::Unchecked);
    }
    calcExp(ld);
    ui->val_calc->setText(std::to_string(ld).data());
}

MainWindow::~MainWindow()
{
    delete ui;
}

