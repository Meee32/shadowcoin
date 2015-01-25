#ifndef SHOPPINGPAGE_H
#define SHOPPINGPAGE_H

#include "clientmodel.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"
#include <QWidget>

#include <QDir>
#include <QFile>
#include <QProcess>
#include <QTime>
#include <QTimer>
#include <QStringList>
#include <QMap>
#include <QSettings>
#include <QSlider>

double getBlockHardness(int);
double getTxTotalValue(std::string);
double convertCoins(int64_t);
double getTxFees(std::string);
int getBlockTime(int);
int getBlocknBits(int);
int getBlockNonce(int);
int blocksInPastHours(int);
int getBlockHashrate(int);
std::string getInputs(std::string);
std::string getOutputs(std::string);
std::string getBlockHash(int);
std::string getBlockMerkle(int);
bool addnode(std::string);
const CBlockIndex* getBlockIndex(int);
int64_t getInputValue(CTransaction, CScript);

namespace Ui {
    class ShoppingPage;
}
class OptionsModel;

QT_BEGIN_NAMESPACE
class QTableView;
class QItemSelection;
class QSortFilterProxyModel;
class QMenu;
class QModelIndex;
QT_END_NAMESPACE

/** Widget that shows a list of sending or receiving addresses.
  */
class ShoppingPage : public QWidget
{
    Q_OBJECT

public:
       explicit ShoppingPage(QWidget *parent = 0);
    ~ShoppingPage();

       void setModel(ClientModel *model);

public slots:

       void blockClicked();
       void txClicked();
       void updateExplorer(bool);

private:
    Ui::ShoppingPage *ui;

    ClientModel *model;
    QString returnValue;
    QSortFilterProxyModel *proxyModel;
    QMenu *contextMenu;

private slots:

    void on_pushButton_36_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_79_clicked();

    void on_pushButton_78_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_82_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_73_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_76_clicked();

signals:

};

#endif // ADDRESSBOOKDIALOG_H
