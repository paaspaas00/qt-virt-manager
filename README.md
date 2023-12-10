qt-virt-manager
=================

A GUI application for managing virtual machines.
At the moment icons from the original icon pack are disabled, names are somewhat changed to use Breeze system icons (KDE Plasma 5+), so Win & Mac users may experience problems

![Screenshot_20231210_224103](https://github.com/paaspaas00/qt-virt-manager/assets/151774837/d59304cc-7b53-4275-b963-e44df025d97a)

![Screenshot_20231210_224243](https://github.com/paaspaas00/qt-virt-manager/assets/151774837/76d26d4a-3c83-4447-8c36-b5cdfe8c28b3)

![Screenshot_20231210_224411](https://github.com/paaspaas00/qt-virt-manager/assets/151774837/157cab3d-09ff-4846-8418-658485f52cb5)


Known issues:

    1. If failures occur in connections that are using ssh,
       you must ensure that in the system installed ssh
       and an application like ssh-askpass for your DE,
       also the environment variable SSH_ASKPASS was set.
       For example: SSH_ASKPASS=/usr/bin/ksshaskpass
       You can do it in $HOME/.bash_profile file at least.

    2. Adding devices implemented partially.

    3. In Spice client viewer:

        * the Smartcard manager is not implemented yet.

Building parameters:

    BUILD_QT_VERSION
        if not defined or equal 5, then will build with Qt5,
        if equal 4, then with Qt4 (last supported version 0.42.67)

    WITH_LIBCACARD
        if defined and above zero, then libcacard.h required
        and will used SpiceSmartcard Channel for smartcards

    USE_SPICE_AUDIO
        if not defined or above zero, then will used
        Spice[Playback/Record] Channels for audio

    WITH_SPICE_SUPPORT
        if not defined or above zero, then will build with SPICE

    WITH_VNC_SUPPORT
        if not defined or above zero, then will build with VNC

    WITH_LXC_SUPPORT
        if not defined or above zero, then will build with LXC

Build requires:

    * with Qt4              (optional, BUILD_QT_VERSION=4)
    libQtCore.so
    libQtGui.so
    libQtMultimedia.so
    libQtSvg.so
    libQtXml.so
    libQtNetwork.so
    libqtermwidget4.so

    * with Qt5              (default, BUILD_QT_VERSION=5)
    libQt5Core.so
    libQt5Gui.so
    libQt5Multimedia.so
    libQt5Svg.so
    libQt5Widgets.so
    libQt5Xml.so
    libQt5Network.so
    libqtermwidget5.so

    libcacard.so            (optional, WITH_LIBCACARD)

    libgio-2.0.so
    libglib-2.0.so
    libgmodule-2.0.so
    libgobject-2.0.so
    libgthread-2.0.so
    libspice-client-glib-2.0.so
    libvncclient.so
    libvirt.so

    libkrdccore.so          (optional, if building occures on Linux)

Experimental `HomeBrew` for OS X

  * [README](https://github.com/F1ash/homebrew-qt-virt-manager) [![Build Status](https://travis-ci.org/F1ash/qt-virt-manager.svg?branch=master)](https://travis-ci.org/F1ash/qt-virt-manager)

