#ifndef GAMEDIALOG_H
#define GAMEDIALOG_H

#include <EQWidget.h>
#include <Game.h>
#include <QDialog>
#include <User.h>

namespace Ui {
class GameDialog;
}

class GameDialog : public QDialog {
  Q_OBJECT

public:
  explicit GameDialog(Game *game, QWidget *parent = 0);
  ~GameDialog();

protected:
  void updateEQ();

private:
  Ui::GameDialog *ui;
  Game *environment;
  EQWidget *eqwidget;
};

#endif // GAMEDIALOG_H