// Copyright (c) 2016-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef NORWEGIAN_AUTOMATA_H
#define NORWEGIAN_AUTOMATA_H

#include "automatabase.h"
#include <QLocale>

class NorwegianAutomata : public AutomataBase
{

public:
    NorwegianAutomata()
    {        
        m_accentSelect = false;
        m_accents.insert(QString(0x00B4));
        m_accents.insert(QString(0x0060));
        m_accents.insert(QString(0x00A8));
        m_accents.insert(QString(0x005E));
        m_accents.insert(QString(0x007E));

        addNumberKeys();
        addSymbolKeys();
        addNormalKeys();
        addShiftedKeys();
        addAltKeysForHID();
        addAcuteAccentForHID();
        addGraveAccentKeysForHID();
        addDiaeresisAccentForHID();
        addCircumFlexAccentKeysForHID();
        addTildeAccentKeysForHID();
        addAccentKeysForVKB();
    }

    void setPreedit(const QString &preeditString, int cursorPos)
    {
        m_surroundingText = preeditString;
    }

    bool isPredictionSupported()
    {
        return true;
    }

    static AutomataBase* create()
    {
        return new NorwegianAutomata();
    }

private:
    void addNumberKeys()
    {
        m_keymap.insert(0x30,QString(0x30));
        m_keymap.insert(0x31,QString(0x31));
        m_keymap.insert(0x32,QString(0x32));
        m_keymap.insert(0x33,QString(0x33));
        m_keymap.insert(0x34,QString(0x34));
        m_keymap.insert(0x35,QString(0x35));
        m_keymap.insert(0x36,QString(0x36));
        m_keymap.insert(0x37,QString(0x37));
        m_keymap.insert(0x38,QString(0x38));
        m_keymap.insert(0x39,QString(0x39));
    }

    void addSymbolKeys()
    {
        m_keymap.insert(0x60,QString(0x7C));
        m_keymap.insert(0x3B,QString(0xF8));
        m_keymap.insert(0x3A,QString(0xD8));
        m_keymap.insert(0x27,QString(0xE6));
        m_keymap.insert(0x22,QString(0xC6));
        m_keymap.insert(0x5B,QString(0xE5));
        m_keymap.insert(0x7B,QString(0xC5));
        m_keymap.insert(0x7E,QString(0xA7));
        m_keymap.insert(0x21,QString(0x21));
        m_keymap.insert(0x40,QString(0x22));
        m_keymap.insert(0x23,QString(0x23));
        m_keymap.insert(0x24,QString(0xA4));
        m_keymap.insert(0x25,QString(0x25));
        m_keymap.insert(0x5E,QString(0x26));
        m_keymap.insert(0x26,QString(0x2F));
        m_keymap.insert(0x2A,QString(0x28));
        m_keymap.insert(0x28,QString(0x29));
        m_keymap.insert(0x29,QString(0x3D));
        m_keymap.insert(0x5F,QString(0x3F));
        m_keymap.insert(0x3D,QString(0x5C));
        m_keymap.insert(0x2B,QString(0x60));
        m_keymap.insert(0x5C,QString(0x27));
        m_keymap.insert(0x7C,QString(0x2A));
        m_keymap.insert(0x5D,QString(0xA8));
        m_keymap.insert(0x7D,QString(0x5E));
        m_keymap.insert(0x2C,QString(0x2C));
        m_keymap.insert(0x3C,QString(0x3B));
        m_keymap.insert(0x2E,QString(0x2E));
        m_keymap.insert(0x3E,QString(0x3A));
        m_keymap.insert(0x2F,QString(0x2D));
        m_keymap.insert(0x3F,QString(0x5F));
        m_keymap.insert(0x2D,QString(0x2B));
    }

