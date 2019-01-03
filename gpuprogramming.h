#ifndef GPUPROGRAMMING_H
#define GPUPROGRAMMING_H

#include <QMainWindow>

namespace Ui {
class GPUprogramming;
}

class GPUprogramming : public QMainWindow
{
    Q_OBJECT

public:
    explicit GPUprogramming(QWidget *parent = 0);
    ~GPUprogramming();

private:
    Ui::GPUprogramming *ui;
};

#endif // GPUPROGRAMMING_H
