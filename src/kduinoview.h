/***************************************************************************
 *   Copyright (C) %{CURRENT_YEAR} by %{AUTHOR} <%{EMAIL}>                            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

#ifndef KDUINOVIEW_H
#define KDUINOVIEW_H

#include <QtGui/QWidget>

#include "ui_kduinoview_base.h"

class QPainter;
class KUrl;

/**
 * This is the main view class for KDuino.  Most of the non-menu,
 * non-toolbar, and non-statusbar (e.g., non frame) GUI code should go
 * here.
 *
 * @short Main view
 * @author %{AUTHOR} <%{EMAIL}>
 * @version %{VERSION}
 */

class KDuinoView : public QWidget, public Ui::kduinoview_base
{
    Q_OBJECT
public:
    /**
     * Default constructor
     */
    KDuinoView(QWidget *parent);

    /**
     * Destructor
     */
    virtual ~KDuinoView();

private:
    Ui::kduinoview_base ui_kduinoview_base;

signals:
    /**
     * Use this signal to change the content of the statusbar
     */
    void signalChangeStatusbar(const QString& text);

    /**
     * Use this signal to change the content of the caption
     */
    void signalChangeCaption(const QString& text);

private slots:
    void switchColors();
    void settingsChanged();
};

#endif // KDuinoVIEW_H