    void addNormalKeys()
    {
        m_keymap.insert(0x71,QString(0x71));
        m_keymap.insert(0x77,QString(0x77));
        m_keymap.insert(0x65,QString(0x65));
        m_keymap.insert(0x72,QString(0x72));
        m_keymap.insert(0x74,QString(0x74));
        m_keymap.insert(0x79,QString(0x79));
        m_keymap.insert(0x75,QString(0x75));
        m_keymap.insert(0x69,QString(0x69));
        m_keymap.insert(0x6F,QString(0x6F));
        m_keymap.insert(0x70,QString(0x70));
        m_keymap.insert(0X61,QString(0X61));
        m_keymap.insert(0x73,QString(0x73));
        m_keymap.insert(0x64,QString(0x64));
        m_keymap.insert(0x66,QString(0x66));
        m_keymap.insert(0x67,QString(0x67));
        m_keymap.insert(0x68,QString(0x68));
        m_keymap.insert(0x6A,QString(0x6A));
        m_keymap.insert(0x6B,QString(0x6B));
        m_keymap.insert(0x6C,QString(0x6C));
        m_keymap.insert(0x7A,QString(0x7A));
        m_keymap.insert(0x78,QString(0x78));
        m_keymap.insert(0x63,QString(0x63));
        m_keymap.insert(0x76,QString(0x76));
        m_keymap.insert(0x62,QString(0x62));
        m_keymap.insert(0x6E,QString(0x6E));
        m_keymap.insert(0x6D,QString(0x6D));
        m_keymap.insert(0x20,QString(0x20));
    }

    void addShiftedKeys()
    {
        m_keymap.insert(0x51,QString(0x51));
        m_keymap.insert(0x57,QString(0x57));
        m_keymap.insert(0x45,QString(0x45));
        m_keymap.insert(0x52,QString(0x52));
        m_keymap.insert(0x54,QString(0x54));
        m_keymap.insert(0x59,QString(0x59));
        m_keymap.insert(0x55,QString(0x55));
        m_keymap.insert(0x49,QString(0x49));
        m_keymap.insert(0x4F,QString(0x4F));
        m_keymap.insert(0x50,QString(0x50));
        m_keymap.insert(0x41,QString(0x41));
        m_keymap.insert(0x53,QString(0x53));
        m_keymap.insert(0x44,QString(0x44));
        m_keymap.insert(0x46,QString(0x46));
        m_keymap.insert(0x47,QString(0x47));
        m_keymap.insert(0x48,QString(0x48));
        m_keymap.insert(0x4A,QString(0x4A));
        m_keymap.insert(0x4B,QString(0x4B));
        m_keymap.insert(0x4C,QString(0x4C));
        m_keymap.insert(0x5A,QString(0x5A));
        m_keymap.insert(0x58,QString(0x58));
        m_keymap.insert(0x43,QString(0x43));
        m_keymap.insert(0x56,QString(0x56));
        m_keymap.insert(0x42,QString(0x42));
        m_keymap.insert(0x4E,QString(0x4E));
        m_keymap.insert(0x4D,QString(0x4D));
    }

    void addAltKeysForHID()
    {
        m_keymap.insert(0xA1,QString(0x0040));
        m_keymap.insert(0xA2,QString(0x00A3));
        m_keymap.insert(0xA3,QString(0x0024));
        m_keymap.insert(0xA4,QString(0x20AC));
        m_keymap.insert(0xA6,QString(0x007B));
        m_keymap.insert(0xA7,QString(0x005B));
        m_keymap.insert(0xA8,QString(0x005D));
        m_keymap.insert(0xA9,QString(0x007D));
        m_keymap.insert(0xAB,QString(0x00B4));
        m_keymap.insert(0xAE,QString(0x20AC));
        m_keymap.insert(0xB7,QString(0x007E));
        m_keymap.insert(0xCB,QString(0x00B5));
    }

