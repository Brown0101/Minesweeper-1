#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QDialog>

namespace Ui {
    class AboutWindow;
}

class AboutWindow : public QDialog {
    Q_OBJECT
public:
    AboutWindow(QWidget *parent = 0);
    ~AboutWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::AboutWindow *ui;
};

#endif // ABOUTWINDOW_H
