#include "renderingwidget.h"

#define DELETE_PTR(ptr) \
    if (ptr != NULL)\
{\
    delete ptr;\
    ptr = NULL;\
    }\

RenderingWidget::RenderingWidget(QWidget *parent) : QOpenGLWidget(parent)
{

}

RenderingWidget::~RenderingWidget()
{

}

void RenderingWidget::initializeGL()
{

}

void RenderingWidget::resizeGL(int w, int h)
{

}

void RenderingWidget::paintGL()
{



}

void RenderingWidget::Open()
{

}
void RenderingWidget::Save()
{

}
void RenderingWidget::Clear()
{

}

void RenderingWidget::SetInfluceFactor(int infFactor)
{


}
void RenderingWidget::SetSimpleMode()
{


}
void RenderingWidget::SetDenoisyMode()
{

}
void RenderingWidget::SetNormalMapMode()
{

}
void RenderingWidget::ChangeDenoiseMode()
{

}