    void addAcuteAccentForHID()
    {
        m_accentKeymap.insert(QString(0x00B4)+QString(0x61),QString(0x00E1));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x65),QString(0x00E9));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x69),QString(0x00ED));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x6F),QString(0x00F3));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x75),QString(0x00FA));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x79),QString(0x00FD));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x41),QString(0x00C1));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x45),QString(0x00C9));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x49),QString(0x00CD));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x4F),QString(0x00D3));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x55),QString(0x00DA));
        m_accentKeymap.insert(QString(0x00B4)+QString(0x59),QString(0x00DD));
    }

    void addGraveAccentKeysForHID()
    {
        m_accentKeymap.insert(QString(0x60)+QString(0x61),QString(0xE0));
        m_accentKeymap.insert(QString(0x60)+QString(0x65),QString(0xE8));
        m_accentKeymap.insert(QString(0x60)+QString(0x69),QString(0xEC));
        m_accentKeymap.insert(QString(0x60)+QString(0x6F),QString(0xF2));
        m_accentKeymap.insert(QString(0x60)+QString(0x75),QString(0xF9));
        m_accentKeymap.insert(QString(0x60)+QString(0x41),QString(0xC0));
        m_accentKeymap.insert(QString(0x60)+QString(0x45),QString(0xC8));
        m_accentKeymap.insert(QString(0x60)+QString(0x49),QString(0xCC));
        m_accentKeymap.insert(QString(0x60)+QString(0x4F),QString(0xD2));
        m_accentKeymap.insert(QString(0x60)+QString(0x55),QString(0xD9));
    }

    void addDiaeresisAccentForHID()
    {
        m_accentKeymap.insert(QString(0x00A8)+QString(0x61),QString(0x00E4));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x65),QString(0x00EB));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x69),QString(0x00EF));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x6F),QString(0x00F6));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x75),QString(0x00FC));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x79),QString(0x00FF));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x41),QString(0x00C4));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x45),QString(0x00CB));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x49),QString(0x00CF));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x4F),QString(0x00D6));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x55),QString(0x00DC));
        m_accentKeymap.insert(QString(0x00A8)+QString(0x59),QString(0x0178));
    }

    void addCircumFlexAccentKeysForHID()
    {
        m_accentKeymap.insert(QString(0x5E)+QString(0x61),QString(0xE2));
        m_accentKeymap.insert(QString(0x5E)+QString(0x65),QString(0xEA));
        m_accentKeymap.insert(QString(0x5E)+QString(0x69),QString(0xEE));
        m_accentKeymap.insert(QString(0x5E)+QString(0x6F),QString(0xF4));
        m_accentKeymap.insert(QString(0x5E)+QString(0x75),QString(0xFB));
        m_accentKeymap.insert(QString(0x5E)+QString(0x41),QString(0xC2));
        m_accentKeymap.insert(QString(0x5E)+QString(0x45),QString(0xCA));
        m_accentKeymap.insert(QString(0x5E)+QString(0x49),QString(0xCE));
        m_accentKeymap.insert(QString(0x5E)+QString(0x4F),QString(0xD4));
        m_accentKeymap.insert(QString(0x5E)+QString(0x55),QString(0xDB));
    }

    void addTildeAccentKeysForHID()
    {
        m_accentKeymap.insert(QString(0x007E)+QString(0x61),QString(0x00E3));
        m_accentKeymap.insert(QString(0x007E)+QString(0x6E),QString(0x00F1));
        m_accentKeymap.insert(QString(0x007E)+QString(0x6F),QString(0x00F5));
        m_accentKeymap.insert(QString(0x007E)+QString(0x41),QString(0x00C3));
        m_accentKeymap.insert(QString(0x007E)+QString(0x4E),QString(0x00D1));
        m_accentKeymap.insert(QString(0x007E)+QString(0x4F),QString(0x00D5));
    }

    void addAccentKeysForVKB()
    {
        m_keymap.insert(0xe2,QString(0xE2));
        m_keymap.insert(0xe3,QString(0xe3));
        m_keymap.insert(0xeb,QString(0xeb));
        m_keymap.insert(0xea,QString(0xea));
        m_keymap.insert(0xef,QString(0xef));
        m_keymap.insert(0xee,QString(0xee));
        m_keymap.insert(0xf1,QString(0xf1));
        m_keymap.insert(0xf4,QString(0xf4));
        m_keymap.insert(0xf5,QString(0xf5));
        m_keymap.insert(0xfc,QString(0xfc));
        m_keymap.insert(0xfb,QString(0xfb));
        m_keymap.insert(0xff,QString(0xff));
        m_keymap.insert(0xc2,QString(0xc2));
        m_keymap.insert(0xc3,QString(0xc3));
        m_keymap.insert(0xB5,QString(0xcb));
        m_keymap.insert(0xca,QString(0xca));
        m_keymap.insert(0xcf,QString(0xcf));
        m_keymap.insert(0xce,QString(0xce));
        m_keymap.insert(0xd1,QString(0xd1));
        m_keymap.insert(0xd4,QString(0xd4));
        m_keymap.insert(0xd5,QString(0xd5));
        m_keymap.insert(0xdc,QString(0xdc));
        m_keymap.insert(0xdb,QString(0xdb));
        m_keymap.insert(0x13be,QString(0x178));
    }
};

#endif // NORWEGIAN_AUTOMATA_H
