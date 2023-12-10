#include "dock_menu.h"

DockMenu::DockMenu(QWidget *parent) :
    QMenu(parent)
{
    logAct = addAction(QIcon::fromTheme("folder-log"), tr("&Log"));
    logAct->setCheckable(true);
    
    addSeparator();

    domainAct = addAction(QIcon::fromTheme("computer"), tr("&Virtual Machines"));
    domainAct->setCheckable(true);
    networkAct = addAction(QIcon::fromTheme("network-wired"), tr("&Networks"));
    networkAct->setCheckable(true);
    storageAct = addAction(QIcon::fromTheme("folder-database"), tr("&Storage Pools"));
    storageAct->setCheckable(true);
    ifaceAct = addAction(QIcon::fromTheme("network-wired"), tr("&Interfaces"));
    ifaceAct->setCheckable(true);
    secretAct = addAction(QIcon::fromTheme("security-low"), tr("Sec&rets"));
    secretAct->setCheckable(true);
    nwfilterAct = addAction(QIcon::fromTheme("view-filter"), tr("Network &Filters"));
    nwfilterAct->setCheckable(true);
}
