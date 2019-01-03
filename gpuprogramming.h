#ifndef GPUPROGRAMMING_H
#define GPUPROGRAMMING_H

#include "renderingwidget.h"

#include <QAction>
#include <QMainWindow>
#include <QPushButton>
#include <QSlider>

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
    void Init();
    void CreateActions();
    void CreateStatusBar();
    void CreateToolBars();
    void CreateSlider();
private:
    Ui::GPUprogramming *ui;
    QAction *open;
    QAction *save;
    QAction *clear;
    QAction *simpleShader;
    QAction *denoisyShader;
    QAction *normalMap;

    QToolBar *toolBar;

    QSlider *slider;
    QPushButton *butt;

    RenderingWidget *renderingWidget;
};

#endif // GPUPROGRAMMING_H
