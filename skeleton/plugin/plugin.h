// Copyright (c) 2013-2018 LG Electronics, Inc.
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

#ifndef PLUGIN_H
#define PLUGIN_H

#include <maliit/plugins/inputmethodplugin.h>
#include <QObject>

class SkullPlugin
    : public QObject, public Maliit::Plugins::InputMethodPlugin
{
    Q_OBJECT
    Q_INTERFACES(Maliit::Plugins::InputMethodPlugin)
    Q_PLUGIN_METADATA(IID  "org.maliit.plugin.skeleton"
                      FILE "plugin.json")

public:
    SkullPlugin();

    virtual QString name() const;
    virtual MAbstractInputMethod *createInputMethod(MAbstractInputMethodHost *host);
    virtual QSet<Maliit::HandlerState> supportedStates() const;

private:
    QSet<Maliit::HandlerState> allowedStates;
};

#endif // PLUGIN_H
