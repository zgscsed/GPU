#ifndef RENDERINGWIDGET_H
#define RENDERINGWIDGET_H

#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QWidget>

class RenderingWidget : public QOpenGLWidget,protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit RenderingWidget(QWidget *parent = nullptr);
    ~RenderingWidget();

    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

signals:

public slots:
    void Open();
    void Save();
    void Clear();

    void SetInfluceFactor(int infFactor);
    void SetSimpleMode();
    void SetDenoisyMode();
    void SetNormalMapMode();
    void ChangeDenoiseMode();
};

#endif // RENDERINGWIDGET_H
