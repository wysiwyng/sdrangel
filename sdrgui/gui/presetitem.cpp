///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 maintech GmbH, Otto-Hahn-Str. 15, 97204 Hoechberg, Germany //
// written by Christian Daniel                                                   //
// Copyright (C) 2017, 2019 Edouard Griffiths, F4EXB <f4exb06@gmail.com>         //
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

#include "gui/presetitem.h"

PresetItem::PresetItem(QTreeWidgetItem* parent, const QStringList& strings, quint64 frequency, int type) :
	QTreeWidgetItem(parent, strings, type),
	m_frequency(frequency)
{
}

bool PresetItem::operator<(const QTreeWidgetItem& other) const
{
	return m_frequency < ((const PresetItem&)other).m_frequency;
}
