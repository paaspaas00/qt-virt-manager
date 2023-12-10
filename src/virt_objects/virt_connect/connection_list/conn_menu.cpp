#include "conn_menu.h"

ConnectionMenu::ConnectionMenu(QWidget *parent)
    : QMenu(parent)
{
    this->act = addAction(QIcon::fromTheme("network-connect"), tr("Open Connection"));

    addSeparator();

    this->display  = addAction(QIcon::fromTheme("view-visible"), tr("Overview of Connection"));
    this->edit     = addAction(QIcon::fromTheme("configure"),tr("Edit Connection"));
    this->clean    = addAction(QIcon::fromTheme("list-remove"), tr("Delete Connection"));

    addSeparator();

    this->refresh  = addAction(QIcon::fromTheme("view-refresh"),tr("Refresh Localhost Connection"));

    setSeparatorsCollapsible(true);
}
