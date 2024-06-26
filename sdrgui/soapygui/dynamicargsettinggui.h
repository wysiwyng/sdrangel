///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 maintech GmbH, Otto-Hahn-Str. 15, 97204 Hoechberg, Germany //
// written by Christian Daniel                                                   //
// Copyright (C) 2015-2019 Edouard Griffiths, F4EXB <f4exb06@gmail.com>          //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef SDRGUI_SOAPYGUI_DYNAMICARGSETTINGGUI_H_
#define SDRGUI_SOAPYGUI_DYNAMICARGSETTINGGUI_H_

#include <QObject>
#include <QString>
#include <QVariant>

#include "export.h"
#include "arginfogui.h"

class SDRGUI_API DynamicArgSettingGUI : public QObject
{
    Q_OBJECT
public:
    DynamicArgSettingGUI(ArgInfoGUI *argSettingGUI, const QString& name, QObject *parent = 0);
    ~DynamicArgSettingGUI();

    const QString& getName() const { return m_name; }
    QVariant getValue() const;
    void setValue(const QVariant& value);

signals:
    void valueChanged(QString itemName, QVariant value);

private slots:
    void processValueChanged();

private:
    ArgInfoGUI *m_argSettingGUI;
    QString m_name;
};




#endif /* SDRGUI_SOAPYGUI_DYNAMICARGSETTINGGUI_H_ */
