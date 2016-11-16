#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("Slide along!");

    QSpinBox *spinbox = new QSpinBox;
    QSlider *slider_h = new QSlider(Qt::Horizontal);
    QSlider *slider_v = new QSlider(Qt::Vertical);

    spinbox->setRange(0, 200);
    slider_h->setRange(0, 200);
    slider_v->setRange(0, 200);

    QObject::connect(spinbox, SIGNAL(valueChanged(int)),
                     slider_h, SLOT(setValue(int)));
    QObject::connect(slider_h, SIGNAL(valueChanged(int)),
                     spinbox, SLOT(setValue(int)));
    QObject::connect(spinbox, SIGNAL(valueChanged(int)),
                     slider_v, SLOT(setValue(int)));
    QObject::connect(slider_v, SIGNAL(valueChanged(int)),
                     spinbox, SLOT(setValue(int)));
    QObject::connect(slider_v, SIGNAL(valueChanged(int)),
                     slider_h, SLOT(setValue(int)));
    QObject::connect(slider_h, SIGNAL(valueChanged(int)),
                     slider_v, SLOT(setValue(int)));

    spinbox->setValue(35);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinbox);
    layout->addWidget(slider_h);
    layout->addWidget(slider_v);

    window->setLayout(layout);

    window->show();

    return app.exec();
}
