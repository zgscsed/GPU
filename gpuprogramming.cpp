#include "gpuprogramming.h"
#include "renderingwidget.h"
#include "ui_gpuprogramming.h"

#include <QGridLayout>

GPUprogramming::GPUprogramming(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GPUprogramming)
{
    ui->setupUi(this);
    Init();
}

GPUprogramming::~GPUprogramming()
{
    delete ui;
}

void GPUprogramming::Init()
{
    renderingWidget = new RenderingWidget(this);
        setGeometry(300, 150, 800, 600);
        butt = new QPushButton("Denoise",this);
        CreateActions();
        CreateStatusBar();
        CreateToolBars();
        CreateSlider();


        QGridLayout *grl = new QGridLayout(this);

        grl->addWidget(slider,0,1,7,3);
        grl->addWidget(renderingWidget,0,2,8,8);
        grl->addWidget(butt,7,0,1,2);

        centralWidget()->setLayout(grl);
}
void GPUprogramming::CreateActions()
{
    open = new QAction("Open", this);
        open->setShortcut(tr("Ctrl+F"));
        open->setStatusTip("Open a obj file.");
        connect(open,&QAction::triggered,renderingWidget,&RenderingWidget::Open);

        save = new QAction("Save", this);
        save->setShortcut(QKeySequence::Save);
        save->setStatusTip("Save a obj file.");
        connect(save,&QAction::triggered,renderingWidget,&RenderingWidget::Save);

        clear = new QAction("Clear",this);
        clear->setStatusTip("Delete the model.");
        connect(clear, &QAction::triggered, renderingWidget, &RenderingWidget::Clear);


        simpleShader = new QAction("SimpleShader", this);
        simpleShader->setStatusTip("Choose the simple-shader mode.");
        connect(simpleShader, &QAction::triggered, renderingWidget, &RenderingWidget::SetSimpleMode);

        denoisyShader = new QAction("DenoisyShader", this);
        denoisyShader->setStatusTip("Choose the denoisy-shader mode.");
        connect(denoisyShader, &QAction::triggered, renderingWidget, &RenderingWidget::SetDenoisyMode);

        normalMap = new QAction("NormalMapShader",this);
        normalMap->setStatusTip("Choose the normal-map mode.");
        connect(normalMap, &QAction::triggered, renderingWidget, &RenderingWidget::SetNormalMapMode);

        connect(butt,&QPushButton::clicked,renderingWidget,&RenderingWidget::ChangeDenoiseMode);
}
void GPUprogramming::CreateStatusBar()
{
    statusBar();
}
void GPUprogramming::CreateToolBars()
{
    toolBar = addToolBar("ToolBar");
    toolBar->addAction(open);
    toolBar->addAction(save);
    toolBar->addAction(clear);

    toolBar->addSeparator();
    toolBar->addAction(simpleShader);
    toolBar->addAction(denoisyShader);
    toolBar->addAction(normalMap);
}

void GPUprogramming::CreateSlider()
{
    slider = new QSlider(this);

    slider->setMinimum(0);
    slider->setMaximum(50);

    slider->setValue(50);
    slider->setStatusTip(QString::number((slider->value())));

    connect(slider,&QSlider::valueChanged,renderingWidget,&RenderingWidget::SetInfluceFactor);
}
