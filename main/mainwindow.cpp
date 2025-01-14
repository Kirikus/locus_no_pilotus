#include "mainwindow.h"

#include "../gui/hill.h"
#include "../gui/target.h"
#include "../gui/trappy_circle.h"
#include "../gui/trappy_line.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  gui::Target t_1(3, 4);
  gui::Target t_2(2, 1);
  gui::Target t_3(1, 1);

  t_1.Draw(ui->plot);
  t_2.Draw(ui->plot);
  t_3.Draw(ui->plot);

  gui::TrappyLine tr{t_1, t_2};
  tr.Draw(ui->plot);

  gui::TrappyCircle trc{1, 2, 50};
  gui::Hill hill{{2, 3}, 40};

  trc.Draw(ui->plot);
  hill.Draw(ui->plot);
}

MainWindow::~MainWindow() { delete ui; }
