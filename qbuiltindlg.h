#ifndef QBUILTINDLG_H
#define QBUILTINDLG_H

#include <QDialog>
#include<QPushButton>
#include<QTextEdit>
class Qbuiltindlg : public QDialog
{
    Q_OBJECT

public:
    Qbuiltindlg(QWidget *parent = nullptr);
    ~Qbuiltindlg();
private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
};
#endif // QBUILTINDLG_H
