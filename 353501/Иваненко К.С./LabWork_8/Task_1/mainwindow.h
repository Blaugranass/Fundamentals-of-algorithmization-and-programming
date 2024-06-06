#pragma once

#include <QMainWindow>
#include <QGraphicsScene>
#include "tree.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
  class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow();
  ~MainWindow();

private slots:
  void on_insert_clicked();
  void on_test_clicked();
  void on_remove_clicked();

  void on_removeSubtree_clicked();

protected:
  Ui::MainWindow *ui;
  BinarySearchTree *tree;
};
